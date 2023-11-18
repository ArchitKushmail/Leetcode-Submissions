class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26) return false;
			unordered_map<char, int> ans;
			for (int i = 0; i < sentence.length(); i++)
			{
				ans[sentence[i]]++;
			}

			if (ans.size() == 26)
			{
				return true;
			}

			return false;
    }
};