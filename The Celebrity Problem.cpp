#include<stack>
bool knows(int A, int B);

int findCelebrity(int n) {

stack<int>s; 
//step1; sare elements ko stack mei daldo
for(int i = 0; i<n ; i++){
   s.push(i);
}    
// step2;
while( s.size()>1 ){
    int a = s.top();
    s.pop();
    
    int b = s.top();
    s.pop();
    
  if(knows(a,b)){
      s.push(b);
  }  
  else{
      s.push(a);
  }  
}
   
//step3   check rows for potential celebrity 
 int celeb = s.top();   
 bool checkrow = false; 
 int zerocount = 0;  
 for(int i = 0 ; i<n ; i++){
     if(knows(celeb,i)){
         return -1;
     }
     else{
         zerocount++;
     }
 }  
   if(zerocount == n){
       checkrow = true;
   }
   
// step4 check for columns
 int onecount = 0;
 bool checkcol = false;  
for(int i = 0 ; i<n; i++){
    if( knows(i,celeb)){
         onecount++;
    }  
}
   if(onecount == n-1){
       checkcol = true;
   }
   
if(checkrow == true && checkcol == true){
   return celeb;
}    
else{
    return -1;
}   
   
   
}
