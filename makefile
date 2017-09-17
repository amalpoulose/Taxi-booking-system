outfile:main.o init.o book.o display.o max_earning.o
	cc main.c init.c book.c display.c max_earning.c -o outfile
main.o:main.c
	cc -c -fPIC main.c
init.o:init.c
	cc -c -fPIC init.c
book.o:book.c
	cc -c -fPIC book.c
display.o:display.c
	cc -c -fPIC display.c
max_earning.o:max_earning.c
	cc -c -fPIC max_earning.c
