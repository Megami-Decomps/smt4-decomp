#include "shard/Shard0031.h"

extern "C" {

extern void FUN_0028322c(u32 handle);
extern void FUN_002e5154(u32 handle);
extern void FUN_00283428(u32 handle);
extern void FUN_002833d0(u32 handle);

/* Releases every handle in the four lists and empties the set. */
void handleSetReset(HandleSet *set)
{
    s32 i = 0;

    if (set != NULL) {
        for (; i < set->countA; i++) {
            FUN_0028322c(set->listA[i]);
        }
        for (i = 0; i < set->countB; i++) {
            FUN_002e5154(set->listB[i]);
        }
        for (i = 0; i < set->countD; i++) {
            FUN_00283428(set->listD[i]);
        }
        for (i = 0; i < set->countC; i++) {
            FUN_002833d0(set->listC[i]);
        }
        set->countA = 0;
        set->countB = 0;
        set->countD = 0;
        set->countC = 0;
        set->unk1C = 0;
        set->unk04 = 0;
        if (set->flag != NULL) {
            *set->flag = 0;
        }
    }
}

} /* extern "C" */
