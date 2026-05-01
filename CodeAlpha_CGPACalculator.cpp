#include<iostream>
using namespace std;
int n;
string sub[50];
string grade[50];
int credithours[50];
float totalgradepoints=0;
int totalcredithours=0;
void subjectInfo(){
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"Enter name of subject "<<i+1<<" : ";
		getline(cin,sub[i]);
		cout<<"Enter credit hours of subject "<<i+1;
		while(!(cin>>credithours[i]) || credithours[i]<=0){
		cout<<"Invlaid input.....Enter positive integers"<<endl;
		cin.clear();
		cin.ignore(1000,'\n');	
		}
		cout<<"Enter Grade of subject('A','A-','B+','B','B-','C+','C','C-','D','F') :";
		while(!(grade[i]=="A" || grade[i]=="A-" || grade[i]=="B+" || grade[i]=="B" ||
                grade[i]=="B-" || grade[i]=="C+" || grade[i]=="C" ||
                grade[i]=="C-" || grade[i]=="D" || grade[i]=="F")){
            
            cout<<"Invalid grade! Enter again: ";
            cin >> grade[i];
        }

	
		cin.ignore();
	}
}
float getPoints(string g){
    if(g=="A") 
	return 4.0;
    else if(g=="A-")
	 return 3.7;
    else if(g=="B+")
	 return 3.3;
    else if(g=="B")
	 return 3.0;
    else if(g=="B-")
	 return 2.7;
    else if(g=="C+") 
	return 2.3;
    else if(g=="C")
	 return 2.0;
    else if(g=="C-")
	 return 1.7;
    else if(g=="D") 
	return 1.0;
    else
	 return 0.0;
}
float calculateGPA(){
	for(int i=0;i<n;i++){
	float points=getPoints(grade[i]);
	totalgradepoints+=points * credithours[i];
	totalcredithours+=credithours[i];
}
return totalgradepoints / totalcredithours;
}
float calculateCGPA(float GPA){
	float prevCGPA;
	float PrevSemesters;
	cout<<"Enter Previous CGPA";
	cin>>prevCGPA;
	cout<<"Enter Previous Semester Number";
	cin>>PrevSemesters;
	float cgpa= ((prevCGPA * PrevSemesters) + GPA)/ (PrevSemesters + 1);
	return cgpa;
	
	
}
int main(){
	cout<< "Enter the number of Subjects"<<endl;
	cin>>n;
	subjectInfo();
	float gpa = calculateGPA();
	float cgpa= calculateCGPA(gpa);
	cout<<"*****RESULT******"<<endl;
	for(int i=0;i<n;i++){
		cout<<sub[i]<<" "<<"Grade:"<<" "<<grade[i]<<endl;
	}
	cout<<"Semester GPA: "<< gpa<<endl;
	cout<< "CGPA: "<< cgpa<< endl;
	return 0;
	
}
