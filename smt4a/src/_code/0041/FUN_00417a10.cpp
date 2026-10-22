/* NON_MATCHING: The pair clear uses r1 for zero rather than retail r2 after FUN_00467040; the helper/constructor return ABI is not yet recovered. */
#include "common.h"

struct CallbackPairState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 first;
    /* 0x24 */ u32 second;
};
extern "C" CallbackPairState *FUN_00467040(void *context, u32 index);

/* Clear the pair returned for the callback's selected entry. */
extern "C" void FUN_00417a10(void *context, u32 index)
{
    CallbackPairState *entry = FUN_00467040(context, index);
    entry->first = 0;
    entry->second = 0;
}
