#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;



    Patient(string id, string n, int a, string d, string r) {
        patient_id = id;
        name = n;
        age = a;
        disease = d;
        room_number = r;
    }

    void display_details() {
        cout << "Patient ID: " << patient_id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "Room Number: " << room_number << endl;
        cout << "------------------------------" << endl;
    }
};

struct HospitalManagementSystem {
private:
    vector<Patient> patients;
    string file_name;

public:
    HospitalManagementSystem(string file) {
        file_name = file;
        load_patients();
    }

    void add_patient() {
        string patient_id, name, disease, room_number;
        int age;
        
        cout << "Enter Patient ID: ";
        cin >> patient_id;
        cin.ignore();  // To ignore newline character left in the buffer
        cout << "Enter Patient Name: ";
        getline(cin, name);
        cout << "Enter Patient Age: ";
        cin >> age;
        cin.ignore();  // To ignore newline character
        cout << "Enter Disease: ";
        getline(cin, disease);
        cout << "Enter Room Number: ";
        getline(cin, room_number);

        Patient new_patient(patient_id, name, age, disease, room_number);
        patients.push_back(new_patient);
        cout << "Patient " << name << " added successfully.\n";
    }

    void search_patient(const string &patient_id) {
        bool found = false;
        for (const auto& patient : patients) {
            if (patient.patient_id == patient_id) {
                patient.display_details();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Patient not found!\n";
        }
    }

    void display_all_patients() {
        if (patients.empty()) {
            cout << "No patients in the hospital.\n";
            return;
        }
        for (const auto& patient : patients) {
            patient.display_details();
        }
    }

    void save_patients() {
        ofstream file(file_name);
        if (file.is_open()) {
            for (const auto& patient : patients) {
                file << patient.patient_id << ","
                     << patient.name << ","
                     << patient.age << ","
                     << patient.disease << ","
                     << patient.room_number << "\n";
            }
            file.close();
            cout << "Patient records saved successfully.\n";
        } else {
            cout << "Error saving records.\n";
        }
    }

    void load_patients() {
        ifstream file(file_name);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                stringstream ss(line);
                string patient_id, name, disease, room_number;
                int age;
                
                getline(ss, patient_id, ',');
                getline(ss, name, ',');
                ss >> age;
                ss.ignore(1, ','); // Skip comma
                getline(ss, disease, ',');
                getline(ss, room_number);

                Patient patient(patient_id, name, age, disease, room_number);
                patients.push_back(patient);
            }
            file.close();
        }
    }

    void menu() {
        while (true) {
            cout << "Hospital Patient Management System\n";
            cout << "1. Add New Patient\n";
            cout << "2. Search for a Patient by Patient ID\n";
            cout << "3. Display All Admitted Patients\n";
            cout << "4. Save Patient Records\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";

            int choice;
            cin >> choice;

            cin.ignore();  // Ignore the leftover newline character
            switch (choice) {
                case 1:
                    add_patient();
                    break;
                case 2: {
                    string patient_id;
                    cout << "Enter Patient ID to search: ";
                    cin >> patient_id;
                    search_patient(patient_id);
                    break;
                }
                case 3:
                    display_all_patients();
                    break;
                case 4:
                    save_patients();
                    break;
                case 5:
                    cout << "Exiting the system...\n";
                    return;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        }
    }
};

int main() {
    HospitalManagementSystem system("patients.txt");
    system.menu();
    //xvxvxvxfyf
    return 0;
}
