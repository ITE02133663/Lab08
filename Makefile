main: main.o
	gcc -pthread fork.o -o main
main.o: fork.c
	gcc -pthread -c fork.c
clean:
	rm main.o
