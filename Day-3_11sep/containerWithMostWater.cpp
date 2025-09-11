class Solution
{
public:
        int maxArea(vector<int> &height)
        {
                int area = INT_MIN;
                int l = 0, h = height.size() - 1;
                while (l < h)
                {
                        area = max(area, min(height[h], height[l]) * (h - l));
                        if (height[l] > height[h])
                                h--;
                        else
                                l++;
                }

                return area;
        }
};