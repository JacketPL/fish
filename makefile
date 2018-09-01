main : main.o
	gcc -o main main.c -g
clean :
	rm main.o
