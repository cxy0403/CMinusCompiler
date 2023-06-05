; ModuleID = 'main'
source_filename = "main"

@_Const_String_ = private constant [11 x i8] c"HelloWorld\00"

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @main() {
entrypoint:
  %str = alloca i8*
  %a = alloca [3 x i32]
  %tmpvar = getelementptr inbounds [3 x i32], [3 x i32]* %a, i32 0, i32 0
  store i32 1, i32* %tmpvar
  %tmpvar1 = getelementptr inbounds [3 x i32], [3 x i32]* %a, i32 0, i32 1
  %tmpvar2 = getelementptr inbounds [3 x i32], [3 x i32]* %a, i32 0, i32 0
  %tmpvar3 = load i32, i32* %tmpvar2
  store i32 %tmpvar3, i32* %tmpvar1
  %tmpvar4 = getelementptr inbounds [3 x i32], [3 x i32]* %a, i32 0, i32 2
  %tmpvar5 = getelementptr inbounds [3 x i32], [3 x i32]* %a, i32 0, i32 0
  %tmpvar6 = load i32, i32* %tmpvar5
  %tmpvar7 = getelementptr inbounds [3 x i32], [3 x i32]* %a, i32 0, i32 1
  %tmpvar8 = load i32, i32* %tmpvar7
  %addtmpi = add i32 %tmpvar6, %tmpvar8
  store i32 %addtmpi, i32* %tmpvar4
  store i8* getelementptr inbounds ([11 x i8], [11 x i8]* @_Const_String_, i32 0, i32 0), i8** %str
  ret i32 0
}
