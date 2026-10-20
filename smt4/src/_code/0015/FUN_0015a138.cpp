#include "common.h"

extern "C" {

typedef struct Slot {
    u8 unk00[0x6c];
    s16 index; /* 0x6c */
} Slot;

extern void FUN_0015a144(void *slot);

/* Forwards to the function that follows it in the binary. */
void FUN_0015a138(Slot *slot)
{
    slot->index = -1;
    FUN_0015a144(slot);
}

} /* extern "C" */
