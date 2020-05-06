#include "StahpFreeze.h"
#include "Windows/LiveCoding/Private/External/LC_Thread.h"

void FStahpFreezeModule::StartupModule()
{
	if (GIsEditor)
	{
		if (!SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS))
		{
			UE_LOG(LogTemp, Warning, TEXT("StahpFreeze: Failed setting process priority."));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("StahpFreeze: Successfully set process priority."));
		}
	}	
}
	
IMPLEMENT_MODULE(FStahpFreezeModule, StahpFreeze)