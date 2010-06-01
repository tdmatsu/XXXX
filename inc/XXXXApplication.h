/*
========================================================================
 Name        : XXXXApplication.h
 Author      : 
 Copyright   : Your copyright notice
 Description : 
========================================================================
*/
#ifndef XXXXAPPLICATION_H
#define XXXXAPPLICATION_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknapp.h>
// ]]] end generated region [Generated Includes]

// [[[ begin generated region: do not modify [Generated Constants]
const TUid KUidXXXXApplication = { 0xEE14FBB0 };
// ]]] end generated region [Generated Constants]

/**
 *
 * @class	CXXXXApplication XXXXApplication.h
 * @brief	A CAknApplication-derived class is required by the S60 application 
 *          framework. It is subclassed to create the application's document 
 *          object.
 */
class CXXXXApplication : public CAknApplication
	{
private:
	TUid AppDllUid() const;
	CApaDocument* CreateDocumentL();
	
	};
			
#endif // XXXXAPPLICATION_H		
