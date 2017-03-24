`timescale 1ns / 1ps

module automaton(
    input               clk,            // synchronization signal
    input [31:0]        rule,           // next generation rule; only used for bonus points
    output reg [5:0]    row,            // row index cell to be read/written
    output reg [5:0]    col,            // column index cell to be read/written
    output reg          world_we,       // write enable: 0 - cell is read, 1 - cell is written
    input               world_in,       // when reading: current cell value in world
    output reg          world_out,      // when writing: new cell value in world
    output reg          update_done);   // next generation was calculated; must be active for 1 clock cycle

// variabile:
reg N, V, C, E, S;
reg[63:0] cache[2:0];
reg[3:0] state, next_state;
reg[64:0] i;
reg[5:0] aux;

// initializare:
initial begin

	i = 0;
	
	for (i = 0; i < 64; i = i + 1)
	begin
		cache[0][i] = 0;
		cache[1][i] = 0;
		cache[2][i] = 0;
	end
	
	state = 0;
	next_state = 0;
	row = 0;
	col = 0;
	world_we = 0;
	update_done = 0;
	
end

// trecere la starea urmatoare:
always @(posedge clk)
begin
	state <= next_state;
end

always @(*)
begin
if (state == next_state)
begin
	if (world_in == 0 || world_in == 1)
	begin
	case (state)
	
	0:	
	// se citesc primele 2 linii:
	begin
		
		update_done = 0;
		world_we = 0;
		
		case(col)
		default:
		begin
			world_we = 0;
			cache[row + 1][col] = world_in;
			col = col + 1;
			next_state = 6;
		end
		63:
		begin
			cache[row + 1][col] = world_in;
			
			if (row == 1)
			begin
				next_state = 1;
			end
			else
			begin
				row = row + 1;
				col = 0;
				next_state = 6;
			end
			
		end
		endcase
	end
	
	1:	// se scriu liniile de la 0 la 62:
	begin
		world_we = 1;
		
		case(col)
		
		default:
			begin
				if (col == 63) row = row - 1;
				
				col = col + 1;
				
				if (row != 0) N = cache[0][col];
				else N = 0;
				
				if (col == 0) V = 0;
				else V = cache[1][col - 1];
				
				C = cache[1][col];
				
				E = cache[1][col + 1];
				
				S = cache[2][col];
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				next_state = 8;
			end
			
			62:
			begin
				col = col + 1;
				
				if (row == 0) N = 0;
				else N = cache[0][col];
				
				V = cache[1][col - 1];
				
				C = cache[1][col];
				
				E = 0;
				
				S = cache[2][col];
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				if (row == 62)
				begin
					next_state = 3;
				end
				else
				begin
					next_state = 4;
				end

			end
			endcase
			end
	
	2:	// se citesc liniile de la 2 la 63:
	begin
		world_we = 0;
		
		case(col)
		
		default:
			begin
				
				cache[0][col] = cache[1][col];
				cache[1][col] = cache[2][col];
				cache[2][col] = world_in;
				
				col = col + 1;
				next_state = 7;
			end
		
		63:
			begin
				cache[0][63] = cache[1][63];
				cache[1][63] = cache[2][63];
				cache[2][63] = world_in;
				
				next_state = 1;
			end
			
		endcase
	end
	
	
		
			
		3:	// se scrie ultima linie:
		begin
			world_we = 1;
			row = 63;
			case(col)
			
			default:
			begin
				col = col + 1;
				
				N = cache[1][col];
				
				if (col == 0) V = 0;
				else V = cache[2][col - 1];
				
				C = cache[2][col];
				
				E = cache[2][col + 1];
				
				S = 0;
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				next_state = 9;
				
			end
			
			62:
			begin
				col = col + 1;
				
				N = cache[1][col];
				
				if (col == 0) V = 0;
				else V = cache[2][col - 1];
				
				C = cache[2][col];
				
				E = 0;
				
				S = 0;
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				next_state = 5;
				
			end
			endcase
		end
		
		4:
		begin
			row = row + 2;
			col = 0;
			world_we = 0;
			next_state = 2;
		end
		
		5:
		begin
			world_we = 0;
			row = 0;
			col = 0;
			next_state = 10;
		end
		
		6:	
	// se citesc primele 2 linii:
	begin
		
		update_done = 0;
		world_we = 0;
		
		case(col)
		default:
		begin
			world_we = 0;
			cache[row + 1][col] = world_in;
			col = col + 1;
			next_state = 0;
		end
		63:
		begin
			cache[row + 1][col] = world_in;
			
			if (row == 1)
			begin
				next_state = 1;
			end
			else
			begin
				row = row + 1;
				col = 0;
				next_state = 0;
			end
			
		end
		endcase
	end
	
	7:	// se citesc liniile de la 2 la 63:
	begin
		world_we = 0;
		
		case(col)
		
		default:
			begin
				
				cache[0][col] = cache[1][col];
				cache[1][col] = cache[2][col];
				cache[2][col] = world_in;
				
				col = col + 1;
				next_state = 2;
			end
		
		63:
			begin
				cache[0][63] = cache[1][63];
				cache[1][63] = cache[2][63];
				cache[2][63] = world_in;
				
				next_state = 1;
			end
			
		endcase
	end
	
	8:	// se scriu liniile de la 0 la 62:
	begin
		world_we = 1;
		
		case(col)
		
		default:
			begin
				if (col == 63) row = row - 1;
				
				col = col + 1;
				
				if (row != 0) N = cache[0][col];
				else N = 0;
				
				if (col == 0) V = 0;
				else V = cache[1][col - 1];
				
				C = cache[1][col];
				
				E = cache[1][col + 1];
				
				S = cache[2][col];
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				next_state = 1;
				
			end
			
			62:
			begin
				col = col + 1;
				
				if (row == 0)N = 0;
				else N = cache[0][col];
				
				V = cache[1][col - 1];
				
				C = cache[1][col];
				
				E = 0;
				
				S = cache[2][col];
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				if (row == 62)
				begin
					next_state = 3;
				end
				else
				begin
					next_state = 4;
				end

			end
			endcase
			end
			
		9:	// se scrie ultima linie:
		begin
			world_we = 1;
			row = 63;
			case(col)
			
			default:
			begin
				col = col + 1;
				
				N = cache[1][col];
				
				if (col == 0) V = 0;
				else V = cache[2][col - 1];
				
				C = cache[2][col];
				
				E = cache[2][col + 1];
				
				S = 0;
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				next_state = 3;
			end
			
			62:
			begin
				col = col + 1;
				
				if (row == 0) N = 0;
				else N = cache[1][col];
				
				if (col == 0) V = 0;
				else V = cache[2][col - 1];
				
				C = cache[2][col];
				
				E = 0;
				
				S = 0;
				
				aux = {N, V, C, E, S};
				
				world_out = rule[aux];
				
				next_state = 5;
				
			end
			endcase
		end
		
		10:
		begin
			update_done = 1;
			next_state = 0;
		end
		
		endcase
end
end
end

endmodule
