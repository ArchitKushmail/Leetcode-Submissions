class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
  stack<int> st;
  heights.push_back(0); // To handle edge cases

  for (int i = 0; i < heights.size(); ++i) {
    while (!st.empty() && heights[i] < heights[st.top()]) {
      int top = st.top();
      st.pop();
      int width = st.empty() ? i : i - st.top() - 1;
      maxArea = max(maxArea, heights[top] * width);
    }
    st.push(i);
  }

  return maxArea;
    }
};