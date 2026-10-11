#include <iostream>
using namespace std;

class Node {
public:
    void Node() {
     default;
    }
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
            ptr[i]->setNext(i + 1 < capacity ? i + 1 : -1);
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

    void displayList() {
        cout << "Active list: ";
        if (head == -1) {
            cout << "(empty) ";
        }
        for (int cur = head; cur != -1; cur = ptr[cur]->getNext()) {
            cout << ptr[cur]->getData() << " -> ";
        }
        cout << "NULL" << endl;
    }

    void displayFree() {
        cout << "Free list (slot indices): ";
        for (int cur = free; cur != -1; cur = ptr[cur]->getNext()) {
            cout << cur << " -> ";
        }
        cout << "NULL";
        if (free == -1) {
            cout << "   [array is full]";
        }
        cout << endl;
    }

    bool insert(int data, int pos) {
        if (pos < 0 || pos > size) {
            cout << "Invalid position " << pos
                 << " (valid: 0 to " << size << ")." << endl;
            return false;
        }

        int idx = allocate();
        if (idx == -1) {
            cout << "ArrayList is full! Cannot insert " << data << "." << endl;
            return false;
        }

        ptr[idx]->setData(data);

        if (pos == 0) {
            ptr[idx]->setNext(head);
            head = idx;
        }
        else {
            int prev = head;
            for (int i = 0; i < pos - 1; ++i) {
                prev = ptr[prev]->getNext();
            }
            ptr[idx]->setNext(ptr[prev]->getNext());
            ptr[prev]->setNext(idx);
        }

        size++;
        displayList();
        return true;
    }

    bool insertAtBeginning(int data) {
        return insert(data, 0);
    }

    bool insertAtEnd(int data) {
        return insert(data, size);
    }

    int search(int data) {
        for (int cur = head; cur != -1; cur = ptr[cur]->getNext()) {
            if (ptr[cur]->getData() == data) {
                return cur;
            }
        }
        return -1;
    }

    bool update(int oldData, int newData) {
        int idx = search(oldData);
        if (idx == -1) {
            cout << "Value " << oldData << " not found. Nothing updated." << endl;
            return false;
        }

        ptr[idx]->setData(newData);
        cout << "Updated " << oldData << " to " << newData << "." << endl;
        displayList();
        return true;
    }

    bool remove(int pos) {
        if (head == -1) {
            cout << "List is empty. Nothing to delete." << endl;
            return false;
        }
        if (pos < 0 || pos >= size) {
            cout << "Invalid position " << pos
                 << " (valid: 0 to " << size - 1 << ")." << endl;
            return false;
        }

        int victim;
        if (pos == 0) {
            victim = head;
            head = ptr[head]->getNext();
        }
        else {
            int prev = head;
            for (int i = 0; i < pos - 1; ++i) {
                prev = ptr[prev]->getNext();
            }
            victim = ptr[prev]->getNext();
            ptr[prev]->setNext(ptr[victim]->getNext());
        }

        cout << "Deleted " << ptr[victim]->getData()
             << " (slot " << victim << " returned to free list)." << endl;

        release(victim);
        size--;
        displayList();
        return true;
    }

    bool removeFromBeginning() {
        return remove(0);
    }

    bool removeFromEnd() {
        return remove(size - 1);
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
    int allocate() {
        if (free == -1) {
            return -1;
        }
        int idx = free;
        free = ptr[idx]->getNext();
        ptr[idx]->setNext(-1);
        return idx;
    }

    void release(int idx) {
        ptr[idx]->setData(0);
        ptr[idx]->setNext(free);
        free = idx;
    }

    int head{-1};
    int free{0};
    int size{0};
    int capacity{10};
    Node** ptr{nullptr};
};

int readInt(const char* prompt) {
    int x;
    cout << prompt;
    while (!(cin >> x)) {
        if (cin.eof()) {
            exit(0);
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. " << prompt;
    }
    return x;
}

int main() {
    int cap = readInt("Enter array capacity (e.g. 5): ");
    if (cap < 1) {
        cap = 5;
    }
    ArrayList arrayList(cap);

    int choice;
    do {
        cout << "\n===== Array-Based Linked List =====\n"
             << " 1. Insert at the beginning\n"
             << " 2. Insert at the end\n"
             << " 3. Insert at a specified position\n"
             << " 4. Search for a value\n"
             << " 5. Update a value\n"
             << " 6. Delete from the beginning\n"
             << " 7. Delete from the end\n"
             << " 8. Delete from a specified position\n"
             << " 9. Display the linked list\n"
             << "10. Display the free list\n"
             << "11. Exit\n";
        choice = readInt("Choice: ");

        switch (choice) {
        case 1:
            arrayList.insertAtBeginning(readInt("Value: "));
            break;
        case 2:
            arrayList.insertAtEnd(readInt("Value: "));
            break;
        case 3: {
            int v = readInt("Value: ");
            int p = readInt("Position (zero-based): ");
            arrayList.insert(v, p);
            break;
        }
        case 4: {
            int v = readInt("Value to search: ");
            int idx = arrayList.search(v);
            if (idx == -1) {
                cout << v << " not found (-1)." << endl;
            }
            else {
                cout << v << " found in array slot " << idx << "." << endl;
            }
            break;
        }
        case 5: {
            int o = readInt("Old value: ");
            int n = readInt("New value: ");
            arrayList.update(o, n);
            break;
        }
        case 6:
            arrayList.removeFromBeginning();
            break;
        case 7:
            arrayList.removeFromEnd();
            break;
        case 8:
            arrayList.remove(readInt("Position (zero-based): "));
            break;
        case 9:
            arrayList.displayList();
            break;
        case 10:
            arrayList.displayFree();
            break;
        case 11:
            cout << "Goodbye." << endl;
            break;
        default:
            cout << "Invalid choice. Enter 1-11." << endl;
        }
    } while (choice != 11);

    return 0;
}F