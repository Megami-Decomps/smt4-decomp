/* NON_MATCHING: same stores and calls; retail does not shrink-wrap the null test (push first, `movs r5, r0`, predicated first store, branch to the pop at the end), built returns before the push */
#include "common.h"

extern "C" {

struct OwnerSlot {
    /* 0x00 */ u32 owner;
};

struct ItemOwnerNode {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ u32 active;
    /* 0x028 */ u32 unk28;
    /* 0x02c */ u32 unk2c;
    /* 0x030 */ u32 unk30;
    /* 0x034 */ u8 unk34[0x48 - 0x34];
    /* 0x048 */ f32 scaleX;
    /* 0x04c */ f32 scaleY;
    /* 0x050 */ f32 scaleZ;
    /* 0x054 */ u8 unk54[0x254 - 0x54];
    /* 0x254 */ OwnerSlot *slot;
    /* 0x258 */ u8 unk258[0x264 - 0x258];
    /* 0x264 */ void *items[50];
};

void nodeTreeReleaseItemClearOwner(void *item);
void nodeTreeReleaseItem(void *item);

/* Releases the node's 50 items, resets its state and scale, clears its owner link and releases the node itself. */
void FUN_002e5154(ItemOwnerNode *node)
{
    s32 i;

    if (node != NULL) {
        node->active = 0;
        for (i = 0; i < 50; i++) {
            nodeTreeReleaseItemClearOwner(node->items[i]);
        }
        node->active = 0;
        node->unk28 = 0;
        node->unk2c = 0;
        node->unk30 = 0;
        node->scaleX = 0.0f;
        node->scaleY = 0.0f;
        node->scaleZ = 0.0f;
        if (node->slot != NULL) {
            node->slot->owner = 0;
        }
        nodeTreeReleaseItem(node);
    }
}

} /* extern "C" */
