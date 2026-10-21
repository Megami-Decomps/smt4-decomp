#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

typedef struct PairSlotFUN_00514258 {
    u32 first;
    u32 second;
} PairSlotFUN_00514258;

extern PairSlotFUN_00514258 DAT_00589530;

void pairSlotSet(u32 first, u32 second)
{
    asdDebugHookPtrInt(NULL, 0x40000ec);
    DAT_00589530.first = first;
    DAT_00589530.second = second;
}

} /* extern "C" */
