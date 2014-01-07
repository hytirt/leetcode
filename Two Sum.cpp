class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        vector<int> ret;
        ret.clear();
        vector<pair<int, int> > s;
        s.clear();
        for (int i = 0; i < numbers.size(); i++)
            s.push_back(make_pair(numbers[i], i + 1));
        sort(s.begin(), s.end());
        for (int head = 0, tail = s.size() - 1; head < tail; )
            if (s[head].first + s[tail].first == target)
            {
                ret.push_back(s[head].second);
                ret.push_back(s[tail].second);
                if (ret[0] > ret[1]) swap(ret[0], ret[1]);
                return ret;
            }
            else if (s[head].first + s[tail].first < target)
                head++;
            else tail--;
    }
};


//Runtime: 24 ms
