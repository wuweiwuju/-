#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector<int> res;
	queue<int> arr;
	cin >> n;
	while (n--) {
		int m = 0;
		cin >> m;
		vector<string> str(m);
		getline(cin, str[0]);
		for (auto& e : str)
			getline(cin, e);

		for (int i = 0; i < m; ++i) {
			if (str[i] == "TOP") {
				if (arr.empty())    res.push_back(-1);
				else    res.push_back(arr.front());
			}
			else if (str[i] == "POP") {
				if (arr.empty())    res.push_back(-1);
				else    arr.pop();
			}
			else if (str[i] == "SIZE") {
				res.push_back(arr.size());
			}
			else if (str[i] == "CLEAR") {
				res.clear();
			}
			else {
				string temp = str[i];
				string tmp;
				int count = 0;
				for (int i = 0; i < temp.size(); ++i) {
					if (temp[i] >= '0' && temp[i] <= '9') {
						tmp += temp[i];
					}
				}
				arr.push(atoi(tmp.c_str()));
				tmp.clear();
			}
		}
		str.clear();
	}
	for (auto e : res)    cout << e << endl;

	return 0;
}

/*#include<iostream>
using namespace std;

int main()
{
	int q;
	cin >> q;
	while (q--) {
		long long x, k;
		cin >> x >> k;
		long long flag = 0;
		long long temp = x;
		while (temp) {
			flag++;
			temp /= 2;
		}
		if (flag <= k)    cout << -1 << endl;
		else {
			while (k != flag) {
				x /= 2;
				--flag;
			}
			cout << x << endl;
		}
	}
	return 0;
}*/