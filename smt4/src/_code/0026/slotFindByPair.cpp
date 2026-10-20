/* NON_MATCHING: register allocation only: the same code with different scratch registers (retail keeps the table in r2, the argument copy in r3 and the loaded id in ip) */
#include "common.h"

extern "C" {

#define SLOT_COUNT_0026FA44 0x3e7

typedef struct Slot0026fa44 {
    /* 0x00 */ s32 idA;        /* -1 ends the used slots */
    /* 0x04 */ s32 idB;
    /* 0x08 */ u8 unk08[0x54];
} Slot0026fa44;

extern Slot0026fa44 DAT_00448e18[SLOT_COUNT_0026FA44]; /* 0x448e18 */

/* Index of the slot holding the pair (a, b), -1 when absent. */
s32 slotFindByPair(s32 a, s32 b)
{
    s32 i;

    for (i = 0; i < SLOT_COUNT_0026FA44; i++) {
        s32 id = DAT_00448e18[i].idA;

        if (id == -1) {
            return -1;
        }
        if (id == a && DAT_00448e18[i].idB == b) {
            return i;
        }
    }
    return -1;
}

} /* extern "C" */
