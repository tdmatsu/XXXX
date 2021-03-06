/*
========================================================================
 Name        : XXXXContainer.cpp
 Author      : 
 Copyright   : Your copyright notice
 Description : 
========================================================================
*/
// [[[ begin generated region: do not modify [Generated System Includes]
#include <aknviewappui.h>
#include <eikappui.h>
#include <XXXX.rsg>
// ]]] end generated region [Generated System Includes]

// [[[ begin generated region: do not modify [Generated User Includes]
#include "XXXXContainer.h"
#include "XXXXContainerView.h"
#include "XXXX.hrh"
#include "XXXXContainer.hrh"
// ]]] end generated region [Generated User Includes]

#include <AknGlobalNote.h> 

// [[[ begin generated region: do not modify [Generated Constants]
// ]]] end generated region [Generated Constants]

/**
 * First phase of Symbian two-phase construction. Should not 
 * contain any code that could leave.
 */
CXXXXContainer::CXXXXContainer()
	{
	// [[[ begin generated region: do not modify [Generated Contents]
	iBtnHello = NULL;
	iBtnMoi = NULL;
	// ]]] end generated region [Generated Contents]
	
	}
/** 
 * Destroy child controls.
 */
CXXXXContainer::~CXXXXContainer()
	{
	// [[[ begin generated region: do not modify [Generated Contents]
	delete iBtnHello;
	iBtnHello = NULL;
	iControlEventDispatch.Close();		
	delete iBtnMoi;
	iBtnMoi = NULL;
	// ]]] end generated region [Generated Contents]
	
	}
				
/**
 * Construct the control (first phase).
 *  Creates an instance and initializes it.
 *  Instance is not left on cleanup stack.
 * @param aRect bounding rectangle
 * @param aParent owning parent, or NULL
 * @param aCommandObserver command observer
 * @return initialized instance of CXXXXContainer
 */
CXXXXContainer* CXXXXContainer::NewL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver )
	{
	CXXXXContainer* self = CXXXXContainer::NewLC( 
			aRect, 
			aParent, 
			aCommandObserver );
	CleanupStack::Pop( self );
	return self;
	}

/**
 * Construct the control (first phase).
 *  Creates an instance and initializes it.
 *  Instance is left on cleanup stack.
 * @param aRect The rectangle for this window
 * @param aParent owning parent, or NULL
 * @param aCommandObserver command observer
 * @return new instance of CXXXXContainer
 */
CXXXXContainer* CXXXXContainer::NewLC( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver )
	{
	CXXXXContainer* self = new ( ELeave ) CXXXXContainer();
	CleanupStack::PushL( self );
	self->ConstructL( aRect, aParent, aCommandObserver );
	return self;
	}
			
/**
 * Construct the control (second phase).
 *  Creates a window to contain the controls and activates it.
 * @param aRect bounding rectangle
 * @param aCommandObserver command observer
 * @param aParent owning parent, or NULL
 */ 
void CXXXXContainer::ConstructL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver )
	{
	if ( aParent == NULL )
	    {
		CreateWindowL();
	    }
	else
	    {
	    SetContainerWindowL( *aParent );
	    }
	iFocusControl = NULL;
	iCommandObserver = aCommandObserver;
	InitializeControlsL();
	SetRect( aRect );
	ActivateL();
	// [[[ begin generated region: do not modify [Post-ActivateL initializations]
	// ]]] end generated region [Post-ActivateL initializations]
	
	}
			
/**
* Return the number of controls in the container (override)
* @return count
*/
TInt CXXXXContainer::CountComponentControls() const
	{
	return ( int ) ELastControl;
	}
				
/**
* Get the control with the given index (override)
* @param aIndex Control index [0...n) (limited by #CountComponentControls)
* @return Pointer to control
*/
CCoeControl* CXXXXContainer::ComponentControl( TInt aIndex ) const
	{
	// [[[ begin generated region: do not modify [Generated Contents]
	switch ( aIndex )
		{
		case EBtnHello:
			return iBtnHello;
		case EBtnMoi:
			return iBtnMoi;
		}
	// ]]] end generated region [Generated Contents]
	
	// handle any user controls here...
	
	return NULL;
	}
				
/**
 *	Handle resizing of the container. This implementation will lay out
 *  full-sized controls like list boxes for any screen size, and will layout
 *  labels, editors, etc. to the size they were given in the UI designer.
 *  This code will need to be modified to adjust arbitrary controls to
 *  any screen size.
 */				
void CXXXXContainer::SizeChanged()
	{
	CCoeControl::SizeChanged();
	LayoutControls();
	// [[[ begin generated region: do not modify [Generated Contents]
			
	// ]]] end generated region [Generated Contents]
	
	}
				
// [[[ begin generated function: do not modify
/**
 * Layout components as specified in the UI Designer
 */
void CXXXXContainer::LayoutControls()
	{
	}
// ]]] end generated function

/**
 *	Handle key events.
 */				
TKeyResponse CXXXXContainer::OfferKeyEventL( 
		const TKeyEvent& aKeyEvent, 
		TEventCode aType )
	{
	// [[[ begin generated region: do not modify [Generated Contents]
	
	// ]]] end generated region [Generated Contents]
	
	if ( iFocusControl != NULL
		&& iFocusControl->OfferKeyEventL( aKeyEvent, aType ) == EKeyWasConsumed )
		{
		return EKeyWasConsumed;
		}
	return CCoeControl::OfferKeyEventL( aKeyEvent, aType );
	}
				
// [[[ begin generated function: do not modify
/**
 *	Initialize each control upon creation.
 */				
void CXXXXContainer::InitializeControlsL()
	{
	
	iBtnHello = static_cast< CAknButton* >
					( EikControlFactory::CreateByTypeL( EAknCtButton ).iControl );
	iBtnHello->ConstructFromResourceL ( R_XXXXCONTAINER_BTN_HELLO );
	
	iBtnHello->SetContainerWindowL ( *this );
	iBtnHello->SetRect ( TRect ( 
								TPoint ( 56, 35 ) , 
								TSize ( 250, 74 ) )  
								 ) ; 
	iBtnHello->SetObserver( ( MCoeControlObserver* ) iCommandObserver ); 
	
	
	
	
	
	
	iBtnHello->SetObserver( this );
	AddControlEventHandlerL( 
			iBtnHello, 
			EEventStateChanged, 
			&CXXXXContainer::HandleBtnHelloStateChangedL );
	
	iBtnMoi = static_cast< CAknButton* >
					( EikControlFactory::CreateByTypeL( EAknCtButton ).iControl );
	iBtnMoi->ConstructFromResourceL ( R_XXXXCONTAINER_BTN_MOI );
	
	iBtnMoi->SetContainerWindowL ( *this );
	iBtnMoi->SetRect ( TRect ( 
								TPoint ( 57, 160 ) , 
								TSize ( 249, 88 ) )  
								 ) ; 
	iBtnMoi->SetObserver( ( MCoeControlObserver* ) iCommandObserver ); 
	
	
	
	
	
	
	iBtnMoi->SetObserver( this );
	AddControlEventHandlerL( 
			iBtnMoi, 
			EEventStateChanged, 
			&CXXXXContainer::HandleBtnMoiStateChangedL );
	
	}
// ]]] end generated function

/** 
 * Handle global resource changes, such as scalable UI or skin events (override)
 */
void CXXXXContainer::HandleResourceChange( TInt aType )
	{
	CCoeControl::HandleResourceChange( aType );
	SetRect( iAvkonViewAppUi->View( TUid::Uid( EXXXXContainerViewId ) )->ClientRect() );
	// [[[ begin generated region: do not modify [Generated Contents]
	// ]]] end generated region [Generated Contents]
	
	}
				
/**
 *	Draw container contents.
 */				
void CXXXXContainer::Draw( const TRect& aRect ) const
	{
	// [[[ begin generated region: do not modify [Generated Contents]
	CWindowGc& gc = SystemGc();
	gc.Clear( aRect );
	
	// ]]] end generated region [Generated Contents]
	
	}
				
/** 
 * Override of the HandleControlEventL virtual function
 */
void CXXXXContainer::HandleControlEventL( 
		CCoeControl* aControl, 
		TCoeEvent anEventType )
	{
	for (int i = 0; i < iControlEventDispatch.Count(); i++)
		{
		const TControlEventDispatch& currEntry = iControlEventDispatch[i];
		if ( currEntry.src == aControl && currEntry.event == anEventType )
			{
			( this->*currEntry.handler )( aControl, anEventType );
			break;
			}
		}
	}
/** 
 * Helper function to register MCoeControlObserver event handlers
 */
void CXXXXContainer::AddControlEventHandlerL( 
		CCoeControl* aControl, 
		TCoeEvent anEvent, 
		ControlEventHandler aHandler )
	{
	TControlEventDispatch entry;
	entry.src = aControl;
	entry.event = anEvent;
	entry.handler = aHandler;
	TInt err = iControlEventDispatch.Append( entry );
	User::LeaveIfError( err );
	}
			
/** 
 * Handle the EEventStateChanged event.
 */
void CXXXXContainer::HandleBtnMoiStateChangedL( 
		CCoeControl* /* aControl */, 
		TCoeEvent /* anEvent */ )
	{
	// TODO: implement stateChanged event handler
	}
				
/** 
 * Handle the EEventStateChanged event.
 */
void CXXXXContainer::HandleBtnHelloStateChangedL( 
		CCoeControl* /* aControl */, 
		TCoeEvent /* anEvent */ )
	{
	// TODO: implement stateChanged event handler
    CAknGlobalNote* iGlobalNote = CAknGlobalNote::NewL(); //Initialize the note

    CleanupStack::PushL(iGlobalNote);
    
    _LIT(KInfoText, "Information");

    iGlobalNote->ShowNoteL(EAknGlobalInformationNote, KInfoText);

    CleanupStack::PopAndDestroy(); // globalNote
	}
				
