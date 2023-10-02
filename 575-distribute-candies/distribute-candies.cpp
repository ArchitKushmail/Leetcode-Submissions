class Solution
{
	public:
		int distributeCandies(vector<int> &candyType)
		{
			set<int> st;
			int n = candyType.size();
			for (int i = 0; i < n; i++)
			{
				st.insert(candyType[i]);
			}

			int a = n / 2;
			if (st.size() == a)
			{
				return a;
			}
			else if (st.size() < a)
			{
				return st.size();
			}
			else
			{
				return a;
			}

			return -1;
		}
};
