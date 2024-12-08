

:: Compilo código objeto
:: Enlazo cabecera con el cpp y genero los objetos

g++ -Wall -std=c++17 -I.\include -c .\src\persona.cpp
g++ -Wall -std=c++17 -I.\include -c .\src\paquete.cpp

g++ -Wall -std=c++17 -I.\include -c main.cpp 

:: Compilo el Binario y genero el exe
g++ -I.\include persona.o paquete.o main.o -o miPrograma.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
miPrograma.exe
