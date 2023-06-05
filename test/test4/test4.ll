; ModuleID = 'main'
source_filename = "main"

@i = private global i32 0
@b = private global i1 false

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @main() {
entrypoint:
  %c = alloca i8
  %f = alloca float
  store i8 109, i8* %c
  store float 1.000000e+00, float* %f
  store i32 2, i32* @i
  %tmpvar = load float, float* %f
  %tmpvar1 = load i32, i32* @i
  %tmptypecast = sitofp i32 %tmpvar1 to float
  %addtmpf = fadd float %tmpvar, %tmptypecast
  store float %addtmpf, float* %f
  %tmpvar2 = load i32, i32* @i
  %addtmpi = add i32 %tmpvar2, 10
  store i32 %addtmpi, i32* @i
  store i1 false, i1* @b
  ret i32 0
}
