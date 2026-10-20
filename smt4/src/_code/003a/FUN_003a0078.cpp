/* NON_MATCHING: register allocation: retail keeps a/b in r5/r4, the ids in r9/r8 and the keys in r6/r7 (here r7/r6, r8/r9, r4/r5). */
#include "common.h"

extern "C" {

extern int FUN_00230ecc(u16 id);
extern int FUN_00230f44(u16 *entry);
extern int FUN_002ae3c0(u16 id);

/* Comparison of two entries: by sort key (FUN_00230ecc for kinds 2, 3 and 8, else 0), then by FUN_00230f44. */
int FUN_003a0078(u16 *a, u16 *b)
{
    s32 diff;
    u16 idA = *a;
    u16 idB = *b;
    s32 keyB = 0;
    s32 keyA = 0;
    s32 kind;

    kind = FUN_002ae3c0(idA);
    if (kind == 2 || kind == 3 || kind == 8) {
        keyA = FUN_00230ecc(idA);
    }
    kind = FUN_002ae3c0(idB);
    if (kind == 2 || kind == 3 || kind == 8) {
        keyB = FUN_00230ecc(idB);
    }
    diff = keyA - keyB;
    if (diff == 0) {
        diff = FUN_00230f44(a) - FUN_00230f44(b);
    }
    return diff;
}

}
