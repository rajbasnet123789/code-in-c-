#include <iostream>
using namespace std;

void toh(int n, char from, char to, char aux) {
    if (n == 0) {
        return;
    }
    toh(n - 1, from, aux, to);
    cout << "MOVE DISK " << n << " " << from << " to " << to << endl; // Desired output format
    toh(n - 1, aux, from, to);
}

int main() {
    int n;
    cout << "Enter the number of disks: "; // Prompt for user input
    cin >> n;
    toh(n, 'A', 'C', 'B'); // Specify the order of moves
    return 0;
}
