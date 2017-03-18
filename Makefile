

SOURCE = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SOURCE))

CXX = g++
RM = rm -f

CPPFLAGS += -std=c++11
CPPFLAGS += -g 


TARGET = main

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CXX) $(CPPFLAGS) -o $@ $^

sinclude $(SOURCE:.cpp=.d)

%.o:%.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@  

%.d:%.cpp
	@set -e;\
	$(CXX) $(CPPFLAGS) -MM  $< > $@.$$$$; \
	sed 's/\($*\)\.o/\1.o $@/g' < $@.$$$$ > $@;\
	rm -f $@.$$$$  



.PHONY:clean
clean:
	$(RM) *.o *.d $(TARGET)


