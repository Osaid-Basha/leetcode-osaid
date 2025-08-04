class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxValue=candies[0];
        for(int i=0;i<candies.size();i++){
            if(candies[i]>maxValue)
                maxValue=candies[i];
        }
        
        
       vector<bool> result1;
       
        for(int i=0;i<candies.size();i++)
        {
            if( candies[i]+extraCandies <maxValue){
                result1.push_back(false);
            }
            else{
             result1.push_back(true);
             }
        }
        
        return result1;

    }
};