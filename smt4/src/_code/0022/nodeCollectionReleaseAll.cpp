#include "common.h"

extern "C" {

int nodeTreeReleaseGroup(u32 item);
int btlItemGroupRelease(u32 item);
int FUN_00211c90(u32 item);
int nodeTreeReleaseItemClearOwner(u32 item);

typedef struct Collection {
    /* 0x00 */ u32 *unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 countA;
    /* 0x10 */ s32 countB;
    /* 0x14 */ s32 countD;
    /* 0x18 */ s32 countC;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[0x30];
    /* 0x50 */ u32 itemsA[0x10];
    /* 0x90 */ u32 itemsB[0x10];
    /* 0xD0 */ u32 itemsD[0x10];
    /* 0x110 */ u32 itemsC[0x10];
} Collection;

/* Releases every item of the four lists and resets the collection. */
void nodeCollectionReleaseAll(Collection *collection)
{
    s32 i = 0;

    if (collection != NULL) {
        if (0 < collection->countA) {
            do {
                nodeTreeReleaseItemClearOwner(collection->itemsA[i]);
                i++;
            } while (i < collection->countA);
        }
        i = 0;
        if (i < collection->countB) {
            do {
                FUN_00211c90(collection->itemsB[i]);
                i++;
            } while (i < collection->countB);
        }
        i = 0;
        if (i < collection->countC) {
            do {
                btlItemGroupRelease(collection->itemsC[i]);
                i++;
            } while (i < collection->countC);
        }
        i = 0;
        if (i < collection->countD) {
            do {
                nodeTreeReleaseGroup(collection->itemsD[i]);
                i++;
            } while (i < collection->countD);
        }
        collection->countA = 0;
        collection->countB = 0;
        collection->countC = 0;
        collection->countD = 0;
        collection->unk1C = 0;
        collection->unk04 = 0;
        if (collection->unk00 != NULL) {
            *collection->unk00 = 0;
        }
    }
}

} /* extern "C" */
