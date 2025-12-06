#include <iostream>
#include <iomanip>
using namespace std; 

int main () {
	
	 int score1 = 75;
	 int score2 = 68;
	 int score3 = 80;
	
    
      
    const double averageScore= ( score1 + score2 + score3) /3.0; 
     
     cout << fixed << setprecision(2);
              cout << "Your average score is " << averageScore << endl;
              
              cout << "Your final grades is: ";
      
        
       
       
      if (averageScore >= 90 && averageScore <= 100) {
        cout << "A";
      }  else if (averageScore >= 80 && averageScore <= 89) {
      	  cout << "B";
	  }  else if (averageScore >= 70 && averageScore <= 79) { 
	       cout << "C";
	  }  else if (averageScore >= 60 && averageScore <= 69) {
	  	   cout << "D";
	  }  else if (averageScore < 68) {
	  	  cout << "F";
	  }
            
            
            
            
            
            
          
		   return 0;
		   
	}
	   
