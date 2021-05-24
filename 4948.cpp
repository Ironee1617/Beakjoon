#include <iostream>
#define MAX 246912
using namespace std;

int result[246912] = { 0, };

int main()
{
	int A = 0, count = 0;
	result[1] = 1;



	for (int i = 2; i <= MAX; ++i) {
		if (result[i] == 1)
			continue;
		for (int j = i + i; j <= MAX; j += i)
			result[j] = 1;
	}

	while (true) {
		cin >> A;
		if (!A)
			break;
		count = 0;

		for (int i = A + 1; i <= 2 * A; ++i) {
			if (result[i] == 0)
				count++;
		}

		printf("%d\n", count);
	}
}