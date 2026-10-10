
#include <iostream>
using namespace std;

class Node {
public:
    Node() = default;
    Node(int data);

    void display();
    void setData(int data);
    void setNext(int next);
    int getNext();
    int getData();

private:
    int data{0};
    int next{-1};
};

Node::Node(int data) {
    this->data = data;
    next = -1;
}

void Node::display() {
    cout << "data = " << data
         << ", next = " << next << endl;
}

void Node::setData(int data) {
    this->data = data;
}

void Node::setNext(int next) {
    this->next = next;
}

int Node::getNext() {
    return next;
}

int Node::getData() {
    return data;
}

class ArrayList {
public:
    ArrayList() = default;

    ArrayList(int c) {
        capacity = c;
        free = 0;
        head = -1;
        size = 0;

        ptr = new Node*[capacity];
        init();
    }

    void init() {
        for (int i = 0; i < capacity; ++i) {
            ptr[i] = new Node();
        }
    }

    void display() {
        cout << "Ptr = " << ptr
             << ", Capacity = " << capacity
             << ", Size = " << size
             << ", Free = " << free
             << ", Head = " << head << endl;

        for (int i = 0; i < capacity; ++i) {
            cout << i << " . ";
            ptr[i]->display();
        }

        cout << endl;
    }

    void insert(int data) {
        if (size >= capacity) {
            cout << "ArrayList is full!" << endl;
            return;
        }

        if (head == -1) {
            ptr[free]->setData(data);
            head = free;
            free++;
            size++;
        }
        else {
            int temp = head;

            while (ptr[temp]->getNext() != -1) {
                temp = ptr[temp]->getNext();
            }

            ptr[free]->setData(data);
            ptr[temp]->setNext(free);

            free++;
            size++;
        }
    }

    ~ArrayList() {
        if (ptr != nullptr) {
            for (int i = 0; i < capacity; ++i) {
                delete ptr[i];
            }

            delete[] ptr;
        }
    }

private:
    int head{-1};
    int free{0};
    int size{0};
    int capacity{10};
    Node** ptr{nullptr};
};

int main() {
    ArrayList arrayList(5);

    arrayList.display();

    arrayList.insert(4);
    arrayList.display();

    arrayList.insert(7);
    arrayList.display();

    arrayList.insert(10);
    arrayList.display();

    arrayList.insert(12);
    arrayList.display();

    return 0;
}
