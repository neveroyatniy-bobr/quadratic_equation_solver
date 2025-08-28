MY_PROGRAM = prorgam.exe

SRC_PREF = ./src/

CPP = $(wildcard $(SRC_PREF)*.cpp)

$(MY_PROGRAM) : $(CPP) .\main.cpp
	g++ -Iinclude $(CPP) .\main.cpp -o $(MY_PROGRAM)