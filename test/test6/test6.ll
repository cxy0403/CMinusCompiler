; ModuleID = 'main'
source_filename = "main"

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @fibonacci(i32 %x) {
entrypoint:
  %icmptmp = icmp eq i32 %x, 0
  %icmptmp1 = icmp eq i32 %x, 1
  %tmpOR = or i1 %icmptmp, %icmptmp1
  %ifCond = icmp ne i1 %tmpOR, false
  br i1 %ifCond, label %then, label %else

then:                                             ; preds = %entrypoint
  ret i32 1
  br label %merge

else:                                             ; preds = %entrypoint
  br label %merge

merge:                                            ; preds = %else, %then
  %subtmpi = sub i32 %x, 1
  %calltmp = call i32 @fibonacci(i32 %subtmpi)
  %subtmpi2 = sub i32 %x, 2
  %calltmp3 = call i32 @fibonacci(i32 %subtmpi2)
  %addtmpi = add i32 %calltmp, %calltmp3
  ret i32 %addtmpi
}

define i32 @main() {
entrypoint:
  %x = alloca i32
  store i32 4, i32* %x
  %tmpvar = load i32, i32* %x
  %calltmp = call i32 @fibonacci(i32 %tmpvar)
  ret i32 0
}
