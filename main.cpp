#include <iostream>
#include <string>

using namespace std;

int main(){

	const int MAX = 30;
	int LEN;
	
	int student[MAX];
	string name[MAX];
	
	cout <<" How many students are in this class: ";
	cin >> LEN;

	
	int students[LEN];
	string name[LEN] = {"Bob", "Jill"};
	
	for(int i=0; i<LEN; i++){
		cout << "Enter student, " << i+1 << "'s name ";
		cin >> name[i];
		cout << " Enter " << name[i] << "'s grade: ";
		cin >> students[i];
	}
	
		for(int s=0; s<LEN; s++){
			cout << name[s] << "'s grade is " << students[s] << endl;
	}
	
	return 0;
	
}