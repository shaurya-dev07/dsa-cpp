class Solution {
  public:
    vector<string> generateBinary(int n) {
        
        vector<string> ans;
        queue <string> q;
        q.push("1");
        
        while(n--){
            string s1 = q.front();
            q.pop();
            ans.push_back(s1);
            
            string s2 = s1;
            
            q.push(s1.append("0"));
            q.push(s2.append("1"));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna