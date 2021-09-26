    #ifndef ASSIGNMENT2_PERSON_H
    #define ASSIGNMENT2_PERSON_H
    #include <string>
    using namespace std;

        class Person {
    public:
        Person(const string &name, int age, int luck);

        Person();

        const string &getName() const;

        void setName(const string &name);

        int getAge() const;

        void setAge(int age);

        int getLuck() const;

        void setLuck(int luck);

    private:
        string name;
        int age;
        int luck;
    };


    #endif //ASSIGNMENT2_PERSON_H
