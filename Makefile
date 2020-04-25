# variables to control makefile operation:
CXX = g++
CXXFLAGS = -Wall -g

starter: starter.o piBuffon.o piLn.o piMadhava.o piMC.o piTan.o
	$(CXX) $(CXXFLAGS) -o starter starter.o piBuffon.o piLn.o piMadhava.o piMC.o piTan.o
	
starter.o: starter.cpp piBuffon.h piLn.h piMadhava.h piMC.h piTan.h
	$(CXX) $(CXXFLAGS) -c starter.cpp
	
piBuffon.o: piBuffon.h
piLn.o: piLn.h
piMadhava.o: piMadhava.h
piMC.o: piMC.h
piTan.o: piTan.h

clean:
	-rm piBuffon.o piLn.o piMadhava.o piMC.o piTan.o starter.o starter.exe
	
cleanObjects:
	-rm starter.o piBuffon.o piLn.o piMadhava.o piMC.o piTan.o
	
cleanExecutable:
	-rm starter.exe 