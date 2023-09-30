class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       //initialize picktime 
        int pickM=0,pickG=0,pickP=0;
        //initialize travel time
        int travelM=0,travelG=0,travelP=0;
        //count travel time from 0 to last index
        int lastM=0,lastG=0,lastP=0;

        for(int i=0;i<garbage.size();i++){
            string str =garbage[i];
            for (auto ch: str){
                if(ch=='M'){
                    pickM++;
                    lastM=i;
                }
                if(ch=='G'){
                    pickG++;
                    lastG = i;
                }
                if(ch=='P'){
                    pickP++;
                    lastP=i;
                }
            }
        }//calculate travel time
        for(int i=0;i<lastM;i++){
            travelM += travel[i];
        }
        for(int i=0;i<lastG;i++){
            travelG += travel[i];
        }
        for(int i=0;i<lastP;i++){
            travelP += travel[i];
        }
        //final ans
        int ans=(pickM+travelM)+(pickG+travelG)+(pickP+travelP);
        return ans;
    }
};
