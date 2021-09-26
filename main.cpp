#include <iostream>
#include "Person.h"
#include <vector>
#include <string>
#include <ctime>
    using namespace std;
    void changeLuck(Person& adam1, Person& adam2){
        int san = adam1.getLuck();
        adam1.setLuck(adam2.getLuck());
        adam2.setLuck(san);
    }
    int main() {
        srand(time(NULL));
        Person adam;
        adam = Person("Aruzhan", 19, 70);

        vector <Person> v_person;
        v_person.push_back(Person("Aruzhan", 19, rand() % 100 + 1));
        v_person.push_back(Person("Assem", 18, rand() % 100 + 1));
        v_person.push_back(Person("Mukhit", 20, rand() % 100 + 1));
        v_person.push_back(Person("Dana", 19, rand() % 100 + 1));
        v_person.push_back(Person("Mukhtar", 17, rand() % 100 + 1));
        for(int i = 0; i < v_person.size(); i++){
            if(v_person[0].getLuck() < v_person[i].getLuck()){
                Person temporary_person = v_person[0];
                v_person[0] = v_person[i];
                v_person[i] = temporary_person;
            }
        }
        cout << "The Luckiest person is " << v_person[0].getName() << " and " << v_person[0].getName()<<"'s luck is " << v_person[0].getLuck() << "." << endl << endl;

        Person *dy_adam = new Person();

        cout << "Please choose two people from the list and write only their NAME" << endl;
        for (int i=0; i<v_person.size(); i++){
            cout << v_person[i].getName() << endl;
        }
        Person ch_luck = Person();
        Person ch_luck2 = Person();
        string option_name1;
        cout << "1st person:" << endl;
        cin >> option_name1;

        if(option_name1 == "Aruzhan") {
            ch_luck = v_person[0];
            cout << "First person " << v_person[0].getName() << " " << v_person[0].getAge() << " " << v_person[0].getLuck() << endl;
        }
        else if(option_name1 == "Assem"){
            ch_luck = v_person[1];
            cout << "First person " << v_person[1].getName() << " " << v_person[1].getAge() << " " << v_person[1].getLuck() << endl;
        }
        else if(option_name1 == "Mukhit"){
            ch_luck = v_person[2];
            cout << "First person " << v_person[2].getName() << " " << v_person[2].getAge() << " " << v_person[2].getLuck() << endl;
        }
        else if(option_name1 == "Dana"){
            ch_luck = v_person[3];
            cout << "First person " << v_person[3].getName() << " " << v_person[3].getAge() << " " << v_person[3].getLuck() << endl;
        }
        else if(option_name1 == "Mukhtar"){
            ch_luck = v_person[4];
            cout << "First person " << v_person[4].getName() << " " << v_person[4].getAge() << " " << v_person[4].getLuck() << endl;
        }
        else {
            cout << "Please choose two people from the list and write only their NAME" << endl;
        }
        cout << "2nd person" << endl;
        string option_name2;
        cin >> option_name2;
        if(option_name2 == "Aruzhan") {
            ch_luck2 = v_person[0];
            cout << "2nd person " << v_person[0].getName() << " " << v_person[0].getAge() << " " << v_person[0].getLuck() << endl;
        }
        else if(option_name2 == "Assem"){
            ch_luck2 = v_person[1];
            cout << "2nd person " << v_person[1].getName() << " " << v_person[1].getAge() << " " << v_person[1].getLuck() << endl;
        }
        else if(option_name2 == "Mukhit"){
            ch_luck2 = v_person[2];
            cout << "2nd person " << v_person[2].getName() << " " << v_person[2].getAge() << " " << v_person[2].getLuck() << endl;
        }
        else if(option_name2 == "Dana"){
            ch_luck2 = v_person[3];
            cout << "2nd person " << v_person[3].getName() << " " << v_person[3].getAge() << " " << v_person[3].getLuck() << endl;
        }
        else if(option_name2 == "Mukhtar"){
            ch_luck2 = v_person[4];
            cout << "2nd person " << v_person[4].getName() << " " << v_person[4].getAge() << " " << v_person[4].getLuck() << endl;
        }
        else {
            cout << "Please choose two people from the list and write only their NAME" << endl << endl;
        }
        changeLuck(ch_luck, ch_luck2);

        cout << "After changing luck: " << endl << endl;

        cout << "First person: "<< " ";
        cout << ch_luck.getName() << " " << ch_luck.getAge() << " " << ch_luck.getLuck() << endl;
        cout << "Second person: " << " ";
        cout << ch_luck2.getName() << " " << ch_luck2.getAge() << " " << ch_luck2.getLuck() << endl;

        delete dy_adam;
        return 0;
    }



