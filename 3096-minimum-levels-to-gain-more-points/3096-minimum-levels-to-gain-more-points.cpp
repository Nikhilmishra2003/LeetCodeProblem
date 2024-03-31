class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        for (int i = 0; i < possible.size(); ++i) {
            if (possible[i] == 0) {
                possible[i] = -1;
            }
        }

        int t_sum = 0;
        for (int num : possible) {
            t_sum += num;
        }

        int answer = 0;
        int curr_score = 0;
        for (int i = 0; i < possible.size() - 1; ++i) {
            curr_score += possible[i];
            if (t_sum - curr_score < curr_score) {
                return i + 1;
            }
        }

        return -1;
    }
};