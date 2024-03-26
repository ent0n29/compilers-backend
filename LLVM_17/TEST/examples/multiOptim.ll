; ModuleID = 'multi.optimized.bc'
source_filename = "opt_test.ll"

define i32 @test_function(i32 %b) {
entry:
  %a = add i32 %b, 1
  %c = sub i32 %a, 1
  %d = add i32 %c, 3
  ret i32 %d
}
