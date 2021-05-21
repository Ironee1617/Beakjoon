#include <iostream>
#define SIZE 2000000;

using namespace std;


class Queue {

public:
	int fr;
	int siz;
	int rear;
	int* values;

	Queue() {
		fr = 0;
		rear = 0;
		siz = SIZE;
		values = new int[siz];
	}

	void push(int value)
	{
		values[rear] = value;
		rear++;
	}

	void pop() {
		if (rear == fr) {
			cout << -1 << "\n";
			return;
		}

		cout << values[fr] << "\n";
		fr++;
	}

	void size() {
		cout << rear - fr << "\n";
	}

	void empty() {
		rear == fr ? cout << 1 << "\n" : cout << 0 << "\n";
	}

	void front() {
		if (rear == fr) {
			cout << -1 << "\n";
			return;
		}
		cout << values[fr] << "\n";
	}

	void back() {
		if (rear == fr) {
			cout << -1 << "\n";
			return;
		}
		cout << values[rear - 1] << "\n";
	}
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int input;
	cin >> input;

	string command;

	Queue q = Queue();

	for (int i = 0; i < input; ++i) {
		cin >> command;
		if (command == "push") {
			int a;
			cin >> a;
			q.push(a);
		}
		else if (command == "pop") q.pop();
		else if (command == "size") q.size();
		else if (command == "empty") q.empty();
		else if (command == "front") q.front();
		else if (command == "back") q.back();
	}
}