#include <bits/stdc++.h>
using namespace std;

struct medicineInformation
{
    //this is a structure to store all relevant information about the prescription and medicine and their doses!

    string medicine_name;
    int morning_dose, noon_dose, night_dose;
};

vector<medicineInformation> prescription;

void AddMedication()
{
    // this method takes input of medicine name and add it to the prescription

    cout << "Enter the name of the medicine:: ";
    medicineInformation x;
    cin>> x.medicine_name;
    cout << "Enter doses for the prescribed medicine ";
<<<<<<< HEAD
         cin >> x.morning_dose >> x.noon_dose >> x.night_dose;
=======
    cin >> x.morning_dose >> x.noon_dose >> x.night_dose;
>>>>>>> 41b992eb06b5bb31b7d6bf6e4bb0b6ebad8114c7

    prescription.push_back(x);
}


void editDose()
{
    // this method lets the user edit the dose indications of the prescribed medicine

    string med_name;
    cout << "Enter the name of the medicine for changing doses:: ";
    cin>>med_name;

    for(int i=0; i<prescription.size(); i++)
    {
        if(prescription[i].medicine_name == name)
        {
            cout << "Current Morning Dose " << prescription[i].morning_dose << endl;
            cout << "Enter new morning Dose :: " ;
            cin>> prescription[i].morning_dose;

            cout << "Current Noon Dose " << prescription[i].noon_dose << endl;
            cout << "Enter new noon Dose :: " ;
            cin>> prescription[i].noon_dose;

            cout << "Current Night Dose " << prescription[i].night_dose << endl;
            cout << "Enter new noon Dose :: " ;
            cin>> prescription[i].night_dose;
        }
    }
}

void checkFormulary()
{
    //this method shows the formulary of the prescribed medicine

    cout << "Enter medicine name to check its formulary details :: ";
    string med_name;
    cout << "Enter the name of the medicine for changing doses:: ";
    cin>>med_name;

    for(int i=0; i<prescription.size(); i++)
    {
        if(prescription[i].medicine_name == name)
        {
            showFormulary(name);
            break;
        }
    }
}

void AuditPrescriptionToDatabase()
{
    // save the prescription a file database

    for(int i=0; i<prescription.size(); i++)
    {
        string input,morning,noon,night;

        input = prescription[i].medicine_name;
        ofstream out("output.txt");
        out << input;

        morning = integer2string(prescription[i].morning_dose);
        noon = integer2string(prescription[i].noon_dose);
        night = integer2string(prescription[i].night_dose);

        out << morning << noon << night;

        out.close();
    }
}


void userInterface()
{
    cout << "Welcome to E-Prescription Software!" << endl;

    cout << "Enter your choice plz:: " << endl;

    cout << "1. Add medicine to the prescription" << endl;
    cout << "2. Edit Doses of the Medicine" << endl;
    cout << "3. Check Formulary of the Medicine" << endl;
    cout << "4. Exit" << endl;
}

int main()
{
    userInterface();

    int choice ;
    cin>> choice;

    if(choice==1) AddMedication();
    else if(choice == 2) editDose();
    else if(choice == 3) checkFormulary();
    else if(choice == 4) exit(0);

    return 0;
}
