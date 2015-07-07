//
//  main.cpp
//  Compute Parity
//
//  Created by Chris Searcy on 7/7/15.
//  Copyright (c) 2015 Chris Searcy. All rights reserved.
//

#include <iostream>

using namespace std;

bool parity(int x) {
	bool result = false;
	while (x) {
		result ^= x&1;
		x>>1;
	}
	return result;
}

int main(int argc, const char * argv[]) {
	
	parity(1);
	parity(10);
	parity(6);
	
}
