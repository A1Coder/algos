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

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }
    
    bubbleSort(inputs);
    
    //output sorted lis
     cout << "Your sorted list is: " <<endl;
   for (int x=0;x<inputs.size();x++){
	  
		cout<< inputs[x] << " ";
   }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Enter a value to search for: ";


   cin>>search_key;
 
    while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(inputs,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

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
