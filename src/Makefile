
OBJS = parser.o lexer.o IRGenerator.o node.o jsonGenerator.o main.o
CC = /usr/bin/clang++-10
LLVM_AS = /usr/lib/llvm-10/bin/llvm-as 
LLI = /usr/lib/llvm-10/bin/lli

LLVM_INCLUDE = -I /usr/lib/llvm-10/include
LLVM_LIBS = -L /usr/lib/llvm-10/lib
LD_FLAGS = -lpthread -ldl -lz -lncurses -rdynamic -L/usr/local/lib -ljsoncpp

.PHONY: build clean test

build:
	flex -o lexer.cpp lexer.l
	bison -d -o parser.cpp parser.y
	$(CC) -g $(LLVM_INCLUDE) $(LLVM_LIBS) $(LD_FLAGS) -lLLVM ./*.cpp -o parse

test:
# Q0: basic
	@echo "\n\n******Q0: basic******"
	cat ../test/test0/test0.c | ./parse > ../test/test0/test0.ll
	llvm-as-10 ../test/test0/test0.ll -o ../test/test0/test0.bc
	$(CC) ../test/test0/test0.bc -o ../test/test0/test0_exe
# Q1: quicksort
	@echo "\n\n******Q1: Quicksort******"
	cat ../test/test1/quicksort.cmm | ./parse > ../test/test1/test1.ll
	llvm-as-10 ../test/test1/test1.ll -o ../test/test1/test1.bc	
	$(CC) ../test/test1/test1.bc -o ../test/test1/test1_exe
	../test/test1/linux-amd64 ../test/test1/test1_exe
# Q2: Matrix multiplication
	@echo "\n\n******Q2: Matrix Multiplication******"
	cat ../test/test2/matrix.cmm | ./parse > ../test/test2/test2.ll
	llvm-as-10 ../test/test2/test2.ll -o ../test/test2/test2.bc	
	$(CC) ../test/test2/test2.bc -o ../test/test2/test2_exe
	../test/test2/linux-amd64 ../test/test2/test2_exe
# Q3: Auto-Advaisor
	@echo "\n\n******Q3: Auto-Advisor******"
	cat ../test/test3/advisor.cmm | ./parse > ../test/test3/test3.ll
	llvm-as-10 ../test/test3/test3.ll -o ../test/test3/test3.bc	
	$(CC) ../test/test3/test3.bc -o ../test/test3/test3_exe
	../test/test3/linux-amd64 ../test/test3/test3_exe
# Q4: case1
	@echo "\n\n******Q4: case1******"
	cat ../test/test4/test4.c | ./parse > ../test/test4/test4.ll
	llvm-as-10 ../test/test4/test4.ll -o ../test/test4/test4.bc	
	$(CC) ../test/test4/test4.bc -o ../test/test4/test4_exe
# Q5: case2
	@echo "\n\n******Q5: case2******"
	cat ../test/test5/test5.c | ./parse > ../test/test5/test5.ll
	llvm-as-10 ../test/test5/test5.ll -o ../test/test5/test5.bc	
	$(CC) ../test/test5/test5.bc -o ../test/test5/test5_exe
# Q6: case3
	@echo "\n\n******Q6: case3******"
	cat ../test/test6/test6.c | ./parse > ../test/test6/test6.ll
	llvm-as-10 ../test/test6/test6.ll -o ../test/test6/test6.bc	
	$(CC) ../test/test6/test6.bc -o ../test/test6/test6_exe
clean:
	$(RM) -rf $(OBJS) parser.cpp parser.hpp parse lexer.cpp 
	$(RM) -f ../test/*.ll ../test/*.bc ../test/test0/test0_exe ../test/test1/test1_exe ../test/test2/test2_exe ../test/test3/test3_exe
	$(RM) -f ../test/test1/*.bc ../test/test1/*.ll ../test/test2/*.bc ../test/test2/*.ll ../test/test3/*.bc ../test/test3/*.ll 
