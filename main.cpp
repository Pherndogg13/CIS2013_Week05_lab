#include <iostream>

using namespace std;

int main(){

	const int LEN = 2;
	
	int students[LEN];
	
	for(int i=0; i<LEN; i++){
		cout << "enter student, " << i+1 << "'s grade ";
		cin >> students[i];
	}
	
		for(int s=0; s<LEN; s++){
			cout << "student  " << s+1 << "'s grade is " << students[s] << endl;
	}
	
	return 0;
	
}