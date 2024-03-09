#include <iostream>
#include <string>
#include <vector>

class Talent
{
public:
    virtual void skills() = 0;
};

class Swimming : public Talent
{
    virtual void skills()
    {
        std::cout << "It can <Swim>" << std::endl;
    }
};

class Dancing : public Talent
{
    virtual void skills()
    {
        std::cout << "It can <Dance>" << std::endl;
    }
};

class Counting : public Talent
{
    virtual void skills()
    {
        std::cout << "It can <Count>" << std::endl;
    }
};

class Dog
{
private:
    std::string name;
    std::vector<std::string> skill_list;

public:
    Dog(std::string inName)
    {
        name = inName;
    }

    std::string getName()
    {
        return name;
    }

    void add_talent()
    {
        skill_list.push_back("Dance");
        skill_list.push_back("Swim");
    }

    void show_talents()
    {
        std::cout << "This is " << name << " and it has some talents:" << std::endl;
        Talent* talent;

        for (int i = 0; i < skill_list.size(); ++i)
        {
            if (skill_list[i] == "Swim")
                talent = new Swimming;
            if (skill_list[i] == "Dance")
                talent = new Dancing;
            if (skill_list[i] == "Count")
                talent = new Counting;

            talent->skills();
        }

    }
};

int main() {
    Dog dog1("Steve");

    dog1.add_talent();
    dog1.show_talents();

}
