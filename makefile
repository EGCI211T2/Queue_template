argument: main.cpp
	g++ main.cpp -o Q
run: Q
	./Q
test: Q
	./Q 1 2 3 x 4 x x 5 x 
