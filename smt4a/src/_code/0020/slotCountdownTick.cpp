#include "common.h"

/* A work block with a countdown at +0x38A6 and four slot values after it (negative = empty). */
struct SlotCountdown {
    /* 0x0000 */ u8 unk0000[0x38A6];
    /* 0x38A6 */ s16 countdown;
    /* 0x38A8 */ s16 slots[4];
};

extern "C" {

/* Counts the countdown down; when it runs out, reloads it with the number of filled slots. */
void slotCountdownTick(SlotCountdown *work)
{
    work->countdown--;
    if (work->countdown <= 0) {
        work->countdown = 0;
        for (s32 i = 0; i < 4; i++) {
            if (work->slots[i] >= 0) {
                work->countdown++;
            }
        }
    }
}

} /* extern "C" */
