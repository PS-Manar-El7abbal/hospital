#include <iostream>
using namespace std;

const int Specializations = 20;
const int Queue_length = 5;

string names[Specializations+1][Queue_length+1];
int status[Specializations+1][Queue_length+1];
int counters[21];
string spe_names[20] = {"child","kidney","child surgery","pharmacy part","stomach diseases","heart","nose and throat","dentistry","therapy","women","bones","surgery","internal","dermatology","anatomy","emergency","cardio","mouth ","heart surgery","stomach"};

int  Enterface ()
{
    int choice = -1;
    while (choice == -1)
    {
        cout << "------------------------------"<<endl;
        cout << "|Enter your choice            |\n";
        cout << "------------------------------" << endl;
        cout << "|1) Add a new patient         |\n";
        cout << "------------------------------" << endl;
        cout << "|2) Print all the patients    |\n";
        cout << "------------------------------" << endl;
        cout << "|3) Get the next patient      |\n";
        cout << "------------------------------" << endl;
        cout << "|4) Exist                     |\n";
        cout << "------------------------------"<<endl;;
        cin >> choice;
        if (choice > 4 || choice < 0)
        {
            cout << "Invalid choice , try again \n";
            choice = -1;//to make it equal the first value
        }
    }
    return choice;
}
void shift_to_right(int spe,string name[],int stat[])
{
    int len = counters[spe];//it is for all specialization 
    for (int i = len-1;i >=0;i++)
    {
        name[i+1] = name[i];
        stat[i+1] = stat[i];
    }
    counters[spe]++;//it will help me to add a name to the queue
}
void shift_to_left(int spe,string name[],int stat[])
{
    int len = counters[spe] ;
    for (int i = 1;i <len;i--)
    {
        name[i-1] = name[i];
        stat[i-1] = stat[i];
    }
    counters[spe]--;//it will help me to remove the name from the queue

}
bool Addpatient()
{
    cout << endl;
    cout << "specialization , name , status : ";
    int spe;string name; bool st;
    cin >> spe >> name >> st;
   
    int len=counters[spe];
   
    
    if (len>= Queue_length)
    {
        cout << "Sorry you can not add any other patients to specialization ( " << spe_names[spe-1]<<" )" << endl;
        return false;
    }
    if (st==1)//urgent add to the begin
    {
        shift_to_right(spe,names[spe],status[spe]);//to be able to add the value to the first cell
        names[spe][0] = name;
        status[spe][0] = st;

    }
    else// regular add to the end 
    {
        names[spe][len] = name;
        status[spe][len] = st;
        counters[spe]++;
    }
    return true;
}
void print_patient(int spe,string name[],int stat[])
{
     int len=counters[spe];//what is the spe
     if (len == 0)
         return;

    cout << "There are  " << len << " patients " << "in specialization ( "<<spe_names[spe-1]<<" ) " << endl;
    for (int i=0;i < len;i++)
    {
        cout << name[i] << " ";

        if (stat[i])
        {
            cout << "Urgent\n";
        }
        else
        {
            cout << "Regular\n";
        }
        cout << endl;
    }
   

}
void print_patients()
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    for (int spe = 0;spe < Specializations;spe++)
    {
        print_patient(spe,names[spe],status[spe]);
    }
}
bool get_the_next_patient()
{
    int spe; 
    cout << "Enter the specialization " << endl;
    cin >> spe;
    int len = counters[spe];
   
   
    if (len == 0)
    {
        cout << "there are not current patients in ( " << spe_names[spe-1]<< " ) rest ,dr\n";
        return false;
    }
    else

    cout << "the next patient " << names[spe][0] << " go to the dr \n";

    shift_to_left(spe, names[0], status[0]);// to delete the patient from the queue

}
void l_hopital()
{
  
    while (true)
    {
        int choice = Enterface();
        if (choice == 1)
        {
            Addpatient();
        }
        else if (choice == 2)
        {
            print_patients();
        }
        else if (choice == 3)
        {
            get_the_next_patient();

        }
        else
        {
            break;
        }
    }
    
}
int main()
{
    //Practice Makes Perfect
    l_hopital();

}
