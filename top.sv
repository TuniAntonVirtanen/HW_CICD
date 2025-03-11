module top(
    input logic in_signal,
    output logic out_signal1,
    output logic out_signal2
);
    initial begin
        $display("Hello from top.sv!");
        #10 $finish;
    end
	
	// The input is driven to outputs 1 and 2
	assign out_signal1 = in_signal;
	assign out_signal2 = in_signal;
	
endmodule