PROJECT = transformer
LIBPROJECT = $(PROJECT).a
TESTPROJECT = test-$(PROJECT)

CXX = g++
AR = ar
ARFLAGS = rsv
CXXFLAGS = -Wall -std=c++17 
LDXXFLAGS = $(CXXFLAGS)
LDTESTFLAGS = $(LDXXFLAGS) -lgtest

HEADERS = $(wildcard *.h)
OBJ = main.o Autobots.o Bullet.o Decepticons.o Transformers.o Weapon.o Winx.o 
TEST_OBJ = test-Autobots.o test-Bullet.o test-Decepticons.o test-Transformers.o test-Weapon.o test-Winx.o test.o

.PHONY: main
main: all;

%.o: %.cpp $(HEADERS)
    $(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(OBJ)
    $(AR) $(ARFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
    $(CXX) -o $@ main.o $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST_OBJ)
    $(CXX) -o $@ $(TEST_OBJ) $(LDTESTFLAGS)

test: $(TESTPROJECT)

all: $(PROJECT)

.PHONY: clean
clean:
    rm -f *.o

.PHONY: cleanall
cleanall:
    rm -f $(PROJECT)
    rm -f $(LIBPROJECT)
    rm -f $(TESTPROJECT)