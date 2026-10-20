#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void wordPairCopy(u32 arg, void *work);

void FUN_00340c68(u32 arg)
{
    wordPairCopy(arg, g_asdCec.cec->work);
}

} /* extern "C" */
