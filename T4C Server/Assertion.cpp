#include "stdafx.h"

#include "Assertion.h"

using namespace std;
using namespace vir;

// This assertion implementation throws a logic_error exception
class AssertionThrow : public AssertionImp{
    virtual void HandlePrecondition(){
        throw new logic_error( "Precondition error" );
    };

    virtual void HandlePostcondition(){
        throw new logic_error( "Postcondition error" );
    };
};

AssertionImp *AssertionImp::GetDefaultImp(){
    static AssertionThrow inst;

    return &inst;
}



