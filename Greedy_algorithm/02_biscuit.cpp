using namespace std;
#include<iostream>
#include<vector>
#include <algorithm>

int FeedChildren(vector<int>& g, vector<int>& s) {
	int num = 0;
	sort(g.begin(), g.end());
	sort(s.begin(), s.end());
	int index = s.size() - 1;
	for (int i = g.size() - 1; i >= 0; i--) {
		if (s[index] >= g[i] && index >= 0) {
			num += 1;
			index--;
		}
	}
	return num;
}

int main() {
	vector<int> g = { 1, 2, 7, 10 };
	vector<int> s = { 1, 3, 5, 9, 10 };
	cout << FeedChildren(g, s);
	return 0;
}