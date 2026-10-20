#include "common.h"

extern "C" {

s32 vcallSlot12IfValid(u32 object);
void FUN_00195fc8(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 tagged;      /* object pointer, bit 0 set when FUN_00195fc8 must run first */
} Holder;

/* Releases the held object: runs FUN_00195fc8 first when the tag bit is set, calls its slot-12 method and clears the field; returns 0. */
u32 FUN_002e0c48(Holder *holder)
{
    if ((holder->tagged & 0xFFFFFFFE) != 0) {
        if ((holder->tagged & 1) != 0) {
            FUN_00195fc8();
        }
        vcallSlot12IfValid(holder->tagged & 0xFFFFFFFE);
        holder->tagged = 0;
    }
    return 0;
}

} /* extern "C" */
