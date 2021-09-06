#include <iostream>
#include <string>
using namespace std;

void is_palindrome(string word);

int main(){
	string WORD;

	do{
		//get input
		getline(cin, WORD);

		//check palindroness
		if (WORD != "") is_palindrome(WORD);
	}
	while(WORD != "");

	return 0;
}

void is_palindrome(string WORD){

	//iterate till the middle char
	for (int i = 0; i < WORD.size()/2; i++){

		//check last with first
		if (WORD[i] != WORD[WORD.size()-i-1]){
			cout << "No palindroma" << endl;
			return;
		}
	}

	cout << "Palindroma" << endl;
	return;
}


