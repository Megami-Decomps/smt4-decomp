#include "battle/btlReflect.h"

extern "C" {

ReflectAction *FUN_004102d8(void *reflection, s32 id, u32 category, u32 options);
/* Creates a reflection entry in state 40. */
void FUN_004fe7b0(s32 id, u32 options, u32 argument) {
    ReflectAction *entry = FUN_004102d8(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 40;
    entry->value = argument;
}
}
