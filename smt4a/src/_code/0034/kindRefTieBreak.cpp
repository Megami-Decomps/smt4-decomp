#include "shard/Shard0034.h"

extern "C" {

extern s32 FUN_003df57c(u32 id, s32 flag);
extern u32 FUN_001ab854(s32 index);
extern s32 FUN_004bcbb4(u32 data, u32 id);
extern void FUN_003811ec(KindRef *a, KindRef *b);

/* If the two references rate the same, hands them to FUN_003811ec. */
void kindRefTieBreak(KindRef *a, KindRef *b)
{
    s32 rankA;
    s32 rankB;
    s32 diff;

    if (a->kind < 0) {
        rankA = FUN_003df57c(a->id, 1);
    } else {
        rankA = FUN_004bcbb4(FUN_001ab854(a->kind), a->id);
    }
    if (b->kind < 0) {
        rankB = FUN_003df57c(b->id, 1);
    } else {
        rankB = FUN_004bcbb4(FUN_001ab854(b->kind), b->id);
    }
    diff = rankA - rankB;
    if (diff == 0) {
        FUN_003811ec(a, b);
    }
}

} /* extern "C" */
