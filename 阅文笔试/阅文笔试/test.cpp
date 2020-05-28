#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/*int main()
{
	vector<int> arr;
	int n = 0;
	while (cin >> n) {
		arr.push_back(n);
	}

	auto it = arr.begin();
	while (it != arr.end()) {
		if (*it == 10) {
			it = arr.erase(it);
		}
		else {
			++it;
		}
	}

	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << " ";

	return 0;
}*/

/*#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main()
{
	vector<int> arr;
	int n = 0;
	while (cin >> n) {
		arr.push_back(n);
	}

	int count[256] = { 0 };
	for (auto e : arr)
		count[e]++;
	int flag = 0;
	vector<int> tmp;
	for (int i = 0; i < arr.size(); ++i)
	{
		if (count[arr[i]] == 1 && flag == 0)
			tmp.push_back(arr[i]);

		if (count[arr[i]] > 1)
		{
			tmp.push_back(arr[i]);
			flag = 1;
			count[arr[i]] = 0;
		}

		flag = 0;
	}
	for (auto e : tmp)
		cout << e << " ";

	return 0;
}*/

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0;
	vector<int> arr;
	while(cin >> n){
		int m = n;
		while(m--){
			cin >> n;
			arr.push_back(n);
		}
	}
	sort(arr.begin(), arr.end());

	for(auto e : arr)
		cout << e << " ";

	return 0;
}
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Point {
	int x;
	int y;
	bool operator < (const Point d) const {
		return x < d.x;      //从小到大排序
	}
};
int main()
{
	int x = 0;
	int y = 0;
	vector<Point> vec;
	cin >> x >> y;
	Point p;
	p.x = x;
	p.y = y;
	vec.push_back(p);

	cin >> x >> y;
	p.x = x;
	p.y = y;
	vec.push_back(p);

	cin >> x >> y;
	p.x = x;
	p.y = y;
	vec.push_back(p);
	

	sort(vec.begin(), vec.end());
	for (auto e : vec)
		cout << e.x << " " << e.y << endl;
}