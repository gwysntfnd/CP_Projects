#include <iostream>
#include <vector>
using namespace std;

int user_choice = 0;
vector<int> stud_id = {1,2,3,4,5,6,7,8,9,10};
vector<string> stud_name = {"one","two","three","four","five","six","seven","eight","nine","ten"};
vector<string> stud_course = {"BSIT","BSED","BLIS","BSED","BLIS","BSED","BLIS","BSED","BLIS","BSED"};


void sayNotFound(){
    cout << "Data not found. \n";
}
void main_menu(){
    cout << "-Student Record-";
    cout <<  "\n 1.Search\n 2.Add\n 3.Edit\n 4.Delete\n 5.Exit\n";
    cout << "Choice: ";
    cin >> user_choice;
}
int exit_data(){
    char choice;
    cout << "Exit? Y/N ";
    cin >> choice;
    choice = toupper(choice);
    if(choice=='Y')
        return user_choice = 5;
    else if(choice=='N')
        main_menu();
    else
        cout << "Invalid. Try Again.\n";
}
void search_data(){
    int search_id;
    cout << "Search ID: ";
    cin >> search_id;

    int found = 0;
    long int database_size = stud_id.size();
    for(int i = 0; i < database_size; i++ ){
        if(search_id==stud_id[i]){
            found = 1;
            cout << "Name: "<< stud_name[i]<<endl;
            cout << "Course: "<< stud_course[i]<<endl;
        }
    }
    if(found==0){
        sayNotFound();
    }
    exit_data();
}
void add_data(){
    stud_id.push_back(stud_id.size()+1);
    cout << "Student ID:" << stud_id[stud_id.size()-1] << endl;

    cin.ignore();
    string nameTemp;
    cout << "Name: ";
    cin >> nameTemp;
    stud_name.push_back(nameTemp);

    string courseTemp;
    cout << "Course: ";
    cin >> courseTemp;
    stud_course.push_back(courseTemp);

    cout << "Saved!" << endl;
    exit_data();

}
void edit_data(){
    int search_id;
    cout << "Search ID: ";
    cin >> search_id;
    int found = 0;
    long int database_size = stud_id.size();
    for(int i = 0; i < database_size; i++ ){
        if(search_id==stud_id[i]){
            found = 1;
            cin.ignore();
            string courseTemp;
            cout << "Name: "<< stud_name[i]<<endl;
            cout << "Course: ";
            getline(cin,courseTemp);
            cout << "Edited successfully!\n";
        }
    }
    if(found==0){
        sayNotFound();
    }
    exit_data();
}
void delete_data(){
    int search_id;
    cout << "Search ID: ";
    cin >> search_id;
    int found = 0;
    long int database_size = stud_id.size();
    for(int i = 0; i < database_size; i++ ){
        if(search_id==stud_id[i]){
            found = 1;
            cout << "Name: "<< stud_name[i]<<endl;
            cout << "Course: "<< stud_course[i]<<endl;
            char choice;
            cout << "Delete data? Y/N ";
            cin >> choice;
            choice = toupper(choice);
            if(choice=='Y'){

                stud_id[i]=0;
                cout << "Data is deleted successfully.\n";
            }
            else if(choice=='N'){
                cout << "Data not deleted.\n";
            }
            else{
                cout << "Invalid. Try Again.\n";
            }

        }
    }
    if(found==0){
        sayNotFound();
    }
    exit_data();
}
int main(){
    main_menu();
    while(user_choice>0&&user_choice<=5){
        switch(user_choice){
        case 1:
            search_data();
            break;
        case 2:
            add_data();
            break;
        case 3:
            edit_data();
            break;
        case 4:
            delete_data();
            break;
        case 5:
            char choice;
            cout << "Confirm? Y/N";
            cin >> choice;
            choice = toupper(choice);
            if(choice=='Y')
                return 0;
            else if(choice=='N')
                main_menu();
            else
                cout << "Invalid. Try Again.\n";
            break;
        }
    }
}
