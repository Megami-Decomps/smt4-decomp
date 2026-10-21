#include "common.h"

struct ReflectState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 slot;
    /* 0x05 */ u8 unk05[0x23];
    /* 0x28 */ u32 active;
};
extern "C" {
extern ReflectState *g_btlActionReflect;
ReflectState *FUN_0022699c(ReflectState *state, u32 slot, u32 kind, u32 extra);
/* Updates a battle reflection slot. */
void FUN_003dda20(u32 slot, u32 extra, u32 value)
{
    slot = (s16)slot;
    ReflectState *entry = FUN_0022699c(g_btlActionReflect, slot, 0, extra);
    entry->slot = 47;
    entry->active = value;
}
}
