CC_FLAGS = -O2 -o main
main :
	g++ $(CC_FLAGS) main.cpp

clean:
	rm -rf ./main