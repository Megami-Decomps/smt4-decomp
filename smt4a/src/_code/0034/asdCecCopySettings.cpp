#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "map/mapHakai.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void wordPairCopy(u32 arg, void *work);

void asdCecCopySettings(u32 arg)
{
    wordPairCopy(arg, g_asdCec.cec->work);
}

} /* extern "C" */
