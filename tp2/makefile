CXX=g++


#SRC=main.cpp obj.cpp
SRC=$(wildcard *.cpp)  
EXE=main

CXXFLAGS+=-Wall -Wextra -MMD -g -O2 -fdiagnostics-color=auto #-fsanitize=thread
LDFLAGS= #-lSDL $(shell sdl2-config --cflags --libs) -lm -lSDL2_ttf -lSDL2_mixer -lpthread -D_REENTRANT -lSDL2_image 

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEPS=$(addprefix build/,$(SRC:.cpp=.d))

all: $(EXE)

$(EXE):$(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<


.PHONY:clean mrproper

clean:
	rm -rf build core *.gch

mrproper: clean
	rm $(EXEC)
	rm -rf compile_commands.json
	rm -rf .clangd

-include $(DEPS)


