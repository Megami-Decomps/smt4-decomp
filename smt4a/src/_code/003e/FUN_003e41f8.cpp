/* NON_MATCHING: register allocation only: retail keeps the shift amount in r3 and the constant 1 in r2; built uses r2 and r1. */
#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

typedef struct FlagArea {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 bits[1];
} FlagArea;


/* Sets or clears flag bit `id` in the area's bit array. */
void FUN_003e41f8(u32 id, s32 set)
{
    FlagArea *area = reinterpret_cast<FlagArea *>(gameDataBlockGetArea28350());
    u32 mask = 1 << (id & 7);
    u8 *byte = &area->bits[id >> 3];

    if (set != 0) {
        *byte |= mask;
    } else {
        *byte &= ~mask;
    }
}

} /* extern "C" */
