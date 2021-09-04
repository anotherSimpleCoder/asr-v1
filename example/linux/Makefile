ASR_FLAGS = -I include -D_REENTRANT

compile:
	clang++ $(ASR_FLAGS) -c main.cpp asr.so
	clang++ asr.so -o main main.o
	rm *.o
