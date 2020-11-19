#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

string insertion(string s, int size){
	int j;
	for(int i = 1; i < size; i++){ //Start from second char
		j = i; //use to check every front elements
		while((j > 0) && (s[j] < s[j-1])){ //if j is not the first and this char is smaller than previous char
			swap(s[j], s[j-1]); //swap this char with the bigger one
			j--;
		}
	}
	return s;
}

int main(){
	string s;
	cin >> s;
	cout << insertion(s, s.length());
	return 0;
}