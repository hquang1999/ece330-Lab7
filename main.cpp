#include "histogram.h"
using namespace std;

int main() {
	histogram h(10000,101);
	h.histogram::printList();
	return 0;
}









/*
// Visual purposes. Call false for speed.
string getBars(int max) {
	string a;

	for (int i = 0; i < max; i++) {
		a.append("|");	
	}

	return a;
}

// n = number of trials, so 0 - 10000
// r = our range, 0 - 100
void calcHistogram(int n, int r, bool bars) {
	cout << "---- " << n << " Trials | " 
		<< "Range 0 - " << r - 1 << " ----" << endl;
	int X[n] = {};
	int H[r] = {};
	
	srand(time(0));
	
	for (int i = 0; i < n; i++) {
		X[i] = rand() % r;
	}
	
	for (int i = 0; i < n; i++) {
		H[X[i]]++;
	}

	if (bars) {
		for (int i = 0; i < r; i++) {
			cout << setw(4) << i << ": " << getBars(H[i]) << setw(5) 
				<< "[" << H[i] << "]"  << endl;		
		}
	} 
	else {
		for (int i = 0; i < r; i++) {
			cout << setw(4) << i << ": " << H[i] << endl;		
		}
	}
}
*/
