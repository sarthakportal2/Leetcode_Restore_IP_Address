class Solution {
public:
void util(string s,int indx,int dot,string str,vector<string> &op){
    //min runtime(0 ms.) T(C(N)==O(N)) and S(C(N)==O(N)) as it requires non contigous memeory allocation iteratively 
    if (dot>4)return;//printing ip adrresses's more than 4 dots 
    if(indx==s.length()){//initlaizing Valid Ip address's length
        if(dot==4){op.push_back(str.substr(0,str.size()-1));}return;}///printing Inserted Valid Ip address
        for(int j=indx;j<min(indx+3,(int)s.size());j++){//Iterating ip address's  min indx val
            if(stoi(s.substr(indx,j-indx+1))<256 && (indx==j || s[indx]!='0'))util(s,j+1,dot+1,str+s.substr(indx,j-indx+1)+".",op);}}//Ip Address's last substring val. append

    vector<string> restoreIpAddresses(string s) {//RestoreIpAddress vector declare
        vector<string>op;//output Vector Declare
        if(s.length()>12)return op;//Printing Output
        util(s,0,0,"",op);//Initalizing Ip Addrress Utility function 
        return op;}};//Printing Output 
