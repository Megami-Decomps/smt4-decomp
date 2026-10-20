#include "shard/Shard0031.h"

extern "C" {

extern void nodeTreeReleaseItemClearOwner(u32 handle);
extern void FUN_002e5154(u32 handle);
extern void nodeGroupReleaseAlt(u32 handle);
extern void nodeGroupRelease(u32 handle);

/* Releases every handle in the four lists and empties the set. */
void handleSetReset(HandleSet *set)
{
    s32 i = 0;

    if (set != NULL) {
        for (; i < set->countA; i++) {
            nodeTreeReleaseItemClearOwner(set->listA[i]);
        }
        for (i = 0; i < set->countB; i++) {
            FUN_002e5154(set->listB[i]);
        }
        for (i = 0; i < set->countD; i++) {
            nodeGroupReleaseAlt(set->listD[i]);
        }
        for (i = 0; i < set->countC; i++) {
            nodeGroupRelease(set->listC[i]);
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
