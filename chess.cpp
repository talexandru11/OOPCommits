#define _SECURE_CRT_NO_WARNINGS
#include <iostream>

using namespace std;

class PiesaSah {
public:
	string nume; 
	bool culoare; // 1=alb, 0=negru
	bool activa; // 1=exista, 0=eliminata

	void mutare() {
		cout << "Piesa se muta pe tabla de sah." << endl;
	}
};



void main() {
	return 0;
}