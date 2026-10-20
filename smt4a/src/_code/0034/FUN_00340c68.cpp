#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void FUN_001a9110(u32 arg, void *work);

void FUN_00340c68(u32 arg)
{
    FUN_001a9110(arg, g_asdCec.cec->work);
}

} /* extern "C" */
