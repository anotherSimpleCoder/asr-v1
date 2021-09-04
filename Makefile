SDL_FLAGS = -I /usr/local/include/SDL2 -D_REENTRANT

CFLAGS = $(SDL_FLAGS) -I header

OPTIONS = -fsanitize=address

LIBS = -lSDL2

BIN_NAME = asr.so

STATIC_NAME = asr.a

compile:
	clang++ -fPIC $(CFLAGS) -c src/*.cpp
	clang++ -shared $(LIBS) -fPIC -o $(BIN_NAME) *.o
	rm *.o	

remove:
	rm $(BIN_NAME)
	clear

clean:
	rm *.o
	clear
