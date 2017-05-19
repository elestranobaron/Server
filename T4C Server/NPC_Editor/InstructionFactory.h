#ifndef __InstructionFactory__
#define __InstructionFactory__

// Include files
#include "Instruction.h"
#include "NPC_Editor.h"

#include <list>

namespace NPC_Editor
{
class InstructionFactory
{
public:
	~InstructionFactory();
    
    Instruction *CreateInstruction( InstructionIds id );
    
    void GetInstructionList( std::list< Instruction * > &instructionList ) const;

    static InstructionFactory *GetInstance();
private:
    InstructionFactory();
};

// END CLASS DEFINITION InstructionFactory
            
}
#endif // __InstructionFactory__