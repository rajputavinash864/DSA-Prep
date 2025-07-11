#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

// -----------------------------
// Check for Duplicates in Array
// -----------------------------
class HasDuplicateSolution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

// -----------------------------
// Check if Two Strings are Anagrams
// -----------------------------
class IsAnagramSolution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

// -----------------------------
// Two Sum (Brute Force)
// -----------------------------
class TwoSumSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// -----------------------------
// Check if String is Palindrome (Ignoring Non-Alphanumeric)
// -----------------------------
class IsPalindromeSolution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            while (i < j && !isalnum(s[i])) i++;
            while (i < j && !isalnum(s[j])) j--;
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

/*
You can test each individually in your main if needed, for example:

int main() {
    HasDuplicateSolution dupCheck;
    vector<int> nums = {1, 2, 3, 4, 1};
    cout << dupCheck.hasDuplicate(nums) << endl; // Output: 1 (true)

    IsAnagramSolution anaCheck;
    cout << anaCheck.isAnagram("listen", "silent") << endl; // Output: 1 (true)

    TwoSumSolution twoSumCheck;
    vector<int> result = twoSumCheck.twoSum(nums, 5);
    for (int idx : result) cout << idx << " "; // Output: indices summing to 5

    IsPalindromeSolution palCheck;
    cout << palCheck.isPalindrome("A man, a plan, a canal: Panama") << endl; // Output: 1 (true)
}

Remove main during LeetCode submissions.
*/






