#include "common.h"

extern "C" {

void FUN_001b6660(u32 queue, u8 *member);
u32 FUN_001c35d8(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 member88[1];
} Holder;

/* Runs FUN_001b6660 for the member at 0x88 with the queue FUN_001c35d8 returns; returns the object. */
Holder *FUN_001b9f70(Holder *object)
{
    u32 queue;

    queue = FUN_001c35d8();
    FUN_001b6660(queue, object->member88);
    return object;
}

} /* extern "C" */
