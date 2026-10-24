/* NON_MATCHING: retail has no frame around the linker-removed call (lone nop); armcc saves r4-r6/lr around the weak hook call. */
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

struct Entry00513228 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ u32 second;
};

struct Holder00513228 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Entry00513228 *entry;
};

extern "C" {

/* Looks up the holder's entry (through the debug pass-through hook) and returns its two values; 0 without an entry. */
s32 FUN_00513228(Holder00513228 *holder, u32 *first, u32 *second)
{
    Entry00513228 *entry = (Entry00513228 *)asdDebugHookPass(holder->entry);
    if (entry == NULL)
        return 0;
    *first = entry->first;
    *second = entry->second;
    return 1;
}

} /* extern "C" */
