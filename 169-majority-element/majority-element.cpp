class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
    for (auto e : nums) {
        mp[e]++;
    }
    // Find the element with the highest frequency
    int majorityElement;
    int maxFrequency = 0;
    for (const auto& pair : mp) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            majorityElement = pair.first;
        }
    }
    return majorityElement;
}
};