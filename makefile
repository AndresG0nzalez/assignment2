### Andres Gonzalez || CEN4020 || Assignment 2 ###

roleGame: main.o Vehicle.o PoweredVehicle.o Car.o Bicycle.o Jet.o Skateboard.o Boat.o
	g++ -std=c++11 -o roleGame main.o Vehicle.o PoweredVehicle.o Car.o Bicycle.o Jet.o Skateboard.o Boat.o

main.o: main.cpp Vehicle.h PoweredVehicle.h Bicycle.h Car.h Jet.h Skateboard.h
	g++ -std=c++11 -c main.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -std=c++11 -c Vehicle.cpp 

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -std=c++11 -c PoweredVehicle.cpp

Car.o: Car.cpp Car.h
	g++ -std=c++11 -c Car.cpp

Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -std=c++11 -c Bicycle.cpp

Jet.o: Jet.cpp Jet.h
	g++ -std=c++11 -c Jet.cpp

Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -std=c++11 -c Skateboard.cpp

Boat.o: Boat.cpp Boat.h
	g++ -std=c++11 -c Boat.cpp	
	
clean:
	rm *.o roleGame
