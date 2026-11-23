/* NON_MATCHING: 84 lines. Retail keeps the shared `FUN_004029f4(list, nextState, 0)` tail in case 5 (cases 2 and 4
 * branch to it; ours keeps case 2's copy) and lays the release block before that tail; the page-button pose
 * keeps its variant in r6 and re-forms the sprite address per call. */
#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "addon/PackageSelection.h"
#include "addon/ContentListScreen.h"

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
    /* 0x104 */ s8 ownsTextureNode;
    /* 0x105 */ u8 unk105[3];
    /* 0x108 */ s32 animationPhase;
    /* 0x10C */ u8 unk10C[0x40];
    /* 0x14C */ UiSpriteState firstSprite;
    /* 0x1D8 */ UiSpriteState secondSprite;
    /* 0x264 */ UiSpriteState thirdSprite;
    /* 0x2F0 */ u8 unk2F0[0x118];
    /* 0x408 */ u16 itemIds[0x12E];
    /* 0x664 */ PackageSelectableRecord* texture;
    /* 0x668 */ u8 firstFlag;
    /* 0x669 */ u8 secondFlag;
};

extern "C" {
void contentListWaitAndInitialize(ContentListState* list);
void FUN_004029f4(ContentListState* list, u32 state, u32 entry);
void FUN_00403e2c(ContentListState* list);
void* textureGetIndexedResource(u32 table);
void asdTMTexTableReleaseNode(u32 table, u32 node);
s32 useCounterIsFinished(void);
void useCounterRelease(void);
s32 useCounterGetCurrentValue(void);
void sortOwnerRun(ContentListState* list);
}

/* Poses the page button: variants 0 and 1 are its two resting keyframes (4, 5), 2 and 3 the pressed
 * ones (6, 7), which also switch to the pressed image. Inlined: retail tests all four variants against a
 * value that can only be 0 or 1 here (FUN_00402f58 poses the pressed keyframes 6 and 7 directly). */
static __inline void contentListPosePageButton(UiSpriteState *sprite, s32 variant)
{
    s32 key = 0;
    s32 image = 0;
    switch (variant) {
    case 0:
        key = 4;
        break;
    case 1:
        key = 5;
        break;
    case 2:
        key = 6;
        image = 1;
        break;
    case 3:
        key = 7;
        image = 1;
        break;
    }
    uiSpriteSetKeyframe(sprite, key, 0);
    uiSpriteSetImageKeyframe(sprite, image, 0);
}

// Drive content-list initialization, texture ownership, and sprite transitions.
extern "C" u32 FUN_00405268(ContentListState* list)
{
    switch (list->state) {
    case 1:
        contentListWaitAndInitialize(list);
        break;
    case 2:
        if (!uiSpriteAdvanceAnimation(&list->firstSprite, 1.0f)) {
            break;
        }
        FUN_004029f4(list, list->nextState, 0);
        break;
    case 3:
        FUN_00403e2c(list);
        break;
    case 4: {
        u16 table = list->texture->content.table;
        u16 node = list->texture->content.node;
        if (table == 0 || (textureGetIndexedResource(table) && asdTMTexTableNodeIsLoaded(table, node))) {
            FUN_004029f4(list, list->nextState, 0);
        }
        break;
    }
    case 5:
        if (!uiSpriteAdvanceAnimation(&list->secondSprite, 1.0f)) {
            break;
        }
        if (uiSpriteGetMode(&list->secondSprite) != 1) {
            u16 table = list->texture->content.table;
            u16 node = list->texture->content.node;
            if (table != 0 &&
                (!textureGetIndexedResource(table) ||
                 !asdTMTexTableNodeIsLoaded(table, node)) &&
                list->ownsTextureNode) {
                FUN_004029f4(list, 4, list->nextState);
                break;
            }
        } else if (list->ownsTextureNode) {
            asdTMTexTableReleaseNode(list->texture->content.table, list->texture->content.node);
            if (list->ownsTextureTable) {
                asdTMTexTableFreeEntry(0x32);
                list->ownsTextureTable = 0;
            }
            list->ownsTextureNode = 0;
        }
        FUN_004029f4(list, list->nextState, 0);
        break;
    case 6:
        if (uiSpriteAdvanceAnimation(&list->thirdSprite, 1.0f)) {
            if (uiSpriteGetMode(&list->thirdSprite) != 1) {
                FUN_004029f4(list, 7, 0);
                list->firstFlag = 0;
                list->secondFlag = 0;
            } else {
                contentListPosePageButton(&list->thirdSprite, uiSpriteGetOperationMode(&list->thirdSprite) == 7 ? 0 : 1);
                if (++list->animationPhase >= 2) {
                    list->animationPhase = 0;
                }
            }
        }
        break;
    case 7:
        FUN_00402f58((ContentListScreen *)list);
        break;
    case 8:
        if (useCounterIsFinished()) {
            useCounterRelease();
            FUN_004029f4(list, 3, 0);
        } else if (useCounterGetCurrentValue() != 0x69) {
            sortOwnerRun(list);
            list->texture = contentFindRecordById(list->itemIds[list->selection + list->scroll]);
        }
        break;
    }
    return 0;
}
