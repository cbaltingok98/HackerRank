#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
	int difference = 0;
	int primary = 0;
	int secondary = 0;
	int j = arr.size() - 1;
	for (int i = 0; i < arr.size() && j >= 0; i++, j--) {
		secondary += arr.at(i).at(j);
	}
	for (int i = 0; i < arr.size(); i++) {
		primary += arr.at(i).at(i);
	}
	if (primary > secondary) {
		difference = primary - secondary;
	}
	else if (secondary > primary) {
		difference = secondary - primary;
	}
	else {
		difference = 0;
	}
	return difference;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<vector<int>> arr(n);
	for (int i = 0; i < n; i++) {
		arr[i].resize(n);

		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = diagonalDifference(arr);

	fout << result << "\n";

	fout.close();

	return 0;
}
