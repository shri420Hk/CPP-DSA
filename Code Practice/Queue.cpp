#include <iostream>
#include <vector>
#include <queue>

class MultiQueue {
private:
    int N;  // Number of queues
    std::vector<std::queue<int>> queues;

public:
    MultiQueue(int n) : N(n), queues(n) {}

    bool enqueue(int queueNum, int element) {
        if (queueNum < 0 || queueNum >= N) {
            std::cout << "Invalid queue number." << std::endl;
            return false;
        }

        queues[queueNum].push(element);
        std::cout << "Enqueued " << element << " into Queue " << queueNum << std::endl;
        return true;
    }

    int dequeue(int queueNum) {
        if (queueNum < 0 || queueNum >= N) {
            std::cout << "Invalid queue number." << std::endl;
            return -1;
        }

        if (queues[queueNum].empty()) {
            std::cout << "Queue " << queueNum << " is empty. Cannot dequeue." << std::endl;
            return -1;
        }

        int element = queues[queueNum].front();
        queues[queueNum].pop();
        std::cout << "Dequeued " << element << " from Queue " << queueNum << std::endl;
        return element;
    }
};

int main() {
    int N;
    std::cout << "Enter the number of queues (N): ";
    std::cin >> N;

    MultiQueue multiQueue(N);

    int queries;
    std::cout << "Enter the number of queries: ";
    std::cin >> queries;

    for (int i = 0; i < queries; ++i) {
        int type, x, n;
        std::cout << "Enter query type (1 or 2): ";
        std::cin >> type;

        if (type == 1) {
            std::cout << "Enter element to enqueue and queue number: ";
            std::cin >> x >> n;
            multiQueue.enqueue(n, x);
        } else if (type == 2) {
            std::cout << "Enter queue number to dequeue: ";
            std::cin >> n;
            multiQueue.dequeue(n);
        } else {
            std::cout << "Invalid query type. Enter 1 or 2." << std::endl;
            --i;  // Decrement i to repeat the same iteration
        }
    }

    return 0;
}
