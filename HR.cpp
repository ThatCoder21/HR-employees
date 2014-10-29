//ThatCoder21
#include<iostream>
#include<string>


using namespace std;


struct employee
{ string Firstn;
  string Lastn;
  int    IDn;
  string Gender;
  int    Salary;  
       };

employee Fulltime[500], Contracter[500];

int main()
{//1
int  x=0;
int  z=0; 
int choice;
int corf; 
   for(int out=0;out<3;)
 {
 cout<<"HR Management\n";                           //Menu will always loop.
 cout<<"-------------\n\n";
 cout<<"(1) Add New Employee's\n";    
 cout<<"(2) Print All Employees\n";     
 cout<<"(3) Quit\n";     
 cin>>choice;
   
                                                           
    if(choice==1)
    {//2
     
    
     cout<<"For New Contract Employee, Press 1\n";
     cout<<"For New Full Time Employee, press 2\n";
     cin>>corf;
     
      if(corf==1)
     {//3
      cout<<"Contractor Form\n";
      cout<<"----------------\n";
      cout<<"Employee's First name?\n";
      cin>>Contracter[x].Firstn;
      cout<<"Employee's Last name?\n";
      cin>>Contracter[x].Lastn;            
      cout<<"Employee's ID Number?\n";
      cin>>Contracter[x].IDn;
      cout<<"Employee's Gender?\n";
      cin>>Contracter[x].Gender;            
      cout<<"Employee's Salary?\n";
      cin>>Contracter[x].Salary;             
        x++;             }   //3  

    else if(corf==2)                   
     {//4
     cout<<"Fulltime Form\n";
      cout<<"----------------\n";
      cout<<"Employee's First name?\n";
      cin>>Fulltime[z].Firstn;
      cout<<"Employee's Last name?\n";
      cin>>Fulltime[z].Lastn;            
      cout<<"Employee's ID Number?\n";
      cin>>Fulltime[z].IDn;
      cout<<"Employee's Gender?\n";
      cin>>Fulltime[z].Gender;            
      cout<<"Employee's Salary?\n";
      cin>>Fulltime[z].Salary; 
     z++;
     
      }//4                 
        }//2
    else if(choice==2)
    {//5
    cout<<"There are "<<x<<" Contract Employee's\n";
    for(int y=0;y<x;y++)
    {//6
      cout<<"Contract employee "<<y+1<<endl;
      cout<<"-----------------\n";
      cout<<"First Name: "<<Contracter[y].Firstn;
      cout<<"\nLast Name: "<<Contracter[y].Lastn;  
      cout<<"\nID Number: "<<Contracter[y].IDn; 
      cout<<"\nGender: "<<Contracter[y].Gender; 
      cout<<"\nSalary: "<<Contracter[y].Salary;
      cout<<"\n\n";
                               }//6
    cout<<"There are "<<z<<" Full Time Employee's\n";
    for(int w=0;w<z;w++)
    {//7
      cout<<"Fulltime employee "<<w+1<<endl;
      cout<<"-----------------\n";
      cout<<"First Name: "<<Fulltime[w].Firstn;
      cout<<"\nLast Name: "<<Fulltime[w].Lastn;  
      cout<<"\nID Number: "<<Fulltime[w].IDn; 
      cout<<"\nGender: "<<Fulltime[w].Gender; 
      cout<<"\nSalary: "<<Fulltime[w].Salary;
      cout<<"\n\n";
 
      
   
    
    }//7
      cout<<"-----------\n";
      cout<<"Total Employee's: "<<x+z;
      cout<<"/n------------\n\n";
      }//5
    if(choice==3) 
   {return 0;

        }//1


             }
    
    
    system("pause");
   	cin.ignore();
    return 0;
    }
