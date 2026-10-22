class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m){
            return false;
        }
        int low=0;
        int count1[26]={0};
        int count2[26]={0};

        for(int i=0;i<n;i++){
             count1[s1[i] - 'a']++;
}
        for(int high=0;high<m;high++){
             count2[s2[high] - 'a']++;
        
        if(high-low+1>n){
            count2[s2[low] - 'a']--;
            low++;
        }
        if( high - low +1==n){
            if(equal(count1, count1+26, count2)){
            return true;
        }
     }
    }
      return false;  
    }
};