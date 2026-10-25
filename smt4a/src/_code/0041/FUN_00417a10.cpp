/* NON_MATCHING: base heap construction matches, but the trailing range clear uses r1 instead of retail's r2. */
#include "common.h"

struct CallbackPairState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 first;
    /* 0x24 */ u32 second;
};
extern "C" CallbackPairState *FUN_00467040(CallbackPairState *heap);

/* Initialize the frame heap base, then clear its trailing range. */
extern "C" CallbackPairState *FUN_00417a10(CallbackPairState *heap)
{
    CallbackPairState *entry = FUN_00467040(heap);
    entry->first = 0;
    entry->second = 0;
    return entry;
}
