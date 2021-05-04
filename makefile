audio: main.o PreprocessManager.o EightBitManager.o SixteenBitManager.o Noisegate.o Wav.o
	g++ -std=c++11 -o audio main.o PreprocessManager.o EightBitManager.o SixteenBitManager.o Noisegate.o Wav.o

main.o: main.cpp EightBitManager.h SixteenBitManager.h PreprocessManager.h Noisegate.h Wav.h
	g++ -std=c++11 -c main.cpp

PreprocessManager.o: PreprocessManager.cpp PreprocessManager.h AudioManager.h Header.h MetaData.h Wav.h
	g++ -std=c++11 -c PreprocessManager.cpp

EightBitManager.o: EightBitManager.cpp EightBitManager.h AudioManager.h Header.h MetaData.h Wav.h
	g++ -std=c++11 -c EightBitManager.cpp

SixteenBitManager.o: SixteenBitManager.cpp SixteenBitManager.h AudioManager.h Header.h MetaData.h Wav.h
	g++ -std=c++11 -c SixteenBitManager.cpp

Noisegate.o: Noisegate.cpp Noisegate.h IAudioProcessor.h
	g++ -std=c++11 -c Noisegate.cpp

Wav.o: Wav.cpp Wav.h MetaData.h
	g++ -std=c++11 -c Wav.cpp

Echo.o: Echo.cpp Echo.h Wav.h IAudioProcessor.h
	g++ -std=c++11 -c Echo.cpp

Normalization.o: Normalization.cpp Normalization.h
	g++ -std=c++11 -c Normalization.cpp

clean:
	rm audio *.o
