#include "randomList.h"

class histogram : public randomList {
	private:
		vector<int> H;
	public:
		histogram(int = 0, int = 0);

		void createH();
		vector<int> getH() const;

		virtual void printList();
};
