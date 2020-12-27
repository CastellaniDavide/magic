/*
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

// input data
int N, L;
vector<int> X, E;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N >> L;
    X.resize(N);
    E.resize(N);
    for (int i=0; i<N; i++)
        cin >> X[i];
    for (int i=0; i<N; i++)
        cin >> E[i];

    // insert your code here
    
    for (int i=0; i<L; i++)
        cout << 4 << " "; // print the result
    cout << endl;
    return 0;
}
