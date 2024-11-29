#include <iostream>
# include<vector>
#include<algorithm>
using namespace std;
void max_heap(vector<int>& sh, int s, int i) {
	int max = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left<s && sh[left]>sh[max]) {
		max = left;
	}
	if (right <s && sh[right]>sh[max]) {
		max = right;
	}
	if (max != i) {
		swap(sh[max], sh[i]);
		max_heap(sh, s, max);
	}
}

void min_heap(vector<int>& sh, int s, int i) {
	int min = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < s && sh[left] < sh[min]) {
		min = left;
	}
	if (right < s && sh[right] < sh[min]) {
		min = right;
	}
	if (min != i) {
		swap(sh[min], sh[i]);
		max_heap(sh, s, min);
	}

}
void build_max(vector<int>& sh, int s) {
	for (int i = s / 2 - 1; i >= 0; i--) {
		max_heap(sh, s, i);
	}
}
void build_min(vector<int>& sh, int s) {
	for (int i = s / 2 - 1; i >= 0; i--) {
		min_heap(sh, s, i);
	}
}
void sort_ASN(vector<int>& sh, int s) {
	build_max(sh, s);
	for (int i = s - 1; i >= 0; i--) {
		swap(sh[i], sh[0]);
		max_heap(sh, i, 0);
	}
}

void sort_DASN(vector<int>& sh, int s) {
	build_min(sh, s);
	for (int i = s - 1; i >= 0; i--) {
		swap(sh[i], sh[0]);
		min_heap(sh, i, 0);
	}
}
void print(vector<int>& sh, int s) {
	for (int i = 0; i < s; i++) {
		cout << sh[i] << "    ";
	}
	cout << "\n";
}
int main()
{
	int r;
	cin >> r;
	vector<int>sh;
	for (int i = 0; i < r; i++) {
		int m;
		cin >> m;
		sh.push_back(m);
	}
	build_min(sh,r);
	print(sh, r);
	sort_ASN(sh, r);
	//build_max(sh, r);
	print(sh, r);

}

