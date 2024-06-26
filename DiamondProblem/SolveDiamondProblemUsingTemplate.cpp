#include <iostream>
#include <memory>

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

template<typename T1, // T1 referring to print interface
         typename T2> // T2 referring to scan interface
class PS : public T1, public T2
{
    private:
        T1* printer;
        T2* scanner;
    public:
        PS(T1& pObj, T2& sObj)
        { 
            std::cout << "PS Constructor" << std::endl;
            printer = &pObj;
            scanner = &sObj;
        }
        ~PS() { std::cout << "PS destructor called " << std::endl;}
        void print()
        {
            printer->print();
        }
        void scan()
        {
            scanner->scan();
        }
};

template<typename T>
void printTask(T* pptr)
{
    pptr->print();
}

template<typename T>
void scanTask(T* sptr)
{
    sptr->scan();
}

int main()
{
    P pObj;
    S sObj;
    PS<P, S> psObj(pObj, sObj);

    printTask<P>(&pObj);
    printTask<P>(&psObj);

    scanTask<S>(&sObj);
    scanTask<S>(&psObj);
    
    return 0;
}