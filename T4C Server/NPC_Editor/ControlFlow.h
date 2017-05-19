#ifndef __ControlFlow__
#define __ControlFlow__

// Include files
#include "CompositeInstruction.h"

//  todo
namespace NPC_Editor
{
class ControlFlow	: public CompositeInstruction
{
public:
	ControlFlow( std::string name, std::string helpText, InstructionIds id );;
	~ControlFlow();
protected:
private:

};

// END CLASS DEFINITION ControlFlow
            
}
#endif // __ControlFlow__