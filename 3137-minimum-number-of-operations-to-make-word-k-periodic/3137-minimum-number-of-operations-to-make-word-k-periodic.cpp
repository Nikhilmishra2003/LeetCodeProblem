class Solution { 
public: 
    int minimumOperationsToMakeKPeriodic(string word, int k) { 
        int n = word.size(); 
        unordered_map<string, int> frMap; 
 
        for (int i = 0; i < n - k + 1; i += k) { 
            frMap[word.substr(i, k)]++; 
        } 
         
        int maxFreq = 0; 
        for (const auto& pair : frMap) { 
            if (pair.second > maxFreq) { 
                maxFreq = pair.second; 
            } 
        } 
 
        return n / k - maxFreq; 
    } 
};