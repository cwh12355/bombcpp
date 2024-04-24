#include<iostream>
#include"object.h"


void Student::setname(char *name){
    name = m_name;
}
void Student::setage(uint8_t age){
    age = m_age;
}
void Student::setwength(float wength){
    wength = m_wength;
}
void Student::settall(float tall){
    tall = m_tall;
}

void Student::display(){
        cout << "the name of person is " << m_name << endl;
        cout << "the age of  person is " << m_age << endl;
        cout << "the wength of person is " << m_wength << endl;
        cout << "the tall of person is " << m_tall << endl;
}

float Student::bmi() {
        float bmi = 0;
        bmi = m_wength / (m_tall * m_tall);
        cout << "the BMI of person is " << bmi << endl;
        return bmi;
}

int P_view_student(){
    Student* s1 = new Student;
    s1->m_name = "小明";
    s1->m_age = 18;
    s1->m_wength = 49.8;
    s1->m_tall = 1.6;
    cout << s1->m_name << " 'age is " << s1->m_age  << "BMI is "  << s1->bmi() << endl;
}

int view_student(){
    Student s2;
    char *name = "小明";
    uint8_t age = 25;
    float wength = 70;
    float tall = 1.7;
    s2.setname(name);
    s2.setage(age);
    s2.setwength(wength);
    s2.settall(tall);
    cout << s2.m_name << " 'age is " << s2.m_age << "BMI is " << s2.bmi() << endl;
}

void object_main(){
    view_student();
    P_view_student();
    
}
