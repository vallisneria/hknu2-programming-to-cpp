#include<iostream>
#include<stdio.h>
#include<tchar.h>
using namespace std;

class CTest{

private:
    int m_nData=0;

public:
    CTest(int nParam):m_nData(nParam){};
    ~CTest(){}
    
    int getData() const{
        return m_nData;
    }

    int setData(int nParam){
        m_nData=nParam;
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    CTest a(10);
    cout << a.getData() << endl;

    return 0;
}