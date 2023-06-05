; ModuleID = 'main'
source_filename = "main"

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @main() {
entrypoint:
  %i = alloca i32
  store i32 0, i32* %i
  ret i32 0
}
