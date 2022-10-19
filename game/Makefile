all:
	mkdir -p build
	gcc -lraylib -lm src/*.c -o ../build/game
run:
	mkdir -p build
	gcc -lraylib -lm src/*.c -o build/game
	build/game
release:
	mkdir -p build
	gcc -O3 -lraylib -lm src/*.c -o build/game
