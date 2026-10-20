#include "common.h"

extern "C" {

void FUN_00321a98(u32 *a, u32 *b);
u32 FUN_001ab854(void);
s32 FUN_003df57c(u32 id, u32 flag);
s32 FUN_004bcbb4(u32 owner, u32 id);

typedef struct Ref {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 kind;
} Ref;

/* Resolves both references (negative kind through FUN_003df57c, otherwise through FUN_004bcbb4) and calls FUN_00321a98 when they resolve to the same value. */
void FUN_002b2748(Ref *a, Ref *b)
{
    s32 first;
    s32 second;
    u32 owner;
    s32 diff;

    if (a->kind < 0) {
        first = FUN_003df57c(a->id, 1);
    } else {
        owner = FUN_001ab854();
        first = FUN_004bcbb4(owner, a->id);
    }
    if (b->kind < 0) {
        second = FUN_003df57c(b->id, 1);
    } else {
        owner = FUN_001ab854();
        second = FUN_004bcbb4(owner, b->id);
    }
    diff = second - first;
    if (diff == 0) {
        FUN_00321a98((u32 *)a, (u32 *)b);
        return;
    }
}

} /* extern "C" */
