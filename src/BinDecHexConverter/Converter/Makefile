
all: Converter

Converter: BinConverter.o HexConverter.o DecConverter.o ConverterBase.o
	mkdir -p ../out
	mv *.o ../out

ConverterBase.o: ConverterBase.cpp
	g++ -Wall -c ConverterBase.cpp -o ConverterBase.o

BinConverter.o: BinaryConverter.cpp
	g++ -Wall -c BinaryConverter.cpp -o BinConverter.o

HexConverter.o: HexadecimalConverter.cpp
	g++ -Wall -c HexadecimalConverter.cpp -o HexConverter.o
	
DecConverter.o: DecimalConverter.cpp
	g++ -Wall -c DecimalConverter.cpp -o DecConverter.o
