/*
========================================================================
 Name        : XXXXDocument.cpp
 Author      : 
 Copyright   : Your copyright notice
 Description : 
========================================================================
*/
// [[[ begin generated region: do not modify [Generated User Includes]
#include "XXXXDocument.h"
#include "XXXXAppUi.h"
// ]]] end generated region [Generated User Includes]

/**
 * @brief Constructs the document class for the application.
 * @param anApplication the application instance
 */
CXXXXDocument::CXXXXDocument( CEikApplication& anApplication )
	: CAknDocument( anApplication )
	{
	}

/**
 * @brief Completes the second phase of Symbian object construction. 
 * Put initialization code that could leave here.  
 */ 
void CXXXXDocument::ConstructL()
	{
	}
	
/**
 * Symbian OS two-phase constructor.
 *
 * Creates an instance of CXXXXDocument, constructs it, and
 * returns it.
 *
 * @param aApp the application instance
 * @return the new CXXXXDocument
 */
CXXXXDocument* CXXXXDocument::NewL( CEikApplication& aApp )
	{
	CXXXXDocument* self = new ( ELeave ) CXXXXDocument( aApp );
	CleanupStack::PushL( self );
	self->ConstructL();
	CleanupStack::Pop( self );
	return self;
	}

/**
 * @brief Creates the application UI object for this document.
 * @return the new instance
 */	
CEikAppUi* CXXXXDocument::CreateAppUiL()
	{
	return new ( ELeave ) CXXXXAppUi;
	}
				
