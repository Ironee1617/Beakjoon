#include <iostream>
#include <math.h>

using namespace std;

int result[1000000] = { 0, };

int main()
{
	int M = 0, N = 0;
	int count = 0;
	result[1] = 1;
	cin >> M >> N;

	if (M > N) {
		int temp = M;
		M = N;
		N = temp;
	}

	for (int i = 2; i <= sqrt(N); ++i) {
		if (result[i] == 1)
			continue;
		for (int j = i + i; j <= N; j += i)
			result[j] = 1;
	}

	for (int i = M; i <= N; ++i) {
		if (result[i] == 0)
			printf("%d\n", i);
	}
}