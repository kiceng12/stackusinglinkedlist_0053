#include <iostream>

using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

// stack class
class stack {
private:
	Node* top; // Pointer to the top node of the stack

public:
	stack() {
		top = NULL; // Intialize the stack with a null top pointer
	}

	// Push operation: Insert an element onto the top of the stack
	int push(int value) {
		Node* newNode = new Node(); // 1. Allocate memory for the new node
		newNode->data = value; // 2. assign value
		newNode->next = top; // 3. Set the next pointer of the new node to the current top node
		top = newNode; // 4.Update the top pointer to the new node
		cout << "Push value: " << value << endl;
		return value;
	}

	// Pop operation: Remove the topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "Popped value : " << top->data << endl;
		top = top->next; // update the top pointer to the next node

	}

	// peek / top operation : retrive the value of the topmost element without removing it
	void peek() {
		if (top == NULL) {
			cout << "list is empty." << endl;
		}
		else {
			Node* current = top;
			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}// return the value of the top node
	}

	//IsEmpty operation: check if the top node
	bool isEmpty() {
		return top == NULL; //return true if top pointer is null , indicating an empty stack
	}

};

int main() {
	Stack stack;

	int choice = 0;
	int value;

	while (choice != 5) {
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Peek\n";
		cout << "4. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter the value to push: ";
			cin >> value;
			stack.push(value); // push the entered value onto the stack
			break;
		}


	}
}

