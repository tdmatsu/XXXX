/*
========================================================================
 Name        : XXXXContainer.h
 Author      : 
 Copyright   : Your copyright notice
 Description : 
========================================================================
*/
#ifndef XXXXCONTAINER_H
#define XXXXCONTAINER_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <coecntrl.h>		
#include <aknbutton.h>
#include <stringloader.h>
#include <coecobs.h>
// ]]] end generated region [Generated Includes]


// [[[ begin [Event Handler Includes]
// ]]] end [Event Handler Includes]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class MEikCommandObserver;		
class CAknButton;
// ]]] end generated region [Generated Forward Declarations]

/**
 * Container class for XXXXContainer
 * 
 * @class	CXXXXContainer XXXXContainer.h
 */
class CXXXXContainer : public CCoeControl
	,MCoeControlObserver	{
public:
	// constructors and destructor
	CXXXXContainer();
	static CXXXXContainer* NewL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	static CXXXXContainer* NewLC( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	void ConstructL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	virtual ~CXXXXContainer();

public:
	// from base class CCoeControl
	TInt CountComponentControls() const;
	CCoeControl* ComponentControl( TInt aIndex ) const;
	TKeyResponse OfferKeyEventL( 
			const TKeyEvent& aKeyEvent, 
			TEventCode aType );
	void HandleResourceChange( TInt aType );
	
protected:
	// from base class CCoeControl
	void SizeChanged();

private:
	// from base class CCoeControl
	void Draw( const TRect& aRect ) const;

private:
	void InitializeControlsL();
	void LayoutControls();
	CCoeControl* iFocusControl;
	MEikCommandObserver* iCommandObserver;
	// [[[ begin generated region: do not modify [Generated Methods]
public: 
	// ]]] end generated region [Generated Methods]
	
	// [[[ begin generated region: do not modify [Generated Type Declarations]
public: 
	// ]]] end generated region [Generated Type Declarations]
	
	// [[[ begin generated region: do not modify [Generated Instance Variables]
private: 
	CAknButton* iBtnHello;
	CAknButton* iBtnMoi;
	// ]]] end generated region [Generated Instance Variables]
	
	
	// [[[ begin [Overridden Methods]
protected: 
	void HandleControlEventL( 
			CCoeControl* aControl, 
			TCoeEvent anEventType );
	// ]]] end [Overridden Methods]
	
	
	// [[[ begin [User Handlers]
protected: 
	void HandleBtnMoiStateChangedL( 
			CCoeControl* aControl, 
			TCoeEvent anEvent );
	// ]]] end [User Handlers]
	
public: 
	enum TControls
		{
		// [[[ begin generated region: do not modify [Generated Contents]
		EBtnHello,
		EBtnMoi,
		
		// ]]] end generated region [Generated Contents]
		
		// add any user-defined entries here...
		
		ELastControl
		};
	
	// [[[ begin [MCoeControlObserver support]
private: 
	typedef void ( CXXXXContainer::*ControlEventHandler )( 
			CCoeControl* aControl, TCoeEvent anEvent );
	
	void AddControlEventHandlerL( 
			CCoeControl* aControl, 
			TCoeEvent anEvent, 
			ControlEventHandler aHandler );
	
	class TControlEventDispatch 
		{
	public: 
		CCoeControl* src; 
		TCoeEvent event; 
		ControlEventHandler handler;
		};
		
	RArray< TControlEventDispatch > iControlEventDispatch;
	// ]]] end [MCoeControlObserver support]
	
	};
				
#endif // XXXXCONTAINER_H
