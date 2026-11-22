#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

typedef struct FlagArea {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 bits[1];
} FlagArea;


/* Sets or clears flag bit `id` in the area's bit array. */
void gameDataArea28350SetBit(u32 id, s32 set)
{
    FlagArea *area = reinterpret_cast<FlagArea *>(gameDataBlockGetArea28350());
    s32 byte = id / 8;
    s32 bit = id % 8;
    u8 *flag = &area->bits[byte];

    if (set != 0) {
        *flag |= 1 << bit;
    } else {
        *flag &= ~(1 << bit);
    }
}

} /* extern "C" */
