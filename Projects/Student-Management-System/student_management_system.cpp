#include<iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    int marks;
    
    public:
      void enterDetails()   //Function to enter Student details
      {
          cout << "Enter Name: ";
          getline(cin >> ws,name);
          
          
          cout << "Enter Roll Number: ";
          cin >> rollNo;
          
          cout << "Enter Marks: ";
          cin >> marks;
      };
      void display()      //Function to display Student details
      {
          cout << "------------------------" << endl;
          cout << "Name: "<< name <<endl;
          cout << "Roll Number: "<< rollNo <<endl;
          cout << "Marks: "<< marks <<endl;
          cout << "------------------------" << endl;
      };
      void updateDetails()  //Function to update Student details
      {
          cout << "Enter new Name: ";
          getline(cin >> ws,name);  
          
          cout << "Enter new Marks: ";
          cin >> marks;
      }
      int getRollNo()
      {
          return rollNo;
      }
};
int main(){
    Student students[100];
    int count=0;
    int choice;
    
    while(true){
        cout << "------------------------" << endl;
        cout << "Menu:" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by Roll Number" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Exit" << endl;
        cout << "------------------------" << endl;
        
        cin >> choice;
        
        switch(choice){
            case 1:
                if(count<100)
                {
                    students[count].enterDetails();
                    count++;
                    cout << "Student added successfully!" << endl;
                }
                else
                {
                    cout << "Student limit reached!" << endl;
                }
                break;
            
            case 2:
                if(count==0)
                {
                    cout << "No students found" << endl;
                }
                else
                {
                    for(int i=0 ; i<count ; i++){
                        students[i].display();
                    }
                }
                break;
                
            case 3:{
                int roll;
                cout << "Enter Roll Number: ";
                cin>>roll;
                bool found = false;
                
                //Search Student by roll number
                for(int i=0; i<count; i++){
                    if(students[i].getRollNo() == roll){
                        students[i].display();
                        found = true;
                        break;
                    }
                    
                }
                if(found == false){
                    cout << "Student not found"<<endl;
                }
                break;
            }
            
            case 4:{
                int roll;
                cout << "Enter Roll Number to Update: ";
                cin>>roll;
                bool found = false;
                
                //Search Student by roll number
                for(int i=0; i<count; i++){
                    if(students[i].getRollNo() == roll){
                        students[i].updateDetails();
                        cout << "Student updated successfully!" << endl;
                        found = true;
                        break;
                    }
                    
                }
                if(found == false){
                    cout << "Student not found"<<endl;
                }
                break;
                
            }
                
            case 5:{
                int roll;
                cout << "Enter Roll Number to Delete: ";
                cin>>roll;
                bool found = false;
                
                //Search Student by roll number
                for(int i=0; i<count; i++){
                    if(students[i].getRollNo() == roll){
                        
                        // Shift all students one position to the left
                        for(int j=i; j<count-1; j++ ){
                            students[j] = students[j+1];
                        }
                        count--;
                        
                        cout << "Student deleted successfully!" << endl;
                        found = true;
                        break;
                    }
                    
                }
                if(found == false){
                    cout << "Student not found"<<endl;
                }
                break;
            }
            
            case 6:
            {
                cout << "Exiting program..." << endl;
                return 0;
            }
            
            default:
            {
                cout << "Invalid choice! Please try again." << endl;
                break;
            }
            
        }  
    }
    return 0;
}
