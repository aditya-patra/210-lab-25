#include <iostream>
#include <chrono>
#include <fstream>
#include <vectror>
#include <list>
#include <set>
using namespace std;

int main() {
    string code_lst[20000];
    string curr_code;
    ifstream file("codes.txt");

    int reading[3];
    int sorting[3];
    int inserting[3];
    int deleting[3];
    set<string> set1;
    vector<string> vec1;
    list<string> lst1;

    for(int i = 0; getline(file, curr_code); i++) {
        code_lst[i] = curr_code;
        cout << code_lst[i] << endl;
    }

    // reading test
    for(int i = 0; i < 20000; i++) {
        set1.insert(code_lst[i]);
    }

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/