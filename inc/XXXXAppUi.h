/*
========================================================================
 Name        : XXXXAppUi.h
 Author      : 
 Copyright   : Your copyright notice
 Description : 
========================================================================
*/
#ifndef XXXXAPPUI_H
#define XXXXAPPUI_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknviewappui.h>
// ]]] end generated region [Generated Includes]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class CXXXXContainerView;
// ]]] end generated region [Generated Forward Declarations]

/**
 * @class	CXXXXAppUi XXXXAppUi.h
 * @brief The AppUi class handles application-wide aspects of the user interface, including
 *        view management and the default menu, control pane, and status pane.
 */
class CXXXXAppUi : public CAknViewAppUi
	{
public: 
	// constructor and destructor
	CXXXXAppUi();
	virtual ~CXXXXAppUi();
	void ConstructL();

public:
	// from CCoeAppUi
	TKeyResponse HandleKeyEventL(
				const TKeyEvent& aKeyEvent,
				TEventCode aType );

	// from CEikAppUi
	void HandleCommandL( TInt aCommand );
	void HandleResourceChangeL( TInt aType );

	// from CAknAppUi
	void HandleViewDeactivation( 
			const TVwsViewId& aViewIdToBeDeactivated, 
			const TVwsViewId& aNewlyActivatedViewId );

private:
	void InitializeContainersL();
	// [[[ begin generated region: do not modify [Generated Methods]
public: 
	// ]]] end generated region [Generated Methods]
	
	// [[[ begin generated region: do not modify [Generated Instance Variables]
private: 
	CXXXXContainerView* iXXXXContainerView;
	// ]]] end generated region [Generated Instance Variables]
	
	
	// [[[ begin [User Handlers]
protected: 
	// ]]] end [User Handlers]
	
	};

#endif // XXXXAPPUI_H			
