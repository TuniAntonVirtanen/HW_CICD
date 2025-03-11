`timescale 1ns1ps
module tb_top;
    initial begin
        $display(Running testbench!);
        #10 $finish;
    end
endmodule