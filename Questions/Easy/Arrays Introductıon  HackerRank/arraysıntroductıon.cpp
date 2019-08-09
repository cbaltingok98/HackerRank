#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int num, enter, count;
	int hold;
	cin >> num;
	int nums[num];

	while (cin >> enter && count < num) {
		nums[count] = enter;
		count++;
	}

	for (int i = num - 1, j = 0; j < num / 2 && i >= num / 2; i--, j++) {
		hold = nums[i];
		nums[i] = nums[j];
		nums[j] = hold;
	}
	for (int i = 0; i < num; i++) {
		cout << nums[i] << " ";
	}
	return 0;
}
