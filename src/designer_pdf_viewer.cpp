#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> h1 = { 1 ,3 ,1, 3 ,1 ,4 ,1 ,3 ,2 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 };
	string word1="abc";
	vector<int> h = { 1 ,3 ,1 ,3 ,1 ,4 ,1 ,3 ,2 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 ,7 };
	string word = "zaba";
	char c;
	int pos = 0;
	int ascii=0;
	int length = 0;
	
	vector<int> poss;
	int max = 0;
	for (int i = 0; i < word.length(); i++) 
	{	
	
		c = word[i];
		ascii = int(c);
		pos = ascii - 97;
		poss.insert(poss.begin(),(h[pos]));
	}
	
	max = *max_element(poss.begin(), poss.end());
	length = max * word.length();

	return length;
}
