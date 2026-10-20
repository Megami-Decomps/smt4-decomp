#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

typedef struct PairSlot00513760 {
    u32 first;
    u32 second;
} PairSlot00513760;

extern PairSlot00513760 DAT_00589520;

void outStoreOneTwoZero(u32 *a, u32 *b, u32 *c);

void FUN_00513760(u32 first, u32 second)
{
    u32 a;
    u32 b;
    u32 c;

    asdDebugHookPtrInt(NULL, 0x40000aa);
    outStoreOneTwoZero(&a, &b, &c);
    DAT_00589520.first = first;
    DAT_00589520.second = second;
}

} /* extern "C" */
