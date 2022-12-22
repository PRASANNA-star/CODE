class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, int> map;
        std::vector<vector<string>> res;

        for (const auto &s: strs) {
            std::string sorted = s;
            std::sort(sorted.begin(), sorted.end());

            if (map.count(sorted)) {
                res[map[sorted]].push_back(s);
            } else {
                res.push_back({s});
                map[sorted] = res.size() - 1;
            }
        }

        return res;
    }
};
