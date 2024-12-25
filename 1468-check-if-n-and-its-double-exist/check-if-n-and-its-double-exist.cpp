class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<double> lookup;

        for(int i : arr) 
        {
            if ((lookup.find(i*2) != lookup.end()) || lookup.find(double(i)/2.0) != lookup.end()) 
            {
                printf("%d", i);
                return true;
            }

            lookup.insert(double(i));
        }

        return false;
    }
};