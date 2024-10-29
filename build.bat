@echo off
g++ -std=c++17 -Wall -I.\include -c .\src\Articulo.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Cliente.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Pedido.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\main.cpp
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I.\include Articulo.o Cliente.o Pedido.o main.o -o app.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el programa
app.exe
pause
