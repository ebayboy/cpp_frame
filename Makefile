
CXX := g++

CXXFLAGS := -O0 -std=c++20 -g -lpthread -I. -L. -L./libs -I./include

LIBS :=

TARGET := waf_rules_checker

all: waf_rules_checker

waf_rules_checker: main.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(CXX) $(CXXFLAGS) -o $@ -c $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^

clean:
	rm -rf *.o $(TARGET)
