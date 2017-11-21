#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;
/*Roque Guerrero
  11/21/2017
  4.0 Assignment - Program Flow - Test Grading Program
  This program read in the student answers for the test and compare the answers
  to the corresponding answer key for the test. The program will award 1 point for correct
  answer, ommitted answers get 0 points, and incorrect answers will be deducted 1/4 point.
  Zachary Rust help me with this project.
*/
//This class hold the student information.
class StudentInfo {
    private:
    string first_name;
    string last_name;
    double student_grades;
    int missed_questions[21];
    
    public:
    StudentInfo();
    void SetStudentName(string f, string l);
    void SetStudentScore(double s);
    void WrongAnswer(int problem, int missed_number);
    
    void PrintStudentReport();
};
//This is the class constructor
StudentInfo::StudentInfo(){
    first_name = "blank";
    last_name = "blank";
    student_grades = 0;
    for (int i = 0; i < 21; i++){
        missed_questions[i] = 0;
    }
}
//This function set the student variables when file is read
void StudentInfo::SetStudentName(string f, string l){
    first_name = f;
    last_name = l;
}
void StudentInfo::SetStudentScore(double s){
    student_grades = s;
}
void StudentInfo::WrongAnswer(int problem, int missed_number){
    missed_questions[missed_number - 1] = problem;
    missed_questions[missed_number] = 0;
}
void StudentInfo:: PrintStudentReport(){
    cout << "Student Report" << endl;
    cout << first_name << " " << last_name << endl;
    cout << "Test Score: " << student_grades << endl;
    
    if(missed_questions[0] != 0) {
        cout << "Missed Test Questions: " << endl;
        for(int i = 0; missed_questions[i] != 0 && i < 21; i++){
            if(missed_questions[i + 1] != 0){
                cout << missed_questions[i] << ", ";
            } else {
            cout << missed_questions[i] << endl;
        }
    }
} else {
    cout << "You got a perfect Score!" << endl;
    }
}

int main() {
    //variables for student
    const int student_numbers = 6;
    const int question_numbers = 21;
    //Arrays being used
    StudentInfo student[student_numbers];
    string names[2];
    // The arrays for test answers
    string student_answers[question_numbers];
    string test_answers[question_numbers];
    //sets file stream up
    ifstream inFS;
    
    cout << "Loading answer key...." << endl;
    inFS.open("answerkey.txt");
    
    if(!inFS.is_open()){
        cout << "Failed to load answer key!" << endl;
        return 1;
    } else {
        cout << "Anwser key has been successfully loaded!" << endl;
        cout << endl;
    for(int i = 0; i < question_numbers; i++){
        inFS >> test_answers[i];
    }
    
    inFS.close();
    
    double points = 0;
    
    cout << "Loading student test answers...." << endl;
    inFS.open("studentanswers.txt");
    
    if(!inFS.is_open()){
        cout << "Student test answers failed to load!" << endl;
        return 1;
    } else {
        cout << "Student test answers have successfully loaded!" << endl;
        cout << endl;
    }
    for (int x = 0; x < student_numbers + 1; x++) {
        for(int i = 0; i < question_numbers + 1; i++){
        if(i < 1){
            inFS >> names[0];
            inFS >> names[1];
        } else {
            inFS >> student_answers[i - 1];
        }
    }
    //This checks the student test answers
    int missed_test_question = 0;
    for(int i = 0; i < question_numbers; i++){
        if(student_answers[i] == test_answers[i]){
        points += 1;
    } else if(student_answers[i] == "?"){
        missed_test_question++;
        student[x].WrongAnswer(i + 1, missed_test_question);
    } else {
        points -= 0.25;
        missed_test_question++;
        student[x].WrongAnswer(i + 1, missed_test_question);
        }
    }
    //sets up class
    student[x].SetStudentName(names[0], names[1]);
    student[x].SetStudentScore(points);
    student[x].PrintStudentReport();
    cout << endl;
    cout << endl;
    
    points = 0;
    
    }
    inFS.close();
}  
}

/*
Loading answer key....
Anwser key has been successfully loaded!

Loading student test answers....
Student test answers have successfully loaded!

Student Report
Christian Smith
Test Score: 1.75
Missed Test Questions: 
1, 2, 3, 4, 6, 7, 8, 10, 11, 12, 13, 14, 17, 18, 19, 20, 21


Student Report
Paxton Jones
Test Score: 3.5
Missed Test Questions: 
1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 20, 21


Student Report
Abby Sciuto
Test Score: 5
Missed Test Questions: 
1, 2, 3, 4, 5, 7, 8, 9, 10, 12, 13, 16, 20, 21


Student Report
Audrey Smithson
Test Score: -0.75
Missed Test Questions: 
1, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21


Student Report
Katie Holmes
Test Score: 2.5
Missed Test Questions: 
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 15, 17, 18, 19, 20


Student Report
Carrie Grant
Test Score: 8
Missed Test Questions: 
1, 2, 3, 6, 7, 8, 11, 12, 16, 17, 18

*/