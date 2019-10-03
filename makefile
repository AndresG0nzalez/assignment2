### Andres Gonzalez || CEN4020 || Assignment 2 ###

roleGame: main.o Vehicle.o PoweredVehicle.o Car.o Bicycle.o 
	g++ -std=c++11 -o roleGame main.o Vehicle.o PoweredVehicle.o Car.o Bicycle.o

main.o: main.cpp Vehicle.h PoweredVehicle.h Bicycle.h Car.h
	g++ -std=c++11 -c main.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -std=c++11 -c Vehicle.cpp 

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -std=c++11 -c PoweredVehicle.cpp

Car.o: Car.cpp Car.h
	g++ -std=c++11 -c Car.cpp

Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -std=c++11 -c Bicycle.cpp

clean:
	rm *.o roleGame
