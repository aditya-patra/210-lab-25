#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
using namespace std::chrono;

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
    }

    // reading test
    // set reading
    auto start = high_resolution_clock::now();
    for(int i = 0; i < 20000; i++) {
        set1.insert(code_lst[i]);
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    reading[0] = duration.count();

    // vector reading
    start = high_resolution_clock::now();
    for(int i = 0; i < 20000; i++) {
        vec1.push_back(code_lst[i]);
    }
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    reading[1] = duration.count();

    // list reading
    start = high_resolution_clock::now();
    for(int i = 0; i < 20000; i++) {
        lst1.push_back(code_lst[i]);
    }
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    reading[2] = duration.count();
    cout << reading[0] << endl;
    cout << reading[1] << endl;
    cout << reading[2] << endl;

    //sorting test
    //set sorting
    sorting[0] = -1;

    //vector sorting
    start = high_resolution_clock::now();
    sort(vec1.begin(), vec1.end());
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    sorting[1] = duration.count();



    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/