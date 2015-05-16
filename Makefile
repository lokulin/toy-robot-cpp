all:
	g++ -Wall -Werror -std=c++11 -c src/*cpp
	g++ -Wall -Werror -std=c++11 -I./src/ *o toyrobot.cpp -o toyrobot
	rm *.o

clean:
	rm toyrobot
