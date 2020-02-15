ArrayStack: main.o Stack.o menu.o
	gcc -o ArrayStack main.o Stack.o menu.o

main.o: main.c Stack.h Userdata.h
	gcc -c main.c 
Stack.o: Stack.c Stack.h Userdata.h
	gcc -c Stack.c
menu.o: menu.c Stack.h Userdata.h
	gcc -c menu.c
