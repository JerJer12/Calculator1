#pragma once

#include <string>
#include <bitset>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
using namespace std;



string zeroDeleter(string binary) {
	while (binary.at(0) == '0') {
		binary.erase(0, 1);
	}
	return binary;

}