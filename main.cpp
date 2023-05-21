#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using namespace std;


int main() {
	int b,cicle,number;
	cicle = 2;
	string heroes[10];
	cout << "please write without space, use \"_\"!"<< endl;
	for (int i = 0; i < 10;i++) {
		
		cout<< "["<< i+1<<"]:";
		cin >>heroes[i];
	}
	cout << "------------------------------------------------------------------------------------" << endl << "if you want to see your list write [1], if you want to close program write [2]" << endl << "------------------------------------------------------------------------------------" << endl;
	for (int b = 1; b<cicle;) {
		
		cin >> number;
		
		if (number == 1) {
			for (int i = 0; i < 10; i++) {
				cout << "[" << i + 1 <<"]:"<< heroes[i]<<endl;
				
			}
			return 0;
		}
		else if (number == 2)
			return 0;
		else {
			cout << endl<< "wrong number, try again" << endl<<endl;
			cicle = 2;
		}


	}
	
	/*string heroes[10] = {
		"riki","sven","slark","spectre","dazzle","phantom assasin","medusa","naga siren","bristleback","sniper"
	};
	*/
	
}