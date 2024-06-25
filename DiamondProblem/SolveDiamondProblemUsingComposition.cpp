#include <iostream>

class IPrinter
{
    public:
        virtual void print() = 0;
};

class IScanner
{
    public:
        virtual void scan() = 0;
};

class P : public IPrinter
{
    public:
        P()
        { 
            std::cout << "P Constructor" << std::endl;
        }
        ~P() { std::cout << "P destructor called " << std::endl;}
        void print() { std::cout << "Printing..." << std::endl;}
};

class S : public IScanner
{
    public:
        S()
        { 
            std::cout << "S Constructor" << std::endl;
        }
        ~S() { std::cout << "S destructor called " << std::endl;}
        void scan() { std::cout << "Scanning..." << std::endl;}
};

class PS : public IPrinter, public IScanner
{
    private:
        P printer;
        S scanner;
    public:
        PS()
        { std::cout << "PS Constructor" << std::endl;}
        ~PS() { std::cout << "PS destructor called " << std::endl;}
        void print()
        {
            printer.print();
        }
        void scan()
        {
            scanner.scan();
        }
};

void printTask(IPrinter* pptr)
{
    pptr->print();
}

void scanTask(IScanner* sptr)
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