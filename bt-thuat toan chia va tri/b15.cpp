#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		deque<int> st;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; ++i)
		{
			while (st.size() && a[st.back()] <= a[i])
				st.pop_back();
			st.push_back(i);
			if (st.front() + k <= i)
				st.pop_front();
			if (i >= k - 1)
				cout << a[st.front()] << " ";
		}
		cout << endl;
	}
}
