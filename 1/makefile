CC := g++ -std=c++11
Obj_files = main.o JsonBuilder.o UndefinedType.o InvalidId.o Object.o DuplicateKey.o Array.o Container.o String.o Integer.o Data.o
all: 1.out

1.out: ${Obj_files}
	${CC} ${Obj_files} -o 1.out
main.o: main.cpp JsonBuilder.hpp
	${CC} -c main.cpp -o main.o
JsonBuilder.o: JsonBuilder.cpp JsonBuilder.hpp Data.hpp Integer.hpp String.hpp Object.hpp Array.hpp InvalidId.hpp UndefinedType.hpp
	${CC} -c JsonBuilder.cpp -o JsonBuilder.o
UndefinedType.o: UndefinedType.cpp UndefinedType.hpp
	${CC} -c UndefinedType.cpp -o UndefinedType.o
InvalidId.o: InvalidId.cpp InvalidId.hpp
	${CC} -c InvalidId.cpp -o InvalidId.o
Object.o: Object.cpp Object.hpp Container.hpp DuplicateKey.hpp
	${CC} -c Object.cpp -o Object.o
DuplicateKey.o: DuplicateKey.cpp DuplicateKey.hpp
	${CC} -c DuplicateKey.cpp -o DuplicateKey.o
Array.o: Array.cpp Array.hpp Container.hpp
	${CC} -c Array.cpp -o Array.o
Container.o: Container.cpp Container.hpp Data.hpp
	${CC} -c Container.cpp -o Container.o
String.o: String.cpp String.hpp Data.hpp
	${CC} -c String.cpp -o String.o
Integer.o: Integer.cpp Integer.hpp Data.hpp
	${CC} -c Integer.cpp -o Integer.o
Data.o: Data.cpp Data.hpp
	${CC} -c Data.cpp -o Data.o
clean:
	rm -r *.o