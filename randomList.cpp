#include "randomList.h"

using namespace std;

randomList::randomList(int itr, int rnge) 
{
	setIters(itr);
	setRange(rnge);
}

void randomList::setIters(int itr) {
	iterations = itr;
}

int randomList::getIters() const {
	return iterations;
}

void randomList::setRange(int rnge) {
	r = rnge;
}

int randomList::getRange() const {
	return r;
}

void randomList::createX() {
	srand(time(0));
	for (int i = 0; i < getIters(); i++) {
		X.push_back(rand() % getRange());
	} 
}

vector<int> randomList::getX() {
	if (X.empty()) {
		createX();
	}
	return X;
}

void randomList::printList() {
	cout << " --- X List --- " << endl;
	createX();
	
	for (int i = 0; i < getIters(); i++) {
		cout << setw(4) << i << ": " << X.at(i) << endl;
	} 
}
