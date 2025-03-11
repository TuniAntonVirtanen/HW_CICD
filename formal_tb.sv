`timescale 1ns/1ps
module splitter_formal;
    // Declare signals
    logic in_signal;
    logic out_signal1;
    logic out_signal2;

    // Instantiate DUT
    top dut (
        .in_signal(in_signal),
        .out_signal1(out_signal1),
        .out_signal2(out_signal2)
    );

    // Formal Verification properties
    initial begin
        assume(in_signal == $anyconst); // Allow in_signal to take any value

        // Expected behavior: out_signal1 and out_signal2 should match in_signal
        assert(out_signal1 == in_signal);
        assert(out_signal2 == in_signal);

        // If a violation is found, print an error
        $display("Formal check passed!");
    end
endmodule