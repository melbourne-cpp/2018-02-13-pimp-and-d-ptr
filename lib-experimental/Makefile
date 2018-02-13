CXXFLAGS = -Wpedantic -Werror

all: libsquare.so square.o

lib%.so: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -shared -fPIC -o $@ $<

.PHONY:
clean:
	$(RM) *.o *.so

.PHONY:
install: libsquare.so square.h
	cp -a libsquare.so ../sys/lib/
	cp -a square.h ../sys/include/
