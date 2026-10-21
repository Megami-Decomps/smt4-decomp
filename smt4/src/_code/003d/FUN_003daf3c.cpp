#include "common.h"

struct OwnerState {
    /* 0x0000 */ u8 unk00[0x1cfc];
    /* 0x1cfc */ u32 value;
};
extern "C" {
u32 FUN_002f6afc(u32 first, u32 second, s32 enabled, s32 mode);
/* Applies the requested mode and records its value. */
void FUN_003daf3c(OwnerState *owner, s32 value, u32 first, s32 second)
{
    owner->value = FUN_002f6afc(first, (u16)value, second != 0, second);
}
}
