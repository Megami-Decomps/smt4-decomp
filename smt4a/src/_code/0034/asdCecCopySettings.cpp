#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "map/mapHakai.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void ARM_common_memcpy4_8(u32 arg, void *work);

void asdCecCopySettings(u32 arg)
{
    ARM_common_memcpy4_8(arg, g_asdCec.cec->work);
}

} /* extern "C" */
