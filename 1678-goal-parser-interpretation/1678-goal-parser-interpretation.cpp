class Solution {
public:
    string interpret(string command) {
         string s="";
         string temp="";
         int i=0;
          while(i<=command.size()){
            if(temp=="G"){
               s+="G";
                temp="";
            }  
            else if(temp=="()"){
                s+="o";
                temp="";
            }
            else if(temp=="(al)"){
                s+="al";
                temp="";
            }
            else{
                temp+=command[i];
                
                i++;
            }
          }
          return s;
    }
};
