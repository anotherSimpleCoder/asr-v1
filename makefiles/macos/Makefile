SDL_FLAGS = -I /usr/local/include/SDL2 -D_REENTRANT

CFLAGS = $(SDL_FLAGS) -I header

OPTIONS = -fsanitize=address

LIBS = -lSDL2

BIN_NAME = asr.dylib

compile:
	g++ -fPIC $(CFLAGS) -c src/*.cpp $(OPTIONS)
	g++ $(LIBS) -dynamiclib -fPIC -o $(BIN_NAME) *.o $(OPTIONS)
	rm *.o	

remove:
	rm $(BIN_NAME)
	clear

clean:
	rm *.o
	clear
