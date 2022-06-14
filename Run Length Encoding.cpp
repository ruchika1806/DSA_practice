string encode(string s)
{     
  //Your code here
  int count=1;
  string ans="";
  for(int i=0;i<s.size();i++){
      if(s[i+1]!=s[i]){
          ans.push_back(s[i]);
          ans.push_back(char(count+'0'));
          if(i+1==s.size());
          count=1;
      }
      else{
          count++;
      }
  }
  return ans;
}
