#include "common.h"

extern "C" {

void FUN_0016cae0(void);

typedef struct Holder {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 flags;
    /* 0x008 */ u8 unk008[0x254];
    /* 0x25C */ s32 pending;
} Holder;

/* Calls FUN_0016cae0 when bit 0 of `flags` is clear and there is something pending. */
void holderFlushPending(Holder *object)
{
    if ((object->flags & 1) == 0 && object->pending != 0) {
        FUN_0016cae0();
        return;
    }
}

} /* extern "C" */
