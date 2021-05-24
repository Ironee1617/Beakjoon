#include <iostream>
#include <queue>
using namespace std;

bool visit[1001];
int graph[1001][1001];

void DFS(int start, int vertex) {
	visit[start] = true;
	cout << start << " ";

	for (int i = 1; i <= vertex; ++i) {
		if (visit[i] == false && graph[start][i] == 1) {
			DFS(i, vertex);
		}
	}
}

void BFS(int start, int vertex) {
	queue<int> q;
	q.push(start);
	visit[start] = true;

	while (!q.empty()) {
		int a = q.front();
		cout << a << " ";
		q.pop();

		for (int i = 1; i <= vertex; ++i) {
			if (visit[i] == false && graph[a][i] == 1) {
				visit[i] = true;
				q.push(i);
			}
		}
	}
}

int main() {
	int vertex, edge, start;
	cin >> vertex >> edge >> start;

	int a, b;
	for (int i = 0; i < edge; ++i) {
		cin >> a >> b;

		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	DFS(start, vertex);
	for (int i = 1; i <= vertex; ++i) visit[i] = false;
	cout << endl;
	BFS(start, vertex);
}