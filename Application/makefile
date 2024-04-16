EXEFILE := $(shell basename $(CURDIR))
OBJ :=  $(EXEFILE)/bin
BIN := bin
EXECUTABLE := main
SRC := src

DIRECTORIES = $(filter-out ./ ./.%, $(shell find ./ -maxdepth 10 -type d))
IFLAGS= -I D:\VetApp\Application\src
LOCAL_I_DIRS =$(addprefix -I./, $(DIRECTORIES))

SRC := $(wildcard *.cpp) $(wildcard **/*.cpp)

$(BIN)/$(EXECUTABLE): $(SRC)
	g++ -std=c++17 -o $(EXEFILE) -Wreorder -Wall  -Wno-comment $(SRC) $(LOCAL_I_DIRS) 

all: run clean

run: $(EXEFILE)
	./$(EXEFILE)

clean:
	rm $(EXEFILE)

print-%: ; @echo $* = $($*)