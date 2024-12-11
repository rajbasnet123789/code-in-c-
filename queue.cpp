#include<iostream>
using namespace std;

class queue {
    private:
    int *arr;
    int capacity;
    int frontIndex;
    int rearIndex;

    public:
    queue(int n) {
        arr = new int[n]; // Corrected array allocation
        capacity = n;
        frontIndex = -1;
        rearIndex = -1;
    }

    void push(int x) {
        if (rearIndex == capacity - 1) {
            cout << "queue is full" << endl;
            return;
        }
        if (frontIndex == -1) {
            frontIndex = 0;
        }
        rearIndex++;
        arr[rearIndex] = x;
    }

    void pop() {
        if (frontIndex == -1) {
            cout << "queue is empty" << endl;
            return;
        }
        frontIndex++;
        if (frontIndex > rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        }
    }

    int getFront() {
        if (frontIndex != -1) {
            return arr[frontIndex];
        }
        return -1; // Return a default value if the queue is empty
    }

    int getRear() {
        if (rearIndex != -1) {
            return arr[rearIndex];
        }
        return -1; // Return a default value if the queue is empty
    }

    bool isempty() {
        return frontIndex == -1;
    }
};

int main() {
    queue q(5);
    q.push(89);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;
    q.pop();
    cout << "Queue empty: " << (q.isempty() ? "true" : "false") << endl;
}
