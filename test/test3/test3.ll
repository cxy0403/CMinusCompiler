; ModuleID = 'main'
source_filename = "main"

@info = private global [1000000 x i8] zeroinitializer
@pass = private global [1000 x i32] zeroinitializer
@preCourses = private global [1000000 x i8] zeroinitializer
@0 = private unnamed_addr constant [3 x i8] c"%c\00", align 1
@1 = private unnamed_addr constant [3 x i8] c"%c\00", align 1
@_Const_String_ = private constant [11 x i8] c"GPA: %.1lf\00"
@_Const_String_.1 = private constant [1 x i8] zeroinitializer
@.str = constant [4 x i8] c"%s\0A\00"
@_Const_String_.2 = private constant [20 x i8] c"Hours Attempted: %d\00"
@_Const_String_.3 = private constant [1 x i8] zeroinitializer
@.str.4 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.5 = private constant [20 x i8] c"Hours Completed: %d\00"
@_Const_String_.6 = private constant [1 x i8] zeroinitializer
@.str.7 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.8 = private constant [22 x i8] c"Credits Remaining: %d\00"
@_Const_String_.9 = private constant [1 x i8] zeroinitializer
@.str.10 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.11 = private constant [1 x i8] zeroinitializer
@.str.12 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.13 = private constant [30 x i8] c"Possible Courses to Take Next\00"
@_Const_String_.14 = private constant [1 x i8] zeroinitializer
@.str.15 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.16 = private constant [3 x i8] c"  \00"
@_Const_String_.17 = private constant [3 x i8] c"%c\00"
@_Const_String_.18 = private constant [1 x i8] zeroinitializer
@.str.19 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.20 = private constant [3 x i8] c"  \00"
@_Const_String_.21 = private constant [3 x i8] c"%c\00"
@_Const_String_.22 = private constant [1 x i8] zeroinitializer
@.str.23 = constant [4 x i8] c"%s\0A\00"
@_Const_String_.24 = private constant [26 x i8] c"  None - Congratulations!\00"
@_Const_String_.25 = private constant [1 x i8] zeroinitializer
@.str.26 = constant [4 x i8] c"%s\0A\00"

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @main() {
entrypoint:
  %courseIndex = alloca i32
  %num = alloca i32
  %temp = alloca i32
  %preJ = alloca i32
  %suc = alloca [100 x i32]
  %pre = alloca [10000 x i8]
  %passNum = alloca i32
  %GPA = alloca float
  %remainCredits = alloca i32
  %preIndex = alloca i32
  %credit = alloca i32
  %no = alloca i32
  %index = alloca i32
  %totalCredits = alloca i32
  %passCredits = alloca i32
  %trialCredits = alloca i32
  %totalGPA = alloca i32
  %ch = alloca i8
  %end = alloca i8
  %j = alloca i32
  %i = alloca i32
  store i32 0, i32* %i
  br label %cond

cond:                                             ; preds = %afterLoop9, %entrypoint
  br i1 true, label %loop, label %afterLoop

loop:                                             ; preds = %cond
  %scanf = call i32 (...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i32 0, i32 0), i8* %end)
  %tmpvar = load i8, i8* %end
  %icmptmp = icmp ne i8 %tmpvar, 10
  %ifCond = icmp ne i1 %icmptmp, false
  br i1 %ifCond, label %then, label %else

afterLoop:                                        ; preds = %else, %cond
  store i32 0, i32* %totalGPA
  store i32 0, i32* %trialCredits
  store i32 0, i32* %passCredits
  store i32 0, i32* %totalCredits
  store i32 0, i32* %index
  br label %cond31

then:                                             ; preds = %loop
  %tmpvar1 = load i32, i32* %i
  %multmpi = mul i32 %tmpvar1, 1000
  %tmpvar2 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %multmpi
  %tmpvar3 = load i8, i8* %end
  store i8 %tmpvar3, i8* %tmpvar2
  br label %merge

else:                                             ; preds = %loop
  %tmpvar4 = load i32, i32* %i
  %multmpi5 = mul i32 %tmpvar4, 1000
  %tmpvar6 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %multmpi5
  store i8 0, i8* %tmpvar6
  br label %afterLoop
  br label %merge

merge:                                            ; preds = %else, %then
  store i32 1, i32* %j
  br label %cond7

cond7:                                            ; preds = %merge16, %merge
  br i1 true, label %loop8, label %afterLoop9

loop8:                                            ; preds = %cond7
  %scanf10 = call i32 (...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0), i8* %ch)
  %tmpvar11 = load i8, i8* %ch
  %icmptmp12 = icmp ne i8 %tmpvar11, 10
  %ifCond13 = icmp ne i1 %icmptmp12, false
  br i1 %ifCond13, label %then14, label %else15

afterLoop9:                                       ; preds = %else15, %cond7
  %tmpvar29 = load i32, i32* %i
  %addtmpi30 = add i32 %tmpvar29, 1
  store i32 %addtmpi30, i32* %i
  br label %cond

then14:                                           ; preds = %loop8
  %tmpvar17 = load i32, i32* %i
  %multmpi18 = mul i32 %tmpvar17, 1000
  %tmpvar19 = load i32, i32* %j
  %addtmpi = add i32 %multmpi18, %tmpvar19
  %tmpvar20 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi
  %tmpvar21 = load i8, i8* %ch
  store i8 %tmpvar21, i8* %tmpvar20
  br label %merge16

else15:                                           ; preds = %loop8
  %tmpvar22 = load i32, i32* %i
  %multmpi23 = mul i32 %tmpvar22, 1000
  %tmpvar24 = load i32, i32* %j
  %addtmpi25 = add i32 %multmpi23, %tmpvar24
  %tmpvar26 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi25
  store i8 0, i8* %tmpvar26
  br label %afterLoop9
  br label %merge16

merge16:                                          ; preds = %else15, %then14
  %tmpvar27 = load i32, i32* %j
  %addtmpi28 = add i32 %tmpvar27, 1
  store i32 %addtmpi28, i32* %j
  br label %cond7

cond31:                                           ; preds = %afterLoop41, %afterLoop
  %tmpvar34 = load i32, i32* %index
  %tmpvar35 = load i32, i32* %i
  %icmptmp36 = icmp slt i32 %tmpvar34, %tmpvar35
  %whileCond = icmp ne i1 %icmptmp36, false
  br i1 %whileCond, label %loop32, label %afterLoop33

loop32:                                           ; preds = %cond31
  store i32 0, i32* %no
  store i32 0, i32* %credit
  store i32 0, i32* %preIndex
  %tmpvar37 = load i32, i32* %index
  %tmpvar38 = getelementptr inbounds [1000 x i32], [1000 x i32]* @pass, i32 0, i32 %tmpvar37
  store i32 0, i32* %tmpvar38
  store i32 0, i32* %j
  br label %cond39

afterLoop33:                                      ; preds = %cond31
  %tmpvar208 = load i32, i32* %totalCredits
  %tmpvar209 = load i32, i32* %passCredits
  %subtmpi210 = sub i32 %tmpvar208, %tmpvar209
  store i32 %subtmpi210, i32* %remainCredits
  %tmpvar211 = load i32, i32* %totalGPA
  %tmptypecast212 = sitofp i32 %tmpvar211 to float
  store float %tmptypecast212, float* %GPA
  %tmpvar213 = load i32, i32* %trialCredits
  %icmptmp214 = icmp ne i32 %tmpvar213, 0
  %ifCond215 = icmp ne i1 %icmptmp214, false
  br i1 %ifCond215, label %then216, label %else217

cond39:                                           ; preds = %merge115, %loop32
  br i1 true, label %loop40, label %afterLoop41

loop40:                                           ; preds = %cond39
  %tmpvar42 = load i32, i32* %index
  %multmpi43 = mul i32 %tmpvar42, 1000
  %tmpvar44 = load i32, i32* %j
  %addtmpi45 = add i32 %multmpi43, %tmpvar44
  %tmpvar46 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi45
  %tmpvar47 = load i8, i8* %tmpvar46
  %icmptmp48 = icmp eq i8 %tmpvar47, 124
  %ifCond49 = icmp ne i1 %icmptmp48, false
  br i1 %ifCond49, label %then50, label %else51

afterLoop41:                                      ; preds = %merge128, %cond39
  %tmpvar206 = load i32, i32* %index
  %addtmpi207 = add i32 %tmpvar206, 1
  store i32 %addtmpi207, i32* %index
  br label %cond31

then50:                                           ; preds = %loop40
  %tmpvar53 = load i32, i32* %no
  %addtmpi54 = add i32 %tmpvar53, 1
  store i32 %addtmpi54, i32* %no
  br label %merge52

else51:                                           ; preds = %loop40
  br label %merge52

merge52:                                          ; preds = %else51, %then50
  %tmpvar55 = load i32, i32* %no
  %icmptmp56 = icmp eq i32 %tmpvar55, 1
  %ifCond57 = icmp ne i1 %icmptmp56, false
  br i1 %ifCond57, label %then58, label %else59

then58:                                           ; preds = %merge52
  %tmpvar61 = load i32, i32* %index
  %multmpi62 = mul i32 %tmpvar61, 1000
  %tmpvar63 = load i32, i32* %j
  %addtmpi64 = add i32 %multmpi62, %tmpvar63
  %addtmpi65 = add i32 %addtmpi64, 1
  %tmpvar66 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi65
  %tmpvar67 = load i8, i8* %tmpvar66
  %subtmpi = sub i8 %tmpvar67, 48
  %tmptypecast = zext i8 %subtmpi to i32
  store i32 %tmptypecast, i32* %credit
  %tmpvar68 = load i32, i32* %totalCredits
  %tmpvar69 = load i32, i32* %credit
  %addtmpi70 = add i32 %tmpvar68, %tmpvar69
  store i32 %addtmpi70, i32* %totalCredits
  %tmpvar71 = load i32, i32* %j
  %addtmpi72 = add i32 %tmpvar71, 1
  store i32 %addtmpi72, i32* %j
  br label %merge60

else59:                                           ; preds = %merge52
  br label %merge60

merge60:                                          ; preds = %else59, %then58
  %tmpvar73 = load i32, i32* %no
  %icmptmp74 = icmp eq i32 %tmpvar73, 2
  %ifCond75 = icmp ne i1 %icmptmp74, false
  br i1 %ifCond75, label %then76, label %else77

then76:                                           ; preds = %merge60
  %tmpvar79 = load i32, i32* %index
  %multmpi80 = mul i32 %tmpvar79, 1000
  %tmpvar81 = load i32, i32* %j
  %addtmpi82 = add i32 %multmpi80, %tmpvar81
  %addtmpi83 = add i32 %addtmpi82, 1
  %tmpvar84 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi83
  %tmpvar85 = load i8, i8* %tmpvar84
  %icmptmp86 = icmp eq i8 %tmpvar85, 124
  %ifCond87 = icmp ne i1 %icmptmp86, false
  br i1 %ifCond87, label %then88, label %else89

else77:                                           ; preds = %merge60
  br label %merge78

merge78:                                          ; preds = %else77, %merge90
  %tmpvar110 = load i32, i32* %no
  %icmptmp111 = icmp eq i32 %tmpvar110, 3
  %ifCond112 = icmp ne i1 %icmptmp111, false
  br i1 %ifCond112, label %then113, label %else114

then88:                                           ; preds = %then76
  %tmpvar91 = load i32, i32* %index
  %addtmpi92 = add i32 %tmpvar91, 1000
  %tmpvar93 = load i32, i32* %preIndex
  %addtmpi94 = add i32 %addtmpi92, %tmpvar93
  %tmpvar95 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi94
  store i8 0, i8* %tmpvar95
  br label %merge90

else89:                                           ; preds = %then76
  %tmpvar96 = load i32, i32* %index
  %multmpi97 = mul i32 %tmpvar96, 1000
  %tmpvar98 = load i32, i32* %preIndex
  %addtmpi99 = add i32 %multmpi97, %tmpvar98
  %tmpvar100 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi99
  %tmpvar101 = load i32, i32* %index
  %multmpi102 = mul i32 %tmpvar101, 1000
  %tmpvar103 = load i32, i32* %j
  %addtmpi104 = add i32 %multmpi102, %tmpvar103
  %addtmpi105 = add i32 %addtmpi104, 1
  %tmpvar106 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi105
  %tmpvar107 = load i8, i8* %tmpvar106
  store i8 %tmpvar107, i8* %tmpvar100
  br label %merge90

merge90:                                          ; preds = %else89, %then88
  %tmpvar108 = load i32, i32* %preIndex
  %addtmpi109 = add i32 %tmpvar108, 1
  store i32 %addtmpi109, i32* %preIndex
  br label %merge78

then113:                                          ; preds = %merge78
  %tmpvar116 = load i32, i32* %index
  %multmpi117 = mul i32 %tmpvar116, 1000
  %tmpvar118 = load i32, i32* %j
  %addtmpi119 = add i32 %multmpi117, %tmpvar118
  %addtmpi120 = add i32 %addtmpi119, 1
  %tmpvar121 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi120
  %tmpvar122 = load i8, i8* %tmpvar121
  store i8 %tmpvar122, i8* %ch
  %tmpvar123 = load i8, i8* %ch
  %icmptmp124 = icmp eq i8 %tmpvar123, 65
  %ifCond125 = icmp ne i1 %icmptmp124, false
  br i1 %ifCond125, label %then126, label %else127

else114:                                          ; preds = %merge78
  br label %merge115

merge115:                                         ; preds = %else114, %merge128
  %tmpvar204 = load i32, i32* %j
  %addtmpi205 = add i32 %tmpvar204, 1
  store i32 %addtmpi205, i32* %j
  br label %cond39

then126:                                          ; preds = %then113
  %tmpvar129 = load i32, i32* %trialCredits
  %tmpvar130 = load i32, i32* %credit
  %addtmpi131 = add i32 %tmpvar129, %tmpvar130
  store i32 %addtmpi131, i32* %trialCredits
  %tmpvar132 = load i32, i32* %passCredits
  %tmpvar133 = load i32, i32* %credit
  %addtmpi134 = add i32 %tmpvar132, %tmpvar133
  store i32 %addtmpi134, i32* %passCredits
  %tmpvar135 = load i32, i32* %totalGPA
  %tmpvar136 = load i32, i32* %credit
  %multmpi137 = mul i32 %tmpvar136, 4
  %addtmpi138 = add i32 %tmpvar135, %multmpi137
  store i32 %addtmpi138, i32* %totalGPA
  %tmpvar139 = load i32, i32* %index
  %tmpvar140 = getelementptr inbounds [1000 x i32], [1000 x i32]* @pass, i32 0, i32 %tmpvar139
  store i32 1, i32* %tmpvar140
  br label %merge128

else127:                                          ; preds = %then113
  %tmpvar141 = load i8, i8* %ch
  %icmptmp142 = icmp eq i8 %tmpvar141, 66
  %ifCond143 = icmp ne i1 %icmptmp142, false
  br i1 %ifCond143, label %then144, label %else145

merge128:                                         ; preds = %merge146, %then126
  br label %afterLoop41
  br label %merge115

then144:                                          ; preds = %else127
  %tmpvar147 = load i32, i32* %trialCredits
  %tmpvar148 = load i32, i32* %credit
  %addtmpi149 = add i32 %tmpvar147, %tmpvar148
  store i32 %addtmpi149, i32* %trialCredits
  %tmpvar150 = load i32, i32* %passCredits
  %tmpvar151 = load i32, i32* %credit
  %addtmpi152 = add i32 %tmpvar150, %tmpvar151
  store i32 %addtmpi152, i32* %passCredits
  %tmpvar153 = load i32, i32* %totalGPA
  %tmpvar154 = load i32, i32* %credit
  %multmpi155 = mul i32 %tmpvar154, 3
  %addtmpi156 = add i32 %tmpvar153, %multmpi155
  store i32 %addtmpi156, i32* %totalGPA
  %tmpvar157 = load i32, i32* %index
  %tmpvar158 = getelementptr inbounds [1000 x i32], [1000 x i32]* @pass, i32 0, i32 %tmpvar157
  store i32 1, i32* %tmpvar158
  br label %merge146

else145:                                          ; preds = %else127
  %tmpvar159 = load i8, i8* %ch
  %icmptmp160 = icmp eq i8 %tmpvar159, 67
  %ifCond161 = icmp ne i1 %icmptmp160, false
  br i1 %ifCond161, label %then162, label %else163

merge146:                                         ; preds = %merge164, %then144
  br label %merge128

then162:                                          ; preds = %else145
  %tmpvar165 = load i32, i32* %trialCredits
  %tmpvar166 = load i32, i32* %credit
  %addtmpi167 = add i32 %tmpvar165, %tmpvar166
  store i32 %addtmpi167, i32* %trialCredits
  %tmpvar168 = load i32, i32* %passCredits
  %tmpvar169 = load i32, i32* %credit
  %addtmpi170 = add i32 %tmpvar168, %tmpvar169
  store i32 %addtmpi170, i32* %passCredits
  %tmpvar171 = load i32, i32* %totalGPA
  %tmpvar172 = load i32, i32* %credit
  %multmpi173 = mul i32 %tmpvar172, 2
  %addtmpi174 = add i32 %tmpvar171, %multmpi173
  store i32 %addtmpi174, i32* %totalGPA
  %tmpvar175 = load i32, i32* %index
  %tmpvar176 = getelementptr inbounds [1000 x i32], [1000 x i32]* @pass, i32 0, i32 %tmpvar175
  store i32 1, i32* %tmpvar176
  br label %merge164

else163:                                          ; preds = %else145
  %tmpvar177 = load i8, i8* %ch
  %icmptmp178 = icmp eq i8 %tmpvar177, 68
  %ifCond179 = icmp ne i1 %icmptmp178, false
  br i1 %ifCond179, label %then180, label %else181

merge164:                                         ; preds = %merge182, %then162
  br label %merge146

then180:                                          ; preds = %else163
  %tmpvar183 = load i32, i32* %trialCredits
  %tmpvar184 = load i32, i32* %credit
  %addtmpi185 = add i32 %tmpvar183, %tmpvar184
  store i32 %addtmpi185, i32* %trialCredits
  %tmpvar186 = load i32, i32* %passCredits
  %tmpvar187 = load i32, i32* %credit
  %addtmpi188 = add i32 %tmpvar186, %tmpvar187
  store i32 %addtmpi188, i32* %passCredits
  %tmpvar189 = load i32, i32* %totalGPA
  %tmpvar190 = load i32, i32* %credit
  %multmpi191 = mul i32 %tmpvar190, 1
  %addtmpi192 = add i32 %tmpvar189, %multmpi191
  store i32 %addtmpi192, i32* %totalGPA
  %tmpvar193 = load i32, i32* %index
  %tmpvar194 = getelementptr inbounds [1000 x i32], [1000 x i32]* @pass, i32 0, i32 %tmpvar193
  store i32 1, i32* %tmpvar194
  br label %merge182

else181:                                          ; preds = %else163
  %tmpvar195 = load i8, i8* %ch
  %icmptmp196 = icmp eq i8 %tmpvar195, 70
  %ifCond197 = icmp ne i1 %icmptmp196, false
  br i1 %ifCond197, label %then198, label %else199

merge182:                                         ; preds = %merge200, %then180
  br label %merge164

then198:                                          ; preds = %else181
  %tmpvar201 = load i32, i32* %trialCredits
  %tmpvar202 = load i32, i32* %credit
  %addtmpi203 = add i32 %tmpvar201, %tmpvar202
  store i32 %addtmpi203, i32* %trialCredits
  br label %merge200

else199:                                          ; preds = %else181
  br label %merge200

merge200:                                         ; preds = %else199, %then198
  br label %merge182

then216:                                          ; preds = %afterLoop33
  %tmpvar219 = load float, float* %GPA
  %tmpvar220 = load i32, i32* %trialCredits
  %tmptypecast221 = sitofp i32 %tmpvar220 to float
  %divtmpf = fdiv float %tmpvar219, %tmptypecast221
  store float %divtmpf, float* %GPA
  br label %merge218

else217:                                          ; preds = %afterLoop33
  br label %merge218

merge218:                                         ; preds = %else217, %then216
  %tmpvar222 = load float, float* %GPA
  %tmpdouble = fpext float %tmpvar222 to double
  %printf = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @_Const_String_, i32 0, i32 0), double %tmpdouble)
  %printf223 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.1, i32 0, i32 0))
  %tmpvar224 = load i32, i32* %trialCredits
  %printf225 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @_Const_String_.2, i32 0, i32 0), i32 %tmpvar224)
  %printf226 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.4, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.3, i32 0, i32 0))
  %tmpvar227 = load i32, i32* %passCredits
  %printf228 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @_Const_String_.5, i32 0, i32 0), i32 %tmpvar227)
  %printf229 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.7, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.6, i32 0, i32 0))
  %tmpvar230 = load i32, i32* %remainCredits
  %printf231 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @_Const_String_.8, i32 0, i32 0), i32 %tmpvar230)
  %printf232 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.10, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.9, i32 0, i32 0))
  %printf233 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.12, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.11, i32 0, i32 0))
  %printf234 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @_Const_String_.13, i32 0, i32 0))
  %printf235 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.15, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.14, i32 0, i32 0))
  store i32 0, i32* %index
  br label %cond236

cond236:                                          ; preds = %merge250, %merge218
  %tmpvar239 = load i32, i32* %index
  %tmpvar240 = load i32, i32* %i
  %icmptmp241 = icmp slt i32 %tmpvar239, %tmpvar240
  %whileCond242 = icmp ne i1 %icmptmp241, false
  br i1 %whileCond242, label %loop237, label %afterLoop238

loop237:                                          ; preds = %cond236
  %tmpvar243 = load i32, i32* %index
  %tmpvar244 = getelementptr inbounds [1000 x i32], [1000 x i32]* @pass, i32 0, i32 %tmpvar243
  %tmpvar245 = load i32, i32* %tmpvar244
  %icmptmp246 = icmp eq i32 %tmpvar245, 0
  %ifCond247 = icmp ne i1 %icmptmp246, false
  br i1 %ifCond247, label %then248, label %else249

afterLoop238:                                     ; preds = %cond236
  %tmpvar519 = load i32, i32* %passNum
  %tmpvar520 = load i32, i32* %i
  %icmptmp521 = icmp eq i32 %tmpvar519, %tmpvar520
  %ifCond522 = icmp ne i1 %icmptmp521, false
  br i1 %ifCond522, label %then523, label %else524

then248:                                          ; preds = %loop237
  %tmpvar251 = load i32, i32* %index
  %multmpi252 = mul i32 %tmpvar251, 1000
  %tmpvar253 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %multmpi252
  %tmpvar254 = load i8, i8* %tmpvar253
  %icmptmp255 = icmp eq i8 %tmpvar254, 0
  %ifCond256 = icmp ne i1 %icmptmp255, false
  br i1 %ifCond256, label %then257, label %else258

else249:                                          ; preds = %loop237
  %tmpvar515 = load i32, i32* %passNum
  %addtmpi516 = add i32 %tmpvar515, 1
  store i32 %addtmpi516, i32* %passNum
  br label %merge250

merge250:                                         ; preds = %else249, %merge259
  %tmpvar517 = load i32, i32* %index
  %addtmpi518 = add i32 %tmpvar517, 1
  store i32 %addtmpi518, i32* %index
  br label %cond236

then257:                                          ; preds = %then248
  %printf260 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @_Const_String_.16, i32 0, i32 0))
  store i32 0, i32* %j
  br label %cond261

else258:                                          ; preds = %then248
  store i32 0, i32* %j
  br label %cond285

merge259:                                         ; preds = %afterLoop287, %afterLoop263
  br label %merge250

cond261:                                          ; preds = %merge274, %then257
  br i1 true, label %loop262, label %afterLoop263

loop262:                                          ; preds = %cond261
  %tmpvar264 = load i32, i32* %index
  %multmpi265 = mul i32 %tmpvar264, 1000
  %tmpvar266 = load i32, i32* %j
  %addtmpi267 = add i32 %multmpi265, %tmpvar266
  %tmpvar268 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi267
  %tmpvar269 = load i8, i8* %tmpvar268
  %icmptmp270 = icmp ne i8 %tmpvar269, 124
  %ifCond271 = icmp ne i1 %icmptmp270, false
  br i1 %ifCond271, label %then272, label %else273

afterLoop263:                                     ; preds = %else273, %cond261
  br label %merge259

then272:                                          ; preds = %loop262
  %tmpvar275 = load i32, i32* %index
  %multmpi276 = mul i32 %tmpvar275, 1000
  %tmpvar277 = load i32, i32* %j
  %addtmpi278 = add i32 %multmpi276, %tmpvar277
  %tmpvar279 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi278
  %tmpvar280 = load i8, i8* %tmpvar279
  %printf281 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @_Const_String_.17, i32 0, i32 0), i8 %tmpvar280)
  br label %merge274

else273:                                          ; preds = %loop262
  %printf282 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.19, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.18, i32 0, i32 0))
  br label %afterLoop263
  br label %merge274

merge274:                                         ; preds = %else273, %then272
  %tmpvar283 = load i32, i32* %j
  %addtmpi284 = add i32 %tmpvar283, 1
  store i32 %addtmpi284, i32* %j
  br label %cond261

cond285:                                          ; preds = %merge514, %else258
  br i1 true, label %loop286, label %afterLoop287

loop286:                                          ; preds = %cond285
  store i32 0, i32* %preIndex
  store i32 0, i32* %preJ
  store i32 1, i32* %temp
  br label %cond288

afterLoop287:                                     ; preds = %then512, %then504, %cond285
  br label %merge259

cond288:                                          ; preds = %merge316, %loop286
  br i1 true, label %loop289, label %afterLoop290

loop289:                                          ; preds = %cond288
  %tmpvar291 = load i32, i32* %index
  %multmpi292 = mul i32 %tmpvar291, 1000
  %tmpvar293 = load i32, i32* %j
  %addtmpi294 = add i32 %multmpi292, %tmpvar293
  %tmpvar295 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi294
  %tmpvar296 = load i8, i8* %tmpvar295
  %icmptmp297 = icmp ne i8 %tmpvar296, 44
  %tmpvar298 = load i32, i32* %index
  %multmpi299 = mul i32 %tmpvar298, 1000
  %tmpvar300 = load i32, i32* %j
  %addtmpi301 = add i32 %multmpi299, %tmpvar300
  %tmpvar302 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi301
  %tmpvar303 = load i8, i8* %tmpvar302
  %icmptmp304 = icmp ne i8 %tmpvar303, 59
  %tmpAnd = and i1 %icmptmp297, %icmptmp304
  %tmpvar305 = load i32, i32* %index
  %multmpi306 = mul i32 %tmpvar305, 1000
  %tmpvar307 = load i32, i32* %j
  %addtmpi308 = add i32 %multmpi306, %tmpvar307
  %tmpvar309 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi308
  %tmpvar310 = load i8, i8* %tmpvar309
  %icmptmp311 = icmp ne i8 %tmpvar310, 0
  %tmpAnd312 = and i1 %tmpAnd, %icmptmp311
  %ifCond313 = icmp ne i1 %tmpAnd312, false
  br i1 %ifCond313, label %then314, label %else315

afterLoop290:                                     ; preds = %else467, %afterLoop472, %cond288
  %tmpvar496 = load i32, i32* %index
  %multmpi497 = mul i32 %tmpvar496, 1000
  %tmpvar498 = load i32, i32* %j
  %addtmpi499 = add i32 %multmpi497, %tmpvar498
  %tmpvar500 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi499
  %tmpvar501 = load i8, i8* %tmpvar500
  %icmptmp502 = icmp eq i8 %tmpvar501, 0
  %ifCond503 = icmp ne i1 %icmptmp502, false
  br i1 %ifCond503, label %then504, label %else505

then314:                                          ; preds = %loop289
  %tmpvar317 = load i32, i32* %preIndex
  %multmpi318 = mul i32 %tmpvar317, 100
  %tmpvar319 = load i32, i32* %preJ
  %addtmpi320 = add i32 %multmpi318, %tmpvar319
  %tmpvar321 = getelementptr inbounds [10000 x i8], [10000 x i8]* %pre, i32 0, i32 %addtmpi320
  %tmpvar322 = load i32, i32* %index
  %multmpi323 = mul i32 %tmpvar322, 1000
  %tmpvar324 = load i32, i32* %j
  %addtmpi325 = add i32 %multmpi323, %tmpvar324
  %tmpvar326 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi325
  %tmpvar327 = load i8, i8* %tmpvar326
  store i8 %tmpvar327, i8* %tmpvar321
  %tmpvar328 = load i32, i32* %preJ
  %addtmpi329 = add i32 %tmpvar328, 1
  store i32 %addtmpi329, i32* %preJ
  br label %merge316

else315:                                          ; preds = %loop289
  %tmpvar330 = load i32, i32* %index
  %multmpi331 = mul i32 %tmpvar330, 1000
  %tmpvar332 = load i32, i32* %j
  %addtmpi333 = add i32 %multmpi331, %tmpvar332
  %tmpvar334 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi333
  %tmpvar335 = load i8, i8* %tmpvar334
  %icmptmp336 = icmp eq i8 %tmpvar335, 44
  %ifCond337 = icmp ne i1 %icmptmp336, false
  br i1 %ifCond337, label %then338, label %else339

merge316:                                         ; preds = %merge340, %then314
  %tmpvar494 = load i32, i32* %j
  %addtmpi495 = add i32 %tmpvar494, 1
  store i32 %addtmpi495, i32* %j
  br label %cond288

then338:                                          ; preds = %else315
  %tmpvar341 = load i32, i32* %preIndex
  %multmpi342 = mul i32 %tmpvar341, 100
  %tmpvar343 = load i32, i32* %preJ
  %addtmpi344 = add i32 %multmpi342, %tmpvar343
  %tmpvar345 = getelementptr inbounds [10000 x i8], [10000 x i8]* %pre, i32 0, i32 %addtmpi344
  store i8 0, i8* %tmpvar345
  %tmpvar346 = load i32, i32* %preIndex
  %addtmpi347 = add i32 %tmpvar346, 1
  store i32 %addtmpi347, i32* %preIndex
  store i32 0, i32* %preJ
  br label %merge340

else339:                                          ; preds = %else315
  %tmpvar348 = load i32, i32* %index
  %multmpi349 = mul i32 %tmpvar348, 1000
  %tmpvar350 = load i32, i32* %j
  %addtmpi351 = add i32 %multmpi349, %tmpvar350
  %tmpvar352 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi351
  %tmpvar353 = load i8, i8* %tmpvar352
  %icmptmp354 = icmp eq i8 %tmpvar353, 59
  %tmpvar355 = load i32, i32* %index
  %multmpi356 = mul i32 %tmpvar355, 1000
  %tmpvar357 = load i32, i32* %j
  %addtmpi358 = add i32 %multmpi356, %tmpvar357
  %tmpvar359 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @preCourses, i32 0, i32 %addtmpi358
  %tmpvar360 = load i8, i8* %tmpvar359
  %icmptmp361 = icmp eq i8 %tmpvar360, 0
  %tmpOR = or i1 %icmptmp354, %icmptmp361
  %ifCond362 = icmp ne i1 %tmpOR, false
  br i1 %ifCond362, label %then363, label %else364

merge340:                                         ; preds = %merge365, %then338
  br label %merge316

then363:                                          ; preds = %else339
  %tmpvar366 = load i32, i32* %preIndex
  %multmpi367 = mul i32 %tmpvar366, 100
  %tmpvar368 = load i32, i32* %preJ
  %addtmpi369 = add i32 %multmpi367, %tmpvar368
  %tmpvar370 = getelementptr inbounds [10000 x i8], [10000 x i8]* %pre, i32 0, i32 %addtmpi369
  store i8 0, i8* %tmpvar370
  %tmpvar371 = load i32, i32* %preIndex
  %addtmpi372 = add i32 %tmpvar371, 1
  store i32 %addtmpi372, i32* %num
  store i32 0, i32* %preIndex
  br label %cond373

else364:                                          ; preds = %else339
  br label %merge365

merge365:                                         ; preds = %else364, %merge468
  br label %merge340

cond373:                                          ; preds = %afterLoop384, %then363
  %tmpvar376 = load i32, i32* %preIndex
  %tmpvar377 = load i32, i32* %num
  %icmptmp378 = icmp slt i32 %tmpvar376, %tmpvar377
  %whileCond379 = icmp ne i1 %icmptmp378, false
  br i1 %whileCond379, label %loop374, label %afterLoop375

loop374:                                          ; preds = %cond373
  %tmpvar380 = load i32, i32* %preIndex
  %tmpvar381 = getelementptr inbounds [100 x i32], [100 x i32]* %suc, i32 0, i32 %tmpvar380
  store i32 0, i32* %tmpvar381
  store i32 0, i32* %courseIndex
  br label %cond382

afterLoop375:                                     ; preds = %cond373
  store i32 0, i32* %preIndex
  br label %cond446

cond382:                                          ; preds = %merge441, %loop374
  %tmpvar385 = load i32, i32* %courseIndex
  %tmpvar386 = load i32, i32* %i
  %icmptmp387 = icmp slt i32 %tmpvar385, %tmpvar386
  %whileCond388 = icmp ne i1 %icmptmp387, false
  br i1 %whileCond388, label %loop383, label %afterLoop384

loop383:                                          ; preds = %cond382
  %tmpvar389 = load i32, i32* %courseIndex
  %tmpvar390 = getelementptr inbounds [1000 x i32], [1000 x i32]* @pass, i32 0, i32 %tmpvar389
  %tmpvar391 = load i32, i32* %tmpvar390
  %icmptmp392 = icmp eq i32 %tmpvar391, 1
  %ifCond393 = icmp ne i1 %icmptmp392, false
  br i1 %ifCond393, label %then394, label %else395

afterLoop384:                                     ; preds = %then439, %cond382
  %tmpvar444 = load i32, i32* %preIndex
  %addtmpi445 = add i32 %tmpvar444, 1
  store i32 %addtmpi445, i32* %preIndex
  br label %cond373

then394:                                          ; preds = %loop383
  store i32 0, i32* %preJ
  br label %cond397

else395:                                          ; preds = %loop383
  br label %merge396

merge396:                                         ; preds = %else395, %afterLoop399
  %tmpvar434 = load i32, i32* %preIndex
  %tmpvar435 = getelementptr inbounds [100 x i32], [100 x i32]* %suc, i32 0, i32 %tmpvar434
  %tmpvar436 = load i32, i32* %tmpvar435
  %icmptmp437 = icmp eq i32 %tmpvar436, 1
  %ifCond438 = icmp ne i1 %icmptmp437, false
  br i1 %ifCond438, label %then439, label %else440

cond397:                                          ; preds = %merge431, %then394
  br i1 true, label %loop398, label %afterLoop399

loop398:                                          ; preds = %cond397
  %tmpvar400 = load i32, i32* %preIndex
  %multmpi401 = mul i32 %tmpvar400, 100
  %tmpvar402 = load i32, i32* %preJ
  %addtmpi403 = add i32 %multmpi401, %tmpvar402
  %tmpvar404 = getelementptr inbounds [10000 x i8], [10000 x i8]* %pre, i32 0, i32 %addtmpi403
  %tmpvar405 = load i8, i8* %tmpvar404
  %tmpvar406 = load i32, i32* %courseIndex
  %multmpi407 = mul i32 %tmpvar406, 1000
  %tmpvar408 = load i32, i32* %preJ
  %addtmpi409 = add i32 %multmpi407, %tmpvar408
  %tmpvar410 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi409
  %tmpvar411 = load i8, i8* %tmpvar410
  %icmptmp412 = icmp eq i8 %tmpvar405, %tmpvar411
  %ifCond413 = icmp ne i1 %icmptmp412, false
  br i1 %ifCond413, label %then414, label %else415

afterLoop399:                                     ; preds = %then429, %else415, %cond397
  br label %merge396

then414:                                          ; preds = %loop398
  %tmpvar417 = load i32, i32* %preJ
  %addtmpi418 = add i32 %tmpvar417, 1
  store i32 %addtmpi418, i32* %preJ
  br label %merge416

else415:                                          ; preds = %loop398
  %tmpvar419 = load i32, i32* %preIndex
  %tmpvar420 = getelementptr inbounds [100 x i32], [100 x i32]* %suc, i32 0, i32 %tmpvar419
  store i32 0, i32* %tmpvar420
  br label %afterLoop399
  br label %merge416

merge416:                                         ; preds = %else415, %then414
  %tmpvar421 = load i32, i32* %preIndex
  %multmpi422 = mul i32 %tmpvar421, 100
  %tmpvar423 = load i32, i32* %preJ
  %addtmpi424 = add i32 %multmpi422, %tmpvar423
  %tmpvar425 = getelementptr inbounds [10000 x i8], [10000 x i8]* %pre, i32 0, i32 %addtmpi424
  %tmpvar426 = load i8, i8* %tmpvar425
  %icmptmp427 = icmp eq i8 %tmpvar426, 0
  %ifCond428 = icmp ne i1 %icmptmp427, false
  br i1 %ifCond428, label %then429, label %else430

then429:                                          ; preds = %merge416
  %tmpvar432 = load i32, i32* %preIndex
  %tmpvar433 = getelementptr inbounds [100 x i32], [100 x i32]* %suc, i32 0, i32 %tmpvar432
  store i32 1, i32* %tmpvar433
  br label %afterLoop399
  br label %merge431

else430:                                          ; preds = %merge416
  br label %merge431

merge431:                                         ; preds = %else430, %then429
  br label %cond397

then439:                                          ; preds = %merge396
  br label %afterLoop384
  br label %merge441

else440:                                          ; preds = %merge396
  br label %merge441

merge441:                                         ; preds = %else440, %then439
  %tmpvar442 = load i32, i32* %courseIndex
  %addtmpi443 = add i32 %tmpvar442, 1
  store i32 %addtmpi443, i32* %courseIndex
  br label %cond382

cond446:                                          ; preds = %merge460, %afterLoop375
  %tmpvar449 = load i32, i32* %preIndex
  %tmpvar450 = load i32, i32* %num
  %icmptmp451 = icmp slt i32 %tmpvar449, %tmpvar450
  %whileCond452 = icmp ne i1 %icmptmp451, false
  br i1 %whileCond452, label %loop447, label %afterLoop448

loop447:                                          ; preds = %cond446
  %tmpvar453 = load i32, i32* %preIndex
  %tmpvar454 = getelementptr inbounds [100 x i32], [100 x i32]* %suc, i32 0, i32 %tmpvar453
  %tmpvar455 = load i32, i32* %tmpvar454
  %icmptmp456 = icmp eq i32 %tmpvar455, 0
  %ifCond457 = icmp ne i1 %icmptmp456, false
  br i1 %ifCond457, label %then458, label %else459

afterLoop448:                                     ; preds = %cond446
  %tmpvar463 = load i32, i32* %temp
  %icmptmp464 = icmp eq i32 %tmpvar463, 1
  %ifCond465 = icmp ne i1 %icmptmp464, false
  br i1 %ifCond465, label %then466, label %else467

then458:                                          ; preds = %loop447
  store i32 0, i32* %temp
  br label %merge460

else459:                                          ; preds = %loop447
  br label %merge460

merge460:                                         ; preds = %else459, %then458
  %tmpvar461 = load i32, i32* %preIndex
  %addtmpi462 = add i32 %tmpvar461, 1
  store i32 %addtmpi462, i32* %preIndex
  br label %cond446

then466:                                          ; preds = %afterLoop448
  %printf469 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @_Const_String_.20, i32 0, i32 0))
  store i32 0, i32* %j
  br label %cond470

else467:                                          ; preds = %afterLoop448
  br label %afterLoop290
  br label %merge468

merge468:                                         ; preds = %else467, %afterLoop472
  br label %merge365

cond470:                                          ; preds = %merge483, %then466
  br i1 true, label %loop471, label %afterLoop472

loop471:                                          ; preds = %cond470
  %tmpvar473 = load i32, i32* %index
  %multmpi474 = mul i32 %tmpvar473, 1000
  %tmpvar475 = load i32, i32* %j
  %addtmpi476 = add i32 %multmpi474, %tmpvar475
  %tmpvar477 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi476
  %tmpvar478 = load i8, i8* %tmpvar477
  %icmptmp479 = icmp ne i8 %tmpvar478, 124
  %ifCond480 = icmp ne i1 %icmptmp479, false
  br i1 %ifCond480, label %then481, label %else482

afterLoop472:                                     ; preds = %else482, %cond470
  br label %afterLoop290
  br label %merge468

then481:                                          ; preds = %loop471
  %tmpvar484 = load i32, i32* %index
  %multmpi485 = mul i32 %tmpvar484, 1000
  %tmpvar486 = load i32, i32* %j
  %addtmpi487 = add i32 %multmpi485, %tmpvar486
  %tmpvar488 = getelementptr inbounds [1000000 x i8], [1000000 x i8]* @info, i32 0, i32 %addtmpi487
  %tmpvar489 = load i8, i8* %tmpvar488
  %printf490 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @_Const_String_.21, i32 0, i32 0), i8 %tmpvar489)
  br label %merge483

else482:                                          ; preds = %loop471
  %printf491 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.23, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.22, i32 0, i32 0))
  br label %afterLoop472
  br label %merge483

merge483:                                         ; preds = %else482, %then481
  %tmpvar492 = load i32, i32* %j
  %addtmpi493 = add i32 %tmpvar492, 1
  store i32 %addtmpi493, i32* %j
  br label %cond470

then504:                                          ; preds = %afterLoop290
  br label %afterLoop287
  br label %merge506

else505:                                          ; preds = %afterLoop290
  %tmpvar507 = load i32, i32* %j
  %addtmpi508 = add i32 %tmpvar507, 1
  store i32 %addtmpi508, i32* %j
  br label %merge506

merge506:                                         ; preds = %else505, %then504
  %tmpvar509 = load i32, i32* %temp
  %icmptmp510 = icmp eq i32 %tmpvar509, 1
  %ifCond511 = icmp ne i1 %icmptmp510, false
  br i1 %ifCond511, label %then512, label %else513

then512:                                          ; preds = %merge506
  br label %afterLoop287
  br label %merge514

else513:                                          ; preds = %merge506
  br label %merge514

merge514:                                         ; preds = %else513, %then512
  br label %cond285

then523:                                          ; preds = %afterLoop238
  %printf526 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @_Const_String_.24, i32 0, i32 0))
  %printf527 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.26, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8], [1 x i8]* @_Const_String_.25, i32 0, i32 0))
  br label %merge525

else524:                                          ; preds = %afterLoop238
  br label %merge525

merge525:                                         ; preds = %else524, %then523
  ret i32 0
}
