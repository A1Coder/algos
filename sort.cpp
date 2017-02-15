#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
int linearSearch(auto data, auto key);//seach prototype
void bubbleSort(auto &data); //sort prototype


int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }
       cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;


if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
 
    bubbleSort(inputs);
    
    //output sorted lis
     cout << "Your sorted list is: " <<endl;
   for (int x=0;x<inputs.size();x++){
	  
		cout<< inputs[x] << " ";
   }


  
   


 

    return 0;
}


//implementation 
int linearSearch(auto data, auto key)
{
	
	for (int i = 0; i<data.size();i++)
	{
		if(data[i]==key)
		{
			return i;

		}
	}
		return -1;
	}	




//bubble sort
void bubbleSort(auto &Data){
	int passes=0;
	int getMod=0;
	for(int i=0;i<Data.size();i++){
		passes++;
			for(int j=0; j<Data.size()-1;j++){
				if(Data[j]>Data[j+1]){
					swap(Data[j],Data[j+1]);
				}
			}
	}
	if (passes>0){
	getMod=passes%20000;
	if(getMod==0){
		
	cout<<"The number of passes is: " <<passes<<endl;
}}
}
