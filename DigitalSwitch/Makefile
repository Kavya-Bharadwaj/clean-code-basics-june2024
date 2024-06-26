Main.exe:StateHandlerFactory.o StateHandlers.o DigitalSwitch.o Main.o
	g++ -std=c++11 StateHandlerFactory.o StateHandlers.o DigitalSwitch.o Main.o -o Main.exe
	rm *.o
Main.o:
	g++ -std=c++11 -c -g Main.cpp -o Main.o
StateHandlers.o:
	g++ -std=c++11 -c -g StateHandlers.cpp -o StateHandlers.o
DigitalSwitch.o:
	g++ -std=c++11 -c -g DigitalSwitch.cpp -o DigitalSwitch.o
StateHandlerFactory.o:
	g++ -std=c++11 -c -g StateHandlerFactory.cpp -o StateHandlerFactory.o