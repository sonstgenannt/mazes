Mazes: src/node.cpp src/graph.cpp main.cpp
	g++ -o Mazes src/node.cpp src/graph.cpp main.cpp

.PHONY: run clean

run: Mazes
	./Mazes

clean:
	rm -f Mazes
