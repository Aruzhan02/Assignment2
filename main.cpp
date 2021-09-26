#include <iostream>
#include "Person.h"
#include <vector>
#include <string>
#include <ctime>
    using namespace std;
    void changeLuck(Person& a, Person& b){
        int m = a.getLuck();
        a.setLuck(b.getLuck());
        b.setLuck(m);
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

        string lk_name;
        for(int i = 0; i < v_person.size(); i++){
            if(v_person[0].getLuck() < v_person[i].getLuck()){
                v_person[0] = v_person[i];
            }
        }
        cout << "The Luckiest person is " << v_person[0].getName() << " and " << v_person[0].getName()<<"'s luck is " << v_person[0].getLuck() << "." << endl;

        return 0;
    }