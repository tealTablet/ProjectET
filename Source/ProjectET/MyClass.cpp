//#include "CoreMinimal.h"
//#include "Core.h"
#include "Engine.h"

class SDASD
{
	uint32 x;
	TArray<uint32> sa;
	TSharedPtr<SDASD> sd;
	void SDAS()
	{
		
		sa[0] = 10;
		
	}
	void sum()
	{
		x = 10;
		x = x + x;
		sa.Add(x);
		sa.Empty();
	}
};