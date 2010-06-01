/*
========================================================================
 Name        : XXXXDocument.h
 Author      : 
 Copyright   : Your copyright notice
 Description : 
========================================================================
*/
#ifndef XXXXDOCUMENT_H
#define XXXXDOCUMENT_H

#include <akndoc.h>
		
class CEikAppUi;

/**
* @class	CXXXXDocument XXXXDocument.h
* @brief	A CAknDocument-derived class is required by the S60 application 
*           framework. It is responsible for creating the AppUi object. 
*/
class CXXXXDocument : public CAknDocument
	{
public: 
	// constructor
	static CXXXXDocument* NewL( CEikApplication& aApp );

private: 
	// constructors
	CXXXXDocument( CEikApplication& aApp );
	void ConstructL();
	
public: 
	// from base class CEikDocument
	CEikAppUi* CreateAppUiL();
	};
#endif // XXXXDOCUMENT_H
