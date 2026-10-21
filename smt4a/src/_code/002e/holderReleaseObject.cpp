#include "common.h"

extern "C" {

s32 vcallSlot12IfValid(u32 object);
void sysFatalBreak(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 tagged;      /* object pointer, bit 0 set when sysFatalBreak must run first */
} Holder;

/* Releases the held object: runs sysFatalBreak first when the tag bit is set, calls its slot-12 method and clears the field; returns 0. */
u32 holderReleaseObject(Holder *holder)
{
    if ((holder->tagged & 0xFFFFFFFE) != 0) {
        if ((holder->tagged & 1) != 0) {
            sysFatalBreak();
        }
        vcallSlot12IfValid(holder->tagged & 0xFFFFFFFE);
        holder->tagged = 0;
    }
    return 0;
}

} /* extern "C" */
