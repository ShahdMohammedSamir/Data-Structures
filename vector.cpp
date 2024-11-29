#include <iostream>
#include <vector>
# include <algorithm>
#include <cmath>
#include<string>
#include<array>
using namespace std;

//TRAVERSE//
void trav() {
    int g;
    cin >> g;
    vector <int>arr(g);
    for (int i = 0; i < g; i++) {
        int s;
        cin >> s;
        arr[i] = s;
    }
    for (int i = 0; i < g; i++) {
        cout << arr[i] << "\n";
    }
}

//SUM//
void sum() {
    int size;
    cin >> size;
    long long su = 0;
    vector <int>arr(size);
    for (int i = 0; i < size; i++) {
        int s;
        cin >> s;
        arr[i] = s;
    }
    for (int i = 0; i < size; i++) {
        su += arr[i];
    }
    cout << su;
}


//REVERSE//
void reverse() {
    int si;
    cin >> si;
    vector<int> r_vec(si);
    for (int i = 0; i < si; i++) {
        int r;
        cin >> r;
        r_vec[i] = r;
    }
    int l = si - 1;
    int  s = 0;
    while (s < l) {
        swap(r_vec[s], r_vec[l]);
        l--;
        s++;
    }
    for (int i = 0; i < si; i++) {
        cout << r_vec[i];
    }
}

//INSERT//

void insert() {
    int siz;
    cin >> siz;
    vector<int> in_vec(siz);
    for (int i = 0; i < siz; i++) {
        cin >> in_vec[i];
    }
    cout << "insert done";


}




void ins_tes(vector<int>& sh, int d, int num) {


    sh.resize(sh.size() + 1);
    for (int i = sh.size(); i > d; i--) {
        sh[i] = sh[i - 1];

    }
    sh[d] = num;
    for (int j = 0; j < sh.size(); j++) {

        cout << sh[j] << "\n";
    }

}

//void del() {  //delete by value
//    int h;
//    cin >> h;
//    int del_vec[h];
//    for (int i = 0; i < h; i++) {
//        int d;
//        cin >> d;
//        del_vec[i] = d;
//    }
//    int f;
//    cin >> f;
//    for (int i = 0; i < h; i++) {
//
//        if (del_vec[i] == f) {
//            for (int j = i; j < h - 1; j++) {
//                del_vec[j] = del_vec[j + 1];
//
//            }
//            h--;
//            break;
//        }
//
//    }
//    for (int i = 0; i < h; i++) {
//        cout << del_vec[i] << "\n";
//    }
//}
//void Delete() {//delete by index
//    int h;
//    cin >> h;
//    int del_vec[h];
//    for (int i = 0; i < h; i++) {
//        int d;
//        cin >> d;
//        del_vec[i] = d;
//    }
//
//    int ind;
//    cin >> ind;
//    for (int i = ind; i < h - 1; i++) {
//        del_vec[i] = del_vec[i + 1];
//
//    }
//    h--;
//    for (int i = 0; i < h; i++) {
//        cout << del_vec[i] << "\n";
//    }
//
//
//
//
//
//}

//DELETE//

void del() {  //delete by value
    int h;
    cin >> h;
    vector<int>del_vec(h);
    for (int i = 0; i < h; i++) {
        int d;
        cin >> d;
        del_vec[i] = d;
    }
    int f;
    cin >> f;
    for (int i = 0; i < del_vec.size(); i++) {

        if (del_vec[i] == f) {
            del_vec.erase(del_vec.begin() + i);
            i--;

        }
    }
    for (int i = 0; i < del_vec.size(); i++) {
        cout << del_vec[i] << "\n";
    }
}
void Delete22(vector<int>& s, int sh, int ind) {//delete by index
    s.erase(s.begin() + ind);
    s.resize(sh - 1);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << "\n";
    }
}
//DELETE2//
void Delete() {//delete by index
    int h;
    cin >> h;
    int del_vec[h];
    for (int i = 0; i < h; i++) {
        int d;
        cin >> d;
        del_vec[i] = d;
    }

    int ind;
    cin >> ind;
    for (int i = ind; i < h - 1; i++) {
        del_vec[i] = del_vec[i + 1];

    }
    h--;
    for (int i = 0; i < h; i++) {
        cout << del_vec[i] << "\n";
    }





}





//MERGE//
void mer() {
    int h;
    cin >> h;
    vector<int>first_arr(h);
    for (int i = 0; i < h; i++) {
        int d;
        cin >> d;
        first_arr[i] = d;
    }
    int si;
    cin >> si;
    vector<int>sec_arr(si);
    for (int i = 0; i < si; i++) {
        int r;
        cin >> r;
        sec_arr[i] = r;
    }
    vector<int>final_arr;
    for (int i = 0; i < h; i++) {
        final_arr.push_back(first_arr[i]);
    }
    for (int i = 0; i < si; i++) {
        final_arr.push_back(sec_arr[i]);
    }

    for (int i = 0; i < final_arr.size(); i++) {
        cout << final_arr[i] << "\n";
    }
}

//SEARCH SEQ//

void search() {
    int g;
    cin >> g;
    vector <int>arr(g);
    for (int i = 0; i < g; i++) {
        int s;
        cin >> s;
        arr[i] = s;
    }
    int c;
    cin >> c;
    int x = 0;
    for (int i = 0; i < g; i++) {
        if (arr[i] == c)
        {
            cout << i;
            x++;
            break;
        }
    }
    if (x == 0) {
        cout << "not founded";
    }
}

//SEARCH BINARY//

void s_b() {
    int g;
    cin >> g;
    vector <int>arr(g);
    for (int i = 0; i < g; i++) {
        cin >> arr[i];
    }
    int c;
    cin >> c;
    int s = 0;
    int e = arr.size() - 1;
    int p = 0;
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (arr[m] == c) {
            cout << "found";
            p++;
            break;
        }
        else if (arr[m] < c) {
            s = m + 1;
        }

        else {
            e = m - 1;
        }
    }
    if (p == 0) {
        cout << "not found";
    }
}





int main() {
    //Delete();
    //del();
 /* s_b();*/
  //  search();
  //  trav();
  //  sum();
  //  mer();
  //  del();*/
    /*  reverse();*/
    vector<int>arr = { 10,20,30,50,60,70 };
    ins_tes(arr, 3, 40);
    ins_tes(arr, 7, 9);



    return 0;
}