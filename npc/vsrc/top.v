// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0

// See also https://verilator.org/guide/latest/examples.html"

module top(
  input a,
  input b,
  output f
);

   reg [31:0] count_c;

   initial begin
      count_c = 0;
      if ($test$plusargs("trace") != 0) begin
         $dumpfile("logs/dump.vcd");
         $dumpvars();
      end
   end

   always_ff @ (posedge a or b) begin
      count_c <= count_c + 1;
      if (count_c >= 3) begin
         $finish;
      end
   end

   assign f = a ^ b;

endmodule
