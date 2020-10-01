#include <iostream>

using namespace std;

class CED {

public:
	CED(){}
	
	class UC{
		UC(){}
	};

	class UM{
	public:
		int a;
		int b;
		UM(int a, int b){
			this->a = a;
			this->b = b;
		}
	};
	class ALU : public UM{
	public:
		ALU(int a, int b) : UM(a, b){}
		int procesare() {
			return a + b;
		}
	};

	class UA : public ALU {
	
	public:
		UA(int a, int b) : ALU(a, b){}
		void output() {
			cout << procesare();
		}
	};
};

int main() {
	int a;
	int b;
	cin >> a >> b;
	CED::UA ua(a, b);
	ua.output();

	return 0;
}