#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int x) : val(x), next(NULL) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList(const vector<int>& values) {
        head = NULL;
        Node* tail = NULL;

        for (int v = 0; v < values.size(); v++) {
            Node* n = new Node(values[v]); 
            if (!head) {
                head = n;
                tail = n;
            } else {
                tail->next = n;
                tail = n;
            }
        }
    }

    LinkedList(const LinkedList& other) {
        head = NULL;
        if (!other.head) return;

        head = new Node(other.head->val);
        Node* currNew = head;
        Node* currOld = other.head->next;

        while (currOld) {
            currNew->next = new Node(currOld->val);
            currNew = currNew->next;
            currOld = currOld->next;
        }
    }

    ~LinkedList() {
        Node* curr = head;
        while (curr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }
};
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    LinkedList list1(v);
    LinkedList list2 = list1;

    list2.head->val = 99;

    cout << list1.head->val;

    return 0;
}


