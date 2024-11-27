PROJECT=transformer
IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR) -Werror -Wpedantic -Wall
LDFLAGS=-lgtest 
OBJECT_FILES=Autobots.o Transformers.o Bullet.o Weapon.o Winx.o ItemStorage.o Decepticons.o 

DEPS=Autobots.h Transformers.h Winx.h Bullet.h ItemStorage.h Weapon.h

TEST_DIR=.
TEST_FILES=$(wildcard $(TEST_DIR)/test*.cpp)
TEST_OBJECTS=$(TEST_FILES:.cpp=.o) $(OBJECT_FILES)
all: $(PROJECT);
default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
clean:
	rm -f $(PROJECT) $(TEST_DIR)/*.o *.o
format:
	find . \( -name '*.cpp' -o -name '*.h' \) -exec clang-format -i {} \;
$(PROJECT):
	@echo 'print "make test" to test classes';


test: $(TEST_OBJECTS)
	$(CXX) -o run_tests $^ $(LDFLAGS)
	./run_tests
	rm ./run_tests *.o
	
	

$(TEST_DIR)/test-%.o: $(TEST_DIR)/test-%.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
.PHONY: clean format $(PROJECT)
