#include "common.h"
struct ReflectionEntry { u8 unk00[4]; u8 state; };
extern "C" {
extern void *g_btlActionReflect;
ReflectionEntry *FUN_004102d8(void *reflection, s32 id, u32 category, u32 options);
/* Creates a reflection entry in state 4. */
void FUN_004fbd30(s32 id, u32 options) {
    ReflectionEntry *entry = FUN_004102d8(g_btlActionReflect, (s16)id, 0, options);
    entry->state = 4;
}
}
