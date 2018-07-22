

objs: ./core/models/src/MDObject.cpp ./core/models/header/MDObject.h
	gcc -I . -c ./core/models/src/MDObject.cpp

all: objs