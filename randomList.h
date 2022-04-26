#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class randomList {
	private: 
		int iterations;
		int r;
		vector<int> X;

	public:
		randomList(int = 0, int = 0);

		void setIters(int);
		int getIters() const;

		void setRange(int);
		int getRange() const;

		void createX();
		vector<int> getX();

		virtual void printList();
};
