/* The IV shop scene shared by the category, appraisal, loading and transaction handlers. */
#ifndef S2_SCENE3A_H
#define S2_SCENE3A_H

#include "shop/EquipmentMenuPage.h"
#include "shop/ShopPanel.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "ui/UiSpriteState.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match7_NumericStepper.h"
#include "script/ScriptVm.h"
#include <stddef.h>

struct Scene3a;
typedef void (Scene3a::*Scene3aFunc)();
typedef ShopPanel MenuView;

enum { SCENE3A_SLOTS = 9 };
typedef EquipmentMenuCursor Scene3aSlotInfo;
typedef EquipmentMenuItem Scene3aEntry;
typedef EquipmentMenuPage Scene3aList;
/* A row of the appraisal list: two item ids and a count. The row shows `id` with its price when that is a
 * kind-10 item, otherwise `item` and under it `id`. */
struct Scene3aTransactionRecord { u16 item, id, quantity; };
enum {
    SCENE3A_STATE_IDLE, SCENE3A_STATE_START, SCENE3A_STATE_RUNNING,
    SCENE3A_STATE_STOP, SCENE3A_STATE_FINISH
};
/* The screen's eight animated sprites (uiAnimationAdvanceChannel, FUN_00233240). */
struct Scene3aSprites {
    /* 0x000 */ u8 unk00[0x20];
    /* 0x020 */ UiSpriteState sprites[8];   /* 6 slides the quantity panel in, 7 out */
};
/* Phase and animation substep change together when an opening page selects its destination. */
struct ShopPageTransition {
    /* 0x00 */ s32 phase;
    /* 0x04 */ s32 substep;
};
struct Scene3a {
    /* 0x00000 */ u32 flags;                /* 0x1000: the quantity panel is on screen */
    union {
        /* 0x00004 */ ShopPageTransition pageTransition;
        struct {
            ShopPageTransition transition;
            u8 unk0C[4];
            /* 0x00010 */ s32 variant;
            /* 0x00014 */ u8 forceOverride;
            u8 unk15[3];
            /* 0x00018 */ s32 context;
        } help;
        struct {
            ShopPageTransition transition;
            /* 0x0000C */ s32 frames;       /* frames spent in the current substep */
        } wait;
        struct {
            ShopPageTransition transition;
            u8 unk0C[0x10];
            /* 0x0001C */ u8 kindTenFrame;  /* the appraisal list's rows of kind-10 items take their own frame */
        } appraisal;
        struct {
            ShopPageTransition transition;
            u8 unk0C[0x12];
            /* 0x0001E */ u8 requested;
            /* 0x0001F */ u8 ready;
        } preview;
    };
    /* Callback storage ends no later than the script resource at 0x160. */
    /* 0x00020 */ struct { Scene3aFunc func; } updateFuncs[0x28];
    /* 0x00160 */ void *scriptTable;        /* the shop script's entry names (tableGroupFindEntryIndex) */
    /* 0x00164 */ u8 unk164[4];
    /* 0x00168 */ ScriptProcess *process;   /* the shop script */
    /* 0x0016C */ u8 unk16C[0x210];
    /* 0x0037C */ u32 listId;
    union {
        /* 0x00380 */ AsdTextureRegion region;
        struct {
            u8 unk380[0x14];
            /* 0x00394 */ EmptyRange rect;  /* where the quantity panel is drawn */
        } panel;
    };
    /* 0x003A8 */ Scene3aSprites animation;
    /* 0x00828 */ u8 touchSelection[0x34];  /* the list's touch selection (Obj55ca08) */
    /* 0x0085C */ MenuView *view;
    /* 0x00860 */ s32 slot;
    /* 0x00864 */ s32 tab;
    /* 0x00868 */ NumericStepper quantity;  /* how many of the selected item to trade */
    /* 0x00880 */ Scene3aSlotInfo slotInfo[SCENE3A_SLOTS];
    /* 0x00C94 */ Scene3aList lists[SCENE3A_SLOTS];
    /* 0x09CA8 */ EquipmentMenuCursor list; // appraisal list
    struct {
        /* 0x09D1C */ Scene3aTransactionRecord records[0x2000];
        /* 0x15D1C */ u16 count;
        /* 0x15D1E */ u8 unk15D1E[2];
        /* 0x15D20 */ u32 totalAmount;
    } transaction;
    /* 0x15D24 */ s32 state;
    union {
        u8 unk15d28[0x20];
        struct {
            /* 0x15D28 */ u32 item;
            u8 unk15d2c[0x1C];
        } equipmentPreview;
    };
    /* 0x15D48 */ void *modelManager;
    /* 0x15D4C */ u8 unk15d4c[8];
    /* 0x15D54 */ u32 selectedItem;
    /* 0x15D58 */ u8 unk15D58[0x10];
    /* 0x15D68 */ s32 quantityIndex;        /* the list index the quantity panel was set up for, -1: none */
};
typedef char Scene3aPageLayoutCheck[offsetof(Scene3a, listId) == 0x37C &&
    offsetof(Scene3a, region) == 0x380 && offsetof(Scene3a, view) == 0x85C &&
    offsetof(Scene3a, slotInfo) == 0x880 && offsetof(Scene3a, lists) == 0xC94 &&
    offsetof(Scene3a, list) == 0x9CA8 ? 1 : -1];
typedef char Scene3aTransactionLayoutCheck[sizeof(Scene3aEntry) == 4 &&
    sizeof(Scene3aTransactionRecord) == 6 && offsetof(Scene3aEntry, attributes) == 2 &&
    offsetof(Scene3a, transaction.records) == 0x9D1C && offsetof(Scene3a, transaction.count) == 0x15D1C &&
    offsetof(Scene3a, transaction.totalAmount) == 0x15D20 && offsetof(Scene3a, selectedItem) == 0x15D54 &&
    offsetof(Scene3a, quantityIndex) == 0x15D68 ? 1 : -1];
typedef char Scene3aQuantityLayoutCheck[offsetof(Scene3a, pageTransition) == 4 &&
    offsetof(Scene3a, pageTransition.substep) == 8 &&
    offsetof(Scene3a, wait.frames) == 0xC &&
    offsetof(Scene3a, appraisal.kindTenFrame) == 0x1C &&
    offsetof(Scene3a, scriptTable) == 0x160 && offsetof(Scene3a, process) == 0x168 &&
    offsetof(Scene3a, panel.rect) == 0x394 && offsetof(Scene3a, animation) == 0x3A8 &&
    offsetof(Scene3a, touchSelection) == 0x828 && offsetof(Scene3a, quantity) == 0x868 &&
    sizeof(NumericStepper) == 0x18 ? 1 : -1];
#endif
