#include <iostream>
#include <queue>

class CustomQueue {
private:
    std::queue<int> elements;

public:
    // Enqueue an element into the queue
    void enqueue(int value) {
        elements.push(value);
    }

    // Dequeue an element from the queue
    void dequeue() {
        if (!elements.empty()) {
            elements.pop();
        }
    }

    // Overloaded '=' operator to check equality of two queues
    bool operator==(const CustomQueue& other) const {
        return this->elements == other.elements;
    }

    // Display the elements in the queue
    void display() const {
        std::queue<int> temp = elements;
        while (!temp.empty()) {
            std::cout << temp.front() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create two queues
    CustomQueue queue1, queue2;

    // Enqueue elements into the queues
    queue1.enqueue(1);
    queue1.enqueue(2);
    queue1.enqueue(3);

    queue2.enqueue(1);
    queue2.enqueue(2);
    queue2.enqueue(3);

    // Display the queues
    std::cout << "Queue 1: ";
    queue1.display();

    std::cout << "Queue 2: ";
    queue2.display();

    // Check whether the queues are equal
    if (queue1 == queue2) {
        std::cout << "Queues are equal." << std::endl;
    } else {
        std::cout << "Queues are not equal." << std::endl;
    }

    return 0;
}
