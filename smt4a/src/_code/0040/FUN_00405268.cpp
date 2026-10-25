/* NON_MATCHING: ARMCC folds sprite-field addresses and merges transition tails differently; retail also retains extra branches in its animation-variant selection. */
#include "ui/UiSpriteState.h"

struct ContentTextureDescriptor {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 table;
    /* 0x08 */ u16 node;
};

struct ContentListState {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 state;
    /* 0x005 */ u8 nextState;
    /* 0x006 */ u8 unk006[0x1E];
    /* 0x024 */ u8 ownsTextureTable;
    /* 0x025 */ u8 unk025[0xCF];
    /* 0x0F4 */ s32 scroll;
    /* 0x0F8 */ s32 selection;
    /* 0x0FC */ u8 unk0FC[8];
    /* 0x104 */ u8 ownsTextureNode;
    /* 0x105 */ u8 unk105[3];
    /* 0x108 */ s32 animationPhase;
    /* 0x10C */ u8 unk10C[0x40];
    /* 0x14C */ UiSpriteState firstSprite;
    /* 0x1D8 */ UiSpriteState secondSprite;
    /* 0x264 */ UiSpriteState thirdSprite;
    /* 0x2F0 */ u8 unk2F0[0x118];
    /* 0x408 */ u16 itemIds[0x12E];
    /* 0x664 */ ContentTextureDescriptor* texture;
    /* 0x668 */ u8 firstFlag;
    /* 0x669 */ u8 secondFlag;
};

extern "C" {
void contentListWaitAndInitialize(ContentListState* list);
s32 FUN_00163aa4(UiSpriteState* sprite, f32 speed);
void FUN_004029f4(ContentListState* list, u32 state, u32 entry);
void FUN_00403e2c(ContentListState* list);
void* textureGetIndexedResource(u32 table);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void asdTMTexTableFreeEntry(u32 table);
void uiSpriteSetKeyframe(UiSpriteState* sprite, s16 frame, u32 flags);
void uiSpriteSetImageKeyframe(UiSpriteState* sprite, s16 frame, u32 flags);
void FUN_00402f58(ContentListState* list);
s32 useCounterIsFinished(void);
void useCounterRelease(void);
s32 useCounterGetCurrentValue(void);
void sortOwnerRun(ContentListState* list);
ContentTextureDescriptor* FUN_0039b984(u32 id);
}

// Drive content-list initialization, texture ownership, and sprite transitions.
extern "C" u32 FUN_00405268(ContentListState* list)
{
    switch (list->state) {
    case 1:
        contentListWaitAndInitialize(list);
        break;
    case 2:
        if (FUN_00163aa4(&list->firstSprite, 1.0f)) {
            FUN_004029f4(list, list->nextState, 0);
        }
        break;
    case 3:
        FUN_00403e2c(list);
        break;
    case 4: {
        u16 table = list->texture->table;
        u16 node = list->texture->node;
        if (table != 0) {
            if (!textureGetIndexedResource(table) ||
                !asdTMTexTableNodeIsLoaded(table, node)) {
                break;
            }
        }
        FUN_004029f4(list, list->nextState, 0);
        break;
    }
    case 5:
        if (!FUN_00163aa4(&list->secondSprite, 1.0f)) {
            break;
        }
        if (list->secondSprite.mode != 1) {
            u16 table = list->texture->table;
            u16 node = list->texture->node;
            if (table != 0 &&
                (!textureGetIndexedResource(table) ||
                 !asdTMTexTableNodeIsLoaded(table, node)) &&
                list->ownsTextureNode) {
                FUN_004029f4(list, 4, list->nextState);
                break;
            }
        } else if (list->ownsTextureNode) {
            asdTMTexTableReleaseNode(list->texture->table, list->texture->node);
            if (list->ownsTextureTable) {
                asdTMTexTableFreeEntry(0x32);
                list->ownsTextureTable = 0;
            }
            list->ownsTextureNode = 0;
        }
        FUN_004029f4(list, list->nextState, 0);
        break;
    case 6:
        if (FUN_00163aa4(&list->thirdSprite, 1.0f)) {
            if (list->thirdSprite.mode != 1) {
                FUN_004029f4(list, 7, 0);
                list->firstFlag = 0;
                list->secondFlag = 0;
            } else {
                s16 frame = list->thirdSprite.animation == 7 ? 4 : 5;
                uiSpriteSetKeyframe(&list->thirdSprite, frame, 0);
                uiSpriteSetImageKeyframe(&list->thirdSprite, 0, 0);
                if (++list->animationPhase > 1) {
                    list->animationPhase = 0;
                }
            }
        }
        break;
    case 7:
        FUN_00402f58(list);
        break;
    case 8:
        if (useCounterIsFinished()) {
            useCounterRelease();
            FUN_004029f4(list, 3, 0);
        } else if (useCounterGetCurrentValue() != 0x69) {
            sortOwnerRun(list);
            list->texture = FUN_0039b984(list->itemIds[list->selection + list->scroll]);
        }
        break;
    }
    return 0;
}
