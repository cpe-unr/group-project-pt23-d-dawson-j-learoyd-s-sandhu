audio: main.o PreprocessManager.o Mono8BitManager.o
        g++ -std=c++11 -o main.o PreprocessManager.o Mono8BitManager.o

main.o: main.cpp Mono8BitManager.h PreprocessManager.h
        g++ -std=c++11 -c main.cpp

PreprocessManager.o: PreprocessManager.cpp PreprocessManager.h
        g++ -std=c++11 -c PreprocessManager.cpp

Mono8BitManager.o: Mono8BitManager.cpp Mono8BitManager.h
        g++ -std=c++11 -c Mono8Bit.cpp

clean:
        rm audio *.o
