class Solution {
 public:
  bool isIsomorphic(string s, string t) {
    vector<int> fist_s(128);
    vector<int> sec_t(128);

    for (int i = 0; i < s.length(); ++i) {
      if (fist_s[s[i]] != sec_t[t[i]])
        return false;
      fist_s[s[i]] = i + 1;
      sec_t[t[i]] = i + 1;
    }

    return true;
  }
};