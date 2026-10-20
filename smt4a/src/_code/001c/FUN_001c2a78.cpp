#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ f32 a;
    /* 0x04 */ f32 b;
    /* 0x08 */ f32 c;
    /* 0x0C */ u8 unk0C[0x18];
} Slot;                        /* 0x24 */

typedef struct Mixer {
    /* 0x0000 */ u8 unk0000[0x224];
    /* 0x0224 */ u32 slotCount;
    /* 0x0228 */ u8 unk0228[0x1E58];
    /* 0x2080 */ Slot slots[1];
} Mixer;

/* Sets field `a` of every slot whose bit is set in `mask` (bit 0 is slot 0), up to the slot count. */
void FUN_001c2a78(Mixer *mixer, u32 mask, f32 value)
{
    u32 i;

    i = 0;
    for (; (i < mixer->slotCount && (mask != 0)); mask = mask >> 1) {
        if ((mask & 1) != 0) {
            mixer->slots[i].a = value;
        }
        i = i + 1;
    }
}

} /* extern "C" */
