CXX=g++


#SRC=main.cpp obj.cpp
SRC=$(filter-out tests_gtest.cpp,$(wildcard *.cpp))
EXE=main

MACOS=
#MACOS=-isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk
CXXFLAGS+=-Wall -Wextra -MMD -g -O2 -fdiagnostics-color=auto $(MACOS) -Wshadow #-fsanitize=thread
LDFLAGS= $(MACOS)#-lSDL $(shell sdl2-config --cflags --libs) -lm -lSDL2_ttf -lSDL2_mixer -lpthread -D_REENTRANT -lSDL2_image 

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEPS=$(addprefix build/,$(SRC:.cpp=.d))

all: catch.hpp $(EXE)

$(EXE):$(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<


.PHONY:clean mrproper

clean:
	rm -rf build core *.gch

catch.hpp:
        wget https://raw.githubusercontent.com/catchorg/Catch2/v2.x/single_include/catch2/catch.hpp

mrproper: clean
	rm -rf $(EXEC)
	rm -rf compile_commands.json
	rm -rf .clangd

-include $(DEPS)


