	
PROJECT := transformer
IDIR := .
CXX := g++
CXXFLAGS := -I$(IDIR) -Werror -Wpedantic -Wall
OBJECT_FILES := Transformers.o Autobots.o Decepticons.o main.o

DEPS := Transformers.h Autobots.h Decepticons.h

all: $(PROJECT)
default: all

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(PROJECT) *.o

format:
	find . $ -name '*.cpp' -o -name '*.h' $ -exec clang-format -i {} \;

$(PROJECT): $(OBJECT_FILES)
	$(CXX) -o $@ $^

.PHONY: clean format all default