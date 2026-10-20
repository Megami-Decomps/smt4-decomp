#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

typedef struct PairSlotFUN_003f6a14 {
    u32 first;
    u32 second;
} PairSlotFUN_003f6a14;

extern PairSlotFUN_003f6a14 DAT_0044e990;

void FUN_003f6a14(u32 first, u32 second)
{
    asdDebugHookPtrInt(NULL, 0x40000eb);
    DAT_0044e990.first = first;
    DAT_0044e990.second = second;
}

} /* extern "C" */
