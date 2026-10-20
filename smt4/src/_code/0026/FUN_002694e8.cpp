#include "common.h"

extern "C" {

typedef struct Slot {
    u8 unk00[0x14];
    s32 value; /* 0x14 */
} Slot;

extern void FUN_002694f8(s32 value);

/* Forwards to the function that follows it in the binary. */
void FUN_002694e8(Slot *slot, s32 value)
{
    slot->value = value;
    FUN_002694f8(value);
}

} /* extern "C" */
