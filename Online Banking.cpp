//MLB_04.02_11_Online banking
//IT21268830

#include <iostream>
#include <cstring>

using namespace std;
class Employee{
    private:
      int EmpID;
      char EmpName[100];
      char Position[30];
      Branch *br;
    public:
       Employee();
       Employee(int id,char name[],char post,Branch *pbr){
           EmpID = id;
           strcpy(EmpName,name);
           strcpy(Position,post);
           br=pbr;
       }
       void DisplayEmpData(){
           cout<<"Employee ID: "<<EmpID<<endl;
           cout<<"Employee Name: "<<EmpName<<endl;
           cout<<"Position: "<<Position<<endl;
       }
      

};
class Branch{
    private:
      int BranchID;
      char BranchName[50];
      char Location[50];
      Employee *emp;
    public:
     Branch();
     Branch(int id,char bname[],char loc[]){
         BranchID= id;
         strcpy(BranchName,bname);
         strcpy(Location,loc);
     }
     void DiasplayBranchDetails(){
       cout<<"Branch Id:"<<BranchID<<endl;
       cout<<"Branchname:"<<Branchname<<endl;
       cout<<"Location:"<<Location<<endl;
     }
     
};
int main(){
  Employee *emp1=new Employee(100,'Janith kaushalya','Manager','Malabe');
  Employee *emp2=new Emloyee(101,'anjana','Employee','malabe');
  Branch *b1=new Branch(12,'546466','Malabe');
  
  emp1->DisplayEmpData();
  emp2->DisplayEmpData();
  b1->DiasplayBranchDetails();
  
  return 0;
}
