#include <iostream>

class D
{
    protected:
        D() { std::cout << "D Constructor" << std::endl;}
    public:
        ~D() { std::cout << "D destructor called " << std::endl;}
    
};

class P : virtual public D
{
    public:
        P()
        { 
            std::cout << "P Constructor" << std::endl;
        }
        ~P() { std::cout << "P destructor called " << std::endl;}
        void print() { std::cout << "Printing..." << std::endl;}
};

class S : virtual public D
{
    public:
        S()
        { 
            std::cout << "S Constructor" << std::endl;
        }
        ~S() { std::cout << "S destructor called " << std::endl;}
        void scan() { std::cout << "Scanning..." << std::endl;}
};

class PS : public P, public S
{
    public:
        PS()
        { std::cout << "PS Constructor" << std::endl;}
        ~PS() { std::cout << "PS destructor called " << std::endl;}
};

void printTask(P* pptr)
{
    pptr->print();
}

void scanTask(S* sptr)
{
    sptr->scan();
}

int main()
{
    P pObj;
    S sObj;
    PS psObj;

    printTask(&pObj);
    printTask(&psObj);

    scanTask(&sObj);
    scanTask(&psObj);
    
    return 0;
}