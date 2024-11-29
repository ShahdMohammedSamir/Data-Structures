#include <iostream>
# include <vector>
#include <algorithm>
using namespace std;
bool f = true;//to check if the array is sorted if it already sorted we will terminate the loop
void buble_s(vector<int>& s, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (s[j] > s[j + 1]) {
				swap(s[j], s[j + 1]);
				f = false;
			}
		}
		if (f == true) {
			break;
		}
	}
}


void selection_s(vector<int>& s, int n) {

	for (int i = 0; i < n; i++) {
		int in = 0;
		int min = *min_element(s.begin() + i, s.end());
		for (int j = 0; j < n; j++) {
			if (s[j] == min) {
				in = j;
			}
		}
		swap(s[in], s[i]);
	}

}


void insertion_s(vector<int>& s, int n) {

	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (s[j] > s[j + 1]) {
				swap(s[j], s[j + 1]);
			}
	    }
	}



}

int main()
{
	int s;
	cin >> s;
	vector<int>sh;
	for (int i = 0; i < s; i++) {
		int h;
		cin >> h;
		sh.push_back(h);
	}

	buble_s(sh, s);
	//selection_s(sh, s);
	insertion_s(sh, s);
	for (int i = 0; i < s; i++) {
		cout << sh[i] << " ";
	}


}

