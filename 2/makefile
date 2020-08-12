CC := g++ -std=c++11
Obj_files = main.o SociableBots.o Librarian.o Fred.o Logger.o Echo.o UnavailableChannel.o DuplicateChannel.o AvailableChannel.o Channel.o
all: 2.out


2.out: ${Obj_files}
	${CC} ${Obj_files} -o 2.out
main.o: main.cpp SociableBots.hpp
	${CC} -c main.cpp -o main.o
SociableBots.o: SociableBots.cpp SociableBots.hpp Bot.hpp Channel.hpp Echo.hpp Logger.hpp Fred.hpp Librarian.hpp UnavailableChannel.hpp AvailableChannel.hpp DuplicateChannel.hpp 
	${CC} -c SociableBots.cpp -o SociableBots.o
Librarian.o: Librarian.cpp Librarian.hpp Bot.hpp Channel.hpp
	${CC} -c Librarian.cpp -o Librarian.o
Fred.o: Fred.cpp Fred.hpp Bot.hpp Channel.hpp
	${CC} -c Fred.cpp -o Fred.o
Logger.o: Logger.cpp Logger.hpp Bot.hpp Channel.hpp
	${CC} -c Logger.cpp -o Logger.o
Echo.o: Echo.cpp Echo.hpp Bot.hpp Channel.hpp
	${CC} -c Echo.cpp -o Echo.o
UnavailableChannel.o: UnavailableChannel.cpp UnavailableChannel.hpp
	${CC} -c UnavailableChannel.cpp -o UnavailableChannel.o
DuplicateChannel.o: DuplicateChannel.cpp DuplicateChannel.hpp
	${CC} -c DuplicateChannel.cpp -o DuplicateChannel.o
AvailableChannel.o: AvailableChannel.cpp AvailableChannel.hpp 
	${CC} -c AvailableChannel.cpp -o AvailableChannel.o
Channel.o: Channel.cpp Channel.hpp Bot.hpp
	${CC} -c Channel.cpp -o Channel.o
clean:
	rm -r *.o