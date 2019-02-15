compile: 
	gcc -g main.c .src/argtok.c -o argtok
	#./argtok
test: 
	gcc -g tests.c -o test
	#./test