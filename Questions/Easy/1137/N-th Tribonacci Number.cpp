class Solution {
public:
	int tribonacci(int n) {

		int t = 0;
		int t1 = 0;
		int t2 = 1;
		int res;
		int temp, temp1, temp2;

		if (n == 0) {

			res = 0;
			return res;
		}
		if (n == 1) {

			res = 1;
			return res;
		}
		if (n == 2) {

			t = t1;
			t1 += 1;
			res = t1;
			return res;
		}
		for (int i = 0; i < n - 1 && n != 0; i++) {
			if (n >= 3) {
				temp = t1;
				temp2 = t2;
				t2 = t2 + t1 + t;
				t1 = temp2;
				t = temp;
				res = t2;
			}

		}
		return res;
	}
};