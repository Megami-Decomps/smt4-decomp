/* NON_MATCHING: retail uses different paired comparisons, array stride arithmetic or initialization ordering. */
#include "common.h"
struct ReflectEntry {
    u32 unk00;
    u8 mode;
    u8 padding5[0xf];
    u32 first;
    u8 padding18[0x10];
    u32 second;
};
extern "C" {
extern ReflectEntry *g_btlActionReflect;
ReflectEntry *FUN_0022699c(ReflectEntry *state, s16 slot, u32 mode, u32 extra);
/* Stores both parameters in the selected reflection mode. */
void FUN_003de5d0(s32 slot, u32 extra, u32 first, u32 second)
{
    ReflectEntry *entry = FUN_0022699c(g_btlActionReflect, (s16)slot, 0, extra);
    entry->mode = 45;
    entry->first = first;
    entry->second = second;
}
}
