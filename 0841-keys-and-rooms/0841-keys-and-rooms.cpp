class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
     int length=rooms.size();
     vector<bool> ar(length,false);
     queue<int> check;
     check.push(0);
     ar[0]=true;

     while(!check.empty()){
        int temp=check.front();
         check.pop();

            for(int i=0;i<rooms[temp].size();i++){
            if(!ar[rooms[temp][i]]){
             ar[rooms[temp][i]]=true;   
            check.push(rooms[temp][i]);
            }
        }
     }
     for(int i=0;i<ar.size();i++){
        if(ar[i]==false)
        return false;
     }
     return true;
    }
};