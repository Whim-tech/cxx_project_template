.PHONY: run

run:
	cmake --preset debug
	cmake --build --preset debug
	./bin/main
