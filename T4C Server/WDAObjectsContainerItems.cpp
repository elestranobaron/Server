// WDAObjectsContainerItems.cpp: implementation of the WDAObjectsContainerItems class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "WDAObjectsContainerItems.h"
#include "Format.h"

using namespace vir;
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

WDAObjectsContainerItems::WDAObjectsContainerItems( Logger &cLogger, DEBUG_LEVEL dlDebugHigh ) : WDATable( cLogger )
{
    MapDebugHighLogLevel( dlDebugHigh );
}

WDAObjectsContainerItems::~WDAObjectsContainerItems()
{

}



// Accessors
//////////////////////////////////////////////////////////////////////////////////////////
const string &WDAObjectsContainerItems::GetItemID( void ) const
//////////////////////////////////////////////////////////////////////////////////////////
// Returns the item ID.
//////////////////////////////////////////////////////////////////////////////////////////
{
    return csItemID;
}

//////////////////////////////////////////////////////////////////////////////////////////
void WDAObjectsContainerItems::SaveTo
//////////////////////////////////////////////////////////////////////////////////////////
// Saves to a wdaFile
// 
(
 WDAFile &wdaFile // The wdaFile.
)
//////////////////////////////////////////////////////////////////////////////////////////
{
    TFormat cFormat;
    cOutput.Log(
        dlDebugHigh,
        cFormat( 
            " %s",
            csItemID.c_str()
        )
    );

    wdaFile.Write( csItemID );
}
    
    
//////////////////////////////////////////////////////////////////////////////////////////
void WDAObjectsContainerItems::CreateFrom
//////////////////////////////////////////////////////////////////////////////////////////
// Creates from a wdaFile.
// 
(
 WDAFile &wdaFile, // The wdaFile.
 bool //createReadOnly
)
//////////////////////////////////////////////////////////////////////////////////////////
{
    wdaFile.Read( csItemID );

    TFormat cFormat;
    cOutput.Log(
        dlDebugHigh,
        cFormat( 
            " %s",
            csItemID.c_str()
        )
    );
}

#ifndef NO_DAO_SUPPORT    
    
//////////////////////////////////////////////////////////////////////////////////////////
void WDAObjectsContainerItems::CreateFrom
//////////////////////////////////////////////////////////////////////////////////////////
// Creates from a single record.
// 
(
 CDaoRecordset &cRecord, // The record from which to create the item.
 CDaoDatabase &cDatabase // Unused.
)
//////////////////////////////////////////////////////////////////////////////////////////
{
    // This function should never get an empty recordset.
    ASSERT( !cRecord.IsEOF() );

    if( cRecord.IsEOF() ){
        return;
    }

    COleVariant oleData;

    cRecord.GetFieldValue( "ConjureID", oleData );
    csItemID = V_BSTRT( &oleData );

    TFormat cFormat;
    cOutput.Log(
        dlDebugHigh,
        cFormat( 
            " %s",
            csItemID.c_str()
        )
    );

}
#endif
