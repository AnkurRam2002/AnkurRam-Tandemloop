#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, value;
    vector<int> numbers;

    map<int, int> multiple;
    for (int i = 1; i <= 9; i++) {
        multiple[i] = 0;
    }

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    for (int i = 1; i <= 9; i++) {
        for (int num : numbers) {
            if (num % i == 0) {
                multiple[i]++;
            }
        }
    }

    cout << "{ ";
    for (int i = 1; i <= 9; i++) {
        cout << i << ":" << multiple[i];
        if (i != 9) cout << ", ";
    }
    cout << " }" << endl;

    return 0;
}
