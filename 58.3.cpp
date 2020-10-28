#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
 ifstream file1, file2, file3;
 ofstream fileOut;
 char* endptr;
 long number1, number2, number3, max1, max2, max3;
 string hour1, hour2, hour3, num1, num2, num3;
 file1.open("c:\\dane_systemy1.txt");
 file2.open("c:\\dane_systemy2.txt");
 file3.open("c:\\dane_systemy3.txt");
 bool first = true;
 int record = 1;
     while(!file1.eof())
     {
               file1>>hour1 >> num1;
               file2>>hour2 >> num2;
               file3>>hour3 >> num3;
               number1 =  strtol(num1.c_str(), &endptr, 2);
               number2 =  strtol(num2.c_str(), &endptr, 4);
               number3 =  strtol(num3.c_str(), &endptr, 8);
               if(first)
               {
                            max1 = number1;
                            max2 = number2;
                            max3 = number3;
                            first = false;
               }
                  if(number1 > max1){
                  	
                  	max1 = number1;
                  	record++;
				  }else if(number2 > max2){
				  	
				  	max2 = number2;
				  	record++;
				  } else if(number3 > max3){
				  	
				  	max3 = number3;
				  	record++;
				  }
                       
     }
 cout<<record;
 file1.close();
 file2.close();
 file3.close();

 return 0;
}
