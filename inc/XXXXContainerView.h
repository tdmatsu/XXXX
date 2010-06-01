/*
========================================================================
 Name        : XXXXContainerView.h
 Author      : 
 Copyright   : Your copyright notice
 Description : 
========================================================================
*/
#ifndef XXXXCONTAINERVIEW_H
#define XXXXCONTAINERVIEW_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknview.h>
// ]]] end generated region [Generated Includes]


// [[[ begin [Event Handler Includes]
// ]]] end [Event Handler Includes]

// [[[ begin generated region: do not modify [Generated Constants]
// ]]] end generated region [Generated Constants]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class CXXXXContainer;
// ]]] end generated region [Generated Forward Declarations]

/**
 * Avkon view class for XXXXContainerView. It is register with the view server
 * by the AppUi. It owns the container control.
 * @class	CXXXXContainerView XXXXContainerView.h
 */						
			
class CXXXXContainerView : public CAknView
	{
	
	
	// [[[ begin [Public Section]
public:
	// constructors and destructor
	CXXXXContainerView();
	static CXXXXContainerView* NewL();
	static CXXXXContainerView* NewLC();        
	void ConstructL();
	virtual ~CXXXXContainerView();
						
	// from base class CAknView
	TUid Id() const;
	void HandleCommandL( TInt aCommand );
	
	// [[[ begin generated region: do not modify [Generated Methods]
	CXXXXContainer* CreateContainerL();
	// ]]] end generated region [Generated Methods]
	
	// ]]] end [Public Section]
	
	
	// [[[ begin [Protected Section]
protected:
	// from base class CAknView
	void DoActivateL(
		const TVwsViewId& aPrevViewId,
		TUid aCustomMessageId,
		const TDesC8& aCustomMessage );
	void DoDeactivate();
	void HandleStatusPaneSizeChange();
	
	// [[[ begin generated region: do not modify [Overridden Methods]
	// ]]] end generated region [Overridden Methods]
	
	
	// [[[ begin [User Handlers]
	// ]]] end [User Handlers]
	
	// ]]] end [Protected Section]
	
	
	// [[[ begin [Private Section]
private:
	void SetupStatusPaneL();
	void CleanupStatusPane();
	
	// [[[ begin generated region: do not modify [Generated Instance Variables]
	CXXXXContainer* iXXXXContainer;
	// ]]] end generated region [Generated Instance Variables]
	
	// [[[ begin generated region: do not modify [Generated Methods]
	// ]]] end generated region [Generated Methods]
	
	// ]]] end [Private Section]
	
	};

#endif // XXXXCONTAINERVIEW_H
