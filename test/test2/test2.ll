; ModuleID = 'main'
source_filename = "main"

@arrayA = private global [400 x i32] zeroinitializer
@arrayB = private global [400 x i32] zeroinitializer
@arrayC = private global [400 x i32] zeroinitializer
@0 = private unnamed_addr constant [5 x i8] c"%d%d\00", align 1
@1 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@2 = private unnamed_addr constant [5 x i8] c"%d%d\00", align 1
@_Const_String_ = private constant [24 x i8] c"Incompatible Dimensions\00"
@.str = constant [4 x i8] c"%s\0A\00"
@3 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@_Const_String_.1 = private constant [5 x i8] c"%10d\00"
@_Const_String_.2 = private constant [1 x i8] zeroinitializer
@.str.3 = constant [4 x i8] c"%s\0A\00"

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @main() {
entrypoint:
  %i_b = alloca i32
  %i_a = alloca i32
  %j = alloca i32
  %i = alloca i32
  %NC = alloca i32
  %MC = alloca i32
  %NB = alloca i32
  %MB = alloca i32
  %NA = alloca i32
  %MA = alloca i32
  store i32 0, i32* %MA
  store i32 0, i32* %NA
  store i32 0, i32* %MB
  store i32 0, i32* %NB
  store i32 0, i32* %MC
  store i32 0, i32* %NC
  store i32 0, i32* %i
  store i32 0, i32* %j
  store i32 0, i32* %i_a
  store i32 0, i32* %i_b
  %scanf = call i32 (...) @scanf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @0, i32 0, i32 0), i32* %MA, i32* %NA)
  br label %cond

cond:                                             ; preds = %afterLoop4, %entrypoint
  %tmpvar = load i32, i32* %i
  %tmpvar1 = load i32, i32* %MA
  %icmptmp = icmp slt i32 %tmpvar, %tmpvar1
  %whileCond = icmp ne i1 %icmptmp, false
  br i1 %whileCond, label %loop, label %afterLoop

loop:                                             ; preds = %cond
  br label %cond2

afterLoop:                                        ; preds = %cond
  %scanf18 = call i32 (...) @scanf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @2, i32 0, i32 0), i32* %MB, i32* %NB)
  %tmpvar19 = load i32, i32* %NA
  %tmpvar20 = load i32, i32* %MB
  %icmptmp21 = icmp ne i32 %tmpvar19, %tmpvar20
  %ifCond = icmp ne i1 %icmptmp21, false
  br i1 %ifCond, label %then, label %else

cond2:                                            ; preds = %loop3, %loop
  %tmpvar5 = load i32, i32* %j
  %tmpvar6 = load i32, i32* %NA
  %icmptmp7 = icmp slt i32 %tmpvar5, %tmpvar6
  %whileCond8 = icmp ne i1 %icmptmp7, false
  br i1 %whileCond8, label %loop3, label %afterLoop4

loop3:                                            ; preds = %cond2
  %tmpvar9 = load i32, i32* %i
  %tmpvar10 = load i32, i32* %NA
  %multmpi = mul i32 %tmpvar9, %tmpvar10
  %tmpvar11 = load i32, i32* %j
  %addtmpi = add i32 %multmpi, %tmpvar11
  %tmpvar12 = getelementptr inbounds [400 x i32], [400 x i32]* @arrayA, i32 0, i32 %addtmpi
  %scanf13 = call i32 (...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0), i32* %tmpvar12)
  %tmpvar14 = load i32, i32* %j
  %addtmpi15 = add i32 %tmpvar14, 1
  store i32 %addtmpi15, i32* %j
  br label %cond2

afterLoop4:                                       ; preds = %cond2
  store i32 0, i32* %j
  %tmpvar16 = load i32, i32* %i
  %addtmpi17 = add i32 %tmpvar16, 1
  store i32 %addtmpi17, i32* %i
  br label %cond

then:                                             ; preds = %afterLoop
  %printf = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([24 x i8], [24 x i8]* @_Const_String_, i32 0, i32 0))
  ret i32 0
  br label %merge

else:                                             ; preds = %afterLoop
  br label %merge

merge:                                            ; preds = %else, %then
  store i32 0, i32* %i
  store i32 0, i32* %j
  br label %cond22

cond22:                                           ; preds = %afterLoop31, %merge
  %tmpvar25 = load i32, i32* %i
  %tmpvar26 = load i32, i32* %MB
  %icmptmp27 = icmp slt i32 %tmpvar25, %tmpvar26
  %whileCond28 = icmp ne i1 %icmptmp27, false
  br i1 %whileCond28, label %loop23, label %afterLoop24

loop23:                                           ; preds = %cond22
  br label %cond29

afterLoop24:                                      ; preds = %cond22
  %tmpvar47 = load i32, i32* %MA
  store i32 %tmpvar47, i32* %MC
  %tmpvar48 = load i32, i32* %NB
  store i32 %tmpvar48, i32* %NC
  store i32 0, i32* %i
  store i32 0, i32* %j
  br label %cond49

cond29:                                           ; preds = %loop30, %loop23
  %tmpvar32 = load i32, i32* %j
  %tmpvar33 = load i32, i32* %NB
  %icmptmp34 = icmp slt i32 %tmpvar32, %tmpvar33
  %whileCond35 = icmp ne i1 %icmptmp34, false
  br i1 %whileCond35, label %loop30, label %afterLoop31

loop30:                                           ; preds = %cond29
  %tmpvar36 = load i32, i32* %i
  %tmpvar37 = load i32, i32* %NB
  %multmpi38 = mul i32 %tmpvar36, %tmpvar37
  %tmpvar39 = load i32, i32* %j
  %addtmpi40 = add i32 %multmpi38, %tmpvar39
  %tmpvar41 = getelementptr inbounds [400 x i32], [400 x i32]* @arrayB, i32 0, i32 %addtmpi40
  %scanf42 = call i32 (...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @3, i32 0, i32 0), i32* %tmpvar41)
  %tmpvar43 = load i32, i32* %j
  %addtmpi44 = add i32 %tmpvar43, 1
  store i32 %addtmpi44, i32* %j
  br label %cond29

afterLoop31:                                      ; preds = %cond29
  store i32 0, i32* %j
  %tmpvar45 = load i32, i32* %i
  %addtmpi46 = add i32 %tmpvar45, 1
  store i32 %addtmpi46, i32* %i
  br label %cond22

cond49:                                           ; preds = %afterLoop58, %afterLoop24
  %tmpvar52 = load i32, i32* %i
  %tmpvar53 = load i32, i32* %MC
  %icmptmp54 = icmp slt i32 %tmpvar52, %tmpvar53
  %whileCond55 = icmp ne i1 %icmptmp54, false
  br i1 %whileCond55, label %loop50, label %afterLoop51

loop50:                                           ; preds = %cond49
  br label %cond56

afterLoop51:                                      ; preds = %cond49
  store i32 0, i32* %i
  store i32 0, i32* %j
  br label %cond105

cond56:                                           ; preds = %afterLoop66, %loop50
  %tmpvar59 = load i32, i32* %j
  %tmpvar60 = load i32, i32* %NC
  %icmptmp61 = icmp slt i32 %tmpvar59, %tmpvar60
  %whileCond62 = icmp ne i1 %icmptmp61, false
  br i1 %whileCond62, label %loop57, label %afterLoop58

loop57:                                           ; preds = %cond56
  store i32 0, i32* %i_a
  %tmpvar63 = load i32, i32* %j
  store i32 %tmpvar63, i32* %i_b
  br label %cond64

afterLoop58:                                      ; preds = %cond56
  store i32 0, i32* %j
  %tmpvar103 = load i32, i32* %i
  %addtmpi104 = add i32 %tmpvar103, 1
  store i32 %addtmpi104, i32* %i
  br label %cond49

cond64:                                           ; preds = %loop65, %loop57
  %tmpvar67 = load i32, i32* %i_a
  %tmpvar68 = load i32, i32* %NA
  %icmptmp69 = icmp slt i32 %tmpvar67, %tmpvar68
  %whileCond70 = icmp ne i1 %icmptmp69, false
  br i1 %whileCond70, label %loop65, label %afterLoop66

loop65:                                           ; preds = %cond64
  %tmpvar71 = load i32, i32* %i
  %tmpvar72 = load i32, i32* %NC
  %multmpi73 = mul i32 %tmpvar71, %tmpvar72
  %tmpvar74 = load i32, i32* %j
  %addtmpi75 = add i32 %multmpi73, %tmpvar74
  %tmpvar76 = getelementptr inbounds [400 x i32], [400 x i32]* @arrayC, i32 0, i32 %addtmpi75
  %tmpvar77 = load i32, i32* %i
  %tmpvar78 = load i32, i32* %NC
  %multmpi79 = mul i32 %tmpvar77, %tmpvar78
  %tmpvar80 = load i32, i32* %j
  %addtmpi81 = add i32 %multmpi79, %tmpvar80
  %tmpvar82 = getelementptr inbounds [400 x i32], [400 x i32]* @arrayC, i32 0, i32 %addtmpi81
  %tmpvar83 = load i32, i32* %tmpvar82
  %tmpvar84 = load i32, i32* %i
  %tmpvar85 = load i32, i32* %NA
  %multmpi86 = mul i32 %tmpvar84, %tmpvar85
  %tmpvar87 = load i32, i32* %i_a
  %addtmpi88 = add i32 %multmpi86, %tmpvar87
  %tmpvar89 = getelementptr inbounds [400 x i32], [400 x i32]* @arrayA, i32 0, i32 %addtmpi88
  %tmpvar90 = load i32, i32* %tmpvar89
  %tmpvar91 = load i32, i32* %i_b
  %tmpvar92 = getelementptr inbounds [400 x i32], [400 x i32]* @arrayB, i32 0, i32 %tmpvar91
  %tmpvar93 = load i32, i32* %tmpvar92
  %multmpi94 = mul i32 %tmpvar90, %tmpvar93
  %addtmpi95 = add i32 %tmpvar83, %multmpi94
  store i32 %addtmpi95, i32* %tmpvar76
  %tmpvar96 = load i32, i32* %i_a
  %addtmpi97 = add i32 %tmpvar96, 1
  store i32 %addtmpi97, i32* %i_a
  %tmpvar98 = load i32, i32* %i_b
  %tmpvar99 = load i32, i32* %NB
  %addtmpi100 = add i32 %tmpvar98, %tmpvar99
  store i32 %addtmpi100, i32* %i_b
  br label %cond64

afterLoop66:                                      ; preds = %cond64
  %tmpvar101 = load i32, i32* %j
  %addtmpi102 = add i32 %tmpvar101, 1
  store i32 %addtmpi102, i32* %j
  br label %cond56

cond105:                                          ; preds = %afterLoop114, %afterLoop51
  %tmpvar108 = load i32, i32* %i
  %tmpvar109 = load i32, i32* %MC
  %icmptmp110 = icmp slt i32 %tmpvar108, %tmpvar109
  %whileCond111 = icmp ne i1 %icmptmp110, false
  br i1 %whileCond111, label %loop106, label %afterLoop107

loop106:                                          ; preds = %cond105
  br label %cond112

afterLoop107:                                     ; preds = %cond105
  ret i32 0

cond112:                                          ; preds = %loop113, %loop106
  %tmpvar115 = load i32, i32* %j
  %tmpvar116 = load i32, i32* %NC
  %icmptmp117 = icmp slt i32 %tmpvar115, %tmpvar116
  %whileCond118 = icmp ne i1 %icmptmp117, false
  br i1 %whileCond118, label %loop113, label %afterLoop114

loop113:                                          ; preds = %cond112
  %tmpvar119 = load i32, i32* %i
  %tmpvar120 = load i32, i32* %NC
  %multmpi121 = mul i32 %tmpvar119, %tmpvar120
  %tmpvar122 = load i32, i32* %j
  %addtmpi123 = add i32 %multmpi121, %tmpvar122
  %tmpvar124 = getelementptr inbounds [400 x i32], [400 x i32]* @arrayC, i32 0, i32 %addtmpi123
  %tmpvar125 = load i32, i32* %tmpvar124
  %printf126 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @_Const_String_.1, i32 0, i32 0), i32 %tmpvar125)
  %tmpvar127 = load i32, i32* %j
  %addtmpi128 = add i32 %tmpvar127, 1
  store i32 %addtmpi128, i32* %j
  br label %cond112

afterLoop114:                                     ; preds = %cond112
  %printf129 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.3, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.2, i32 0, i32 0))
  store i32 0, i32* %j
  %tmpvar130 = load i32, i32* %i
  %addtmpi131 = add i32 %tmpvar130, 1
  store i32 %addtmpi131, i32* %i
  br label %cond105
}
