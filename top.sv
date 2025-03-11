module top;
    initial begin
        $display("Hello from top.sv!");
        #10 $finish;
    end
endmodule