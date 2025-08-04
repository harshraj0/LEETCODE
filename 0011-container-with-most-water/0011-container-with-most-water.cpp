class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j =i+1;j<n;j++)
        //     {
        //         int mini=min(height[i],height[j]);
        //         int tarea=mini*(j-i);
        //         area=max(area,tarea);

                
        //     }
            
        // }
        // return area;
        //new approach
        int i=0,j=n-1;
        while(i<j)
        {
            int h=min(height[i],height[j]);
            int tarea=h*(j-i);
            area=max(area,tarea);
            if(height[i]>height[j])
            j--;
            else if(height[i]<=height[j])
            i++;
        }
        
        return area;
    }
};