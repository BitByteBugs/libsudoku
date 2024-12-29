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
