#include <iostream>
#include <vector>
using namespace std;
//hasing function
int h_fun (int siz,int key) {
	key %= siz;
	return key;
}
//fix hashing collision with Replacement
void Re() {
	int s;
	cin >> s;
	vector<int>hash_table(10);
	for (int i = 0; i < s; i++) {
		int h;
		cin >> h;
		int l = h_fun(10, h); 
		hash_table[l] = h;
	}
	for (int i = 0; i < 10; i++) {
		cout << hash_table[i]<<" ";
	}
}
//fix hashing collision with linear probing  
void li_pro() { 
	int s;
	cin >> s;
	vector<int>hash_table(10);
	for (int i = 0; i < s; i++) {
		int h;
		cin >> h;
		int l = h_fun(10, h); 

		while (hash_table[l] != 0&& l!=9) {
			
				l++;
		}
		//make circular to put the element in the empty place 
		if (l == 9&& hash_table[l] != 0) {
			l = 0;
			while (hash_table[l]!=0&&l!=9) {
				l++;
			}
		}
		
		hash_table[l] = h;
		
	}
	for (int i = 0; i < 10; i++) {
		cout << hash_table[i] << " ";
	}
}

//fix hashing collision with quadritic probing
void qu_pro () {
	int s;
	cin >> s;
	int start = 0;
	vector<int>hash_table(10);
	for (int i = 0; i < s; i++) {
		int h;
		cin >> h;
		int l = h_fun(10, h);
		while (hash_table[l] != 0) {
			
				start++;
				l = (l + start * start) % 10;
		}

			hash_table[l] = h;

	}
	for (int i = 0; i < 10; i++) {
		cout << hash_table[i] << " ";
	}
}
//fix hashing collision with double hashing

void Double () {
	int s;
	cin >> s;
	int st = 0;
	vector<int>hash_table(5);
	for (int i = 0; i < s; i++) {
		int h;
		cin >> h;
		int l = h_fun(5, h);
		while (hash_table[l] != 0) {

			st++;
			l = l+(st*l)%5;
		}

		hash_table[l] = h;

	}
	for (int i = 0; i < 5; i++) {
		cout << hash_table[i] << " ";
	}
}


int main()
{
	
	Double();
   
}

