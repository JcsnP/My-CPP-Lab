#include <iostream>
using namespace std;

namespace firsttone {
	void fun() {
		 cout << "this is first ns" << endl;
	}
}

namespace secondtone {
	void fun() {
		cout << "this is second ns" << endl;
	}
}

int main(int argc, char *argv[]){
	firsttone::fun();
	secondtone::fun();
}
