/*#include<iostream>
#include<string>
using namespace std;
int countString(string& str1, string& str2) {
	if (str2.size() > str1.size())    return 0;
	if (str1 == str2)    return 1;
	if (str2.size() == 0)    return 0;

	int count = 0;
	for (int i = 0; i < str1.size(); ++i) {
		int flag = i;
		if (str1[i] == str2[0]) {
			bool tmp = true;
			for (int j = 0; j < str2.size(); ++j) {
				if (i >= str1.size() || str1[i] != str2[j]) {
					tmp = false;
					break;
				}
				++i;
			}
			if (tmp == true)    ++count;
		}
		i = flag;
	}
	return count;
}
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int ret = countString(str1, str2);
	cout << ret << endl;
	return 0;
}*/

/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minCount(vector<int>& arr, int n) {
	int max = 0;
	for (int i = 0; i < n; ++i) {
		max += arr[i];
	}
	if (max % n != 0)    return -1;

	int count = 0, mul = max / n;
	sort(arr.begin(), arr.end());
	for (int i = n - 1; i >= 0; --i) {
		if (arr[i] > mul) {
			int sub = arr[i] - mul;
			int tmp = sub % 2;
			sub = sub / 2 + tmp;
			count += sub;
		}
	}
	return count;
}
int main()
{
	int n, x;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> x;
		arr[i] = x;
	}
	int ret = minCount(arr, n);
	cout << ret << endl;
	return 0;
}*/