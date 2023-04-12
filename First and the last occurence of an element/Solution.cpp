 class Solution {
public:
    vector<int>searchRange(vector<int>& nums, int target) {
         vector<int>ans;
    int firstindex=firstocc(nums,target);
    int lastindex=lastocc(nums,target);
    ans.push_back(firstindex);
    ans.push_back(lastindex);
    return ans;}
 int firstocc(vector<int>& arr,int k)
 {int l=0;
        int h=arr.size()-1;
       int p=-1;
       
       int mid=0;
        while (l<=h)
          {  mid=(l+h)/2;
            if(arr[mid]==k)
              {  p=mid;
                h=mid-1 ; /*first occurance*/
              }
            else if(arr[mid]<k)
                l=mid+1;
            else
                h=mid-1;}
            
        return p;
}
 int lastocc(vector<int>& arr,int k)
 {     int l=0;
        int h=arr.size()-1;
       int  la=-1;
        int mid=0;
        while (l<=h)
           { mid=(l+h)/2;
            if(arr[mid]==k)
                {la=mid;
                l=mid+1; /*last occurance*/
           }
            else if (arr[mid]<k)
                l=mid+1;
            else
                h=mid-1;}
        return la;
    }
};
