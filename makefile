
run: main
	./main

main: src/main.c
	gcc -o main $^ -lncurses -lpanel -lmenu


