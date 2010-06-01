
#ifndef XXXX_PAN_H
#define XXXX_PAN_H

/** XXXX application panic codes */
enum TXXXXPanics
	{
	EXXXXUi = 1
	// add further panics here
	};

inline void Panic(TXXXXPanics aReason)
	{
	_LIT(applicationName,"XXXX");
	User::Panic(applicationName, aReason);
	}

#endif // XXXX_PAN_H
