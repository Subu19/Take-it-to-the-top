all: compile link
compile:
	g++ -I src/include -c main.cpp -municode
link:
	g++ main.o -o main -L src/lib -l sfml-graphics -l sfml-window -l sfml-system 