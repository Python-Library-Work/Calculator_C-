# Isso e um Makefile, para funcionar, digite: make


calculator.o:
	g++ -o calculator calculator.cpp -Wall
	echo "-> Compiled with sucess!"
	
clean:
	rm -rf calculator

