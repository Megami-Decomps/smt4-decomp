/* The IV shop scene shared by the category, appraisal, loading and transaction handlers. */
#ifndef S2_SCENE3A_H
#define S2_SCENE3A_H

#include "shop/EquipmentMenuPage.h"
#include "shop/ShopPanel.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include <stddef.h>

struct Scene3a;
typedef void (Scene3a::*Scene3aFunc)();
typedef ShopPanel MenuView;

enum { SCENE3A_SLOTS = 9 };
typedef EquipmentMenuCursor Scene3aSlotInfo;
typedef EquipmentMenuItem Scene3aEntry;
typedef EquipmentMenuPage Scene3aList;
struct Scene3aTransactionRecord { u16 unk00, id, quantity; };
enum {
    SCENE3A_STATE_IDLE, SCENE3A_STATE_START, SCENE3A_STATE_RUNNING,
    SCENE3A_STATE_STOP, SCENE3A_STATE_FINISH
};
struct Scene3a {
    /* 0x00000 */ u32 flags;
    /* 0x00004 */ s32 phase;
    union {
        /* 0x00008 */ s32 substep;
        struct {
            u8 unk08[8];
            /* 0x00010 */ s32 variant;
            /* 0x00014 */ u8 forceOverride;
            u8 unk15[3];
            /* 0x00018 */ s32 context;
        } help;
        struct {
            u8 unk08BeforePreview[0x16];
            /* 0x0001E */ u8 requested;
            /* 0x0001F */ u8 ready;
        } preview;
    };
    /* Callback storage ends no later than the script resource at 0x160. */
    /* 0x00020 */ struct { Scene3aFunc func; } updateFuncs[0x28];
    /* 0x00160 */ u8 unk160[0x21C];
    /* 0x0037C */ u32 listId;
    /* 0x00380 */ AsdTextureRegion region;
    /* 0x003A0 */ u8 unk3A0[0x4BC];
    /* 0x0085C */ MenuView *view;
    /* 0x00860 */ s32 slot;
    /* 0x00864 */ s32 tab;
    /* 0x00868 */ u8 unk868[0x18];
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
};
typedef char Scene3aPageLayoutCheck[offsetof(Scene3a, listId) == 0x37C &&
    offsetof(Scene3a, region) == 0x380 && offsetof(Scene3a, view) == 0x85C &&
    offsetof(Scene3a, slotInfo) == 0x880 && offsetof(Scene3a, lists) == 0xC94 &&
    offsetof(Scene3a, list) == 0x9CA8 ? 1 : -1];
typedef char Scene3aTransactionLayoutCheck[sizeof(Scene3aEntry) == 4 &&
    sizeof(Scene3aTransactionRecord) == 6 && offsetof(Scene3aEntry, attributes) == 2 &&
    offsetof(Scene3a, transaction.records) == 0x9D1C && offsetof(Scene3a, transaction.count) == 0x15D1C &&
    offsetof(Scene3a, transaction.totalAmount) == 0x15D20 && sizeof(Scene3a) == 0x15D58 ? 1 : -1];
#endif
