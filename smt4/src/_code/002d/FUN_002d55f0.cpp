#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void ARM_common_memcpy4_8(u32 arg, void *work);

void FUN_002d55f0(u32 arg)
{
    ARM_common_memcpy4_8(arg, g_asdCec.cec->work);
}

} /* extern "C" */
