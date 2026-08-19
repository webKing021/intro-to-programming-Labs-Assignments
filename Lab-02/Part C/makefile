CXX = g++
CXXFLAGS = -Wall

OBJS = main.o Calculator.o

app: $(OBJS)
	$(CXX) $(OBJS) -o app

main.o: main.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Calculator.o: Calculator.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c Calculator.cpp

clean:
	rm -f *.o app