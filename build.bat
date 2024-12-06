@echo off

:: Compilo código objeto
:: Enlazo cabecera con el cpp y genero los objetos

g++ -Wall -std=c++17 -I.\include -c .\src\Clinica.cpp
g++ -Wall -std=c++17 -I.\include -c .\src\ListNode.cpp
g++ -Wall -std=c++17 -I.\include -c .\src\Node.cpp
g++ -Wall -std=c++17 -I.\include -c .\src\Person.cpp


g++ -Wall -std=c++17 -I.\include -c main.cpp 

:: Compilo el Binario y genero el exe
g++ -I.\include ListNode.o Node.o Person.o Clinica.o main.o -o miPrograma.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
miPrograma.exe
