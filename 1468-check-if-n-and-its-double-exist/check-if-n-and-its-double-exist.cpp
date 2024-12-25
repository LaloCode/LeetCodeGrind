class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> lookup;

        for(int i : arr) 
        {
            if ((lookup.count(i*2)) || (i%2 == 0 && lookup.count(i/2))) 
            {
                return true;
            }

            lookup.insert(i);
        }

        return false;
    }
};