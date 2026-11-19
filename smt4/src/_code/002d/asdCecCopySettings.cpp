#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void __ARM_common_memcpy4_8(u32 arg, void *work);

void asdCecCopySettings(u32 arg)
{
    __ARM_common_memcpy4_8(arg, g_asdCec.cec->work);
}

} /* extern "C" */
