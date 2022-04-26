#include "histogram.h"

histogram::histogram(int itr, int rnge) 
	: randomList(itr,rnge) {
}

void histogram::createH() {
	vector<int> clone = randomList::getX();
	int itrLim = randomList::getIters();
	int rLim = randomList::getRange();

	for (int i = 0; i < rLim; i++) {
		H.push_back(0);
	}

	for(int i = 0; i < itrLim; i++) {
		H.at(clone.at(i))++;
	}
}

vector<int> histogram::getH() const {
	return H;
}

void histogram::printList() {
	cout << " --- Histogram --- " << endl;
	createH();

	int rLim = randomList::getRange();
	for (int i = 0; i < rLim; i++) {
		cout << setw(4) << i << ": " << H.at(i) << endl; 
	}
}



