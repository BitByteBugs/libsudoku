.PHONY: clean
clean:
	rm -rf build

.PHONY: cleanall
cleanall:
	rm -rf build test/build

.PHONY: test
test:
	cmake -S test -B test/build
	cmake --build test/build
	ctest --test-dir test/build

.PHONY: lint
lint:
	pipenv run cpplint --linelength=120 --recursive src

.PHONY: build_generator
build_generator:
	cmake -S src/generator -B build/generator
	cmake --build build/generator

.PHONY: build_solver
build_solver:
	cmake -S src/solver -B build/solver
	cmake --build build/solver

.PHONY: build
build: build_generator
