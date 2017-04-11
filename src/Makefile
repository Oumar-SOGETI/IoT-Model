CXXFLAGS=-Wall

sources=Main.cpp
entetes=IoT.h
objets=$(sources:.cpp=o)

%: %.o
	$(LINK.cpp) -o $@ $^

main: 			$(objets)
IoT.o: 			IoT.cpp IoT.h
Maker.o:		Maker.cpp Maker.h
Sensor.o: 		Sensor.cpp Sensor.h
Actuator.o:		Actuator.cpp Actuator.h
Memory.o:		Memory.cpp Memory.h
Ressource.o: 	Ressource.cpp Ressource.h
Interface.o:	Interface.cpp Interface.h
Position.o:		Position.cpp Position.h
Agent.o: 		Agent.cpp Agent.h
Action.o:		Action.cpp Action.h
Control.o: 		Control.cpp Control.h
Command.o:		Command.cpp Command.h
Flow.o:			Flow.cpp Flow.h
Controler.o: 	Controler.cpp Controler.h


clean:
	rm -f *~ *.o

mrproper: clean
	rm -f main