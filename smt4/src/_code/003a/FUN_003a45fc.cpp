/* NON_MATCHING: code, registers and branch layout match retail; only the stack frame differs (retail keeps the two table-handle temporaries at sp+4 and sp+88 and its tab-pointer spill slots in a different order, frame 92 vs 108 bytes). */
#include "common.h"
#include "shop/CellList.h"
#include "quest_center/QuestUnlockConditions.h"
#include "AsdSDK/AsdDebugHooks.h"

#define PLACE_TAB_COUNT 9

/* A record of data table 0x17/1 (0x68 bytes). */
struct PlaceListRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 key;
    /* 0x24 */ u16 kind;
    /* 0x26 */ u8 unk26[0x42];
};

/* The cursor of one tab's list window (0x74 bytes). */
struct PlaceListCursor {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 enabled;
    /* 0x0E */ u8 unk0E[0x66];
};

/* The place window's work area (only the fields the tab lists touch). */
struct PlaceListScene {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u8 placeKind;
    /* 0x0015 */ u8 unk0015[3];
    /* 0x0018 */ s32 placeKey;
    /* 0x001C */ u8 unk001C[0x864];
    /* 0x0880 */ PlaceListCursor cursors[PLACE_TAB_COUNT];
    /* 0x0C94 */ CellList tabs[PLACE_TAB_COUNT];
};

/* The scratch object the data table 0x17/1 accessors take (and ignore) as their first argument. */
struct Table17Handle {
    u32 words[2];
    Table17Handle() {}
};

extern "C" {

u16 *FUN_002c0a2c(u8 bank, u32 row, u32 column);
PlaceListRecord *dataTable17Sub1GetRecord(const Table17Handle &ignored, s32 index);
s32 dataTable17Sub1GetCount(const Table17Handle &ignored);
const QuestUnlockConditions *dataTable17Sub1ChildGetEntries(const Table17Handle &ignored, s32 index);
s32 dataTable17Sub1ChildGetCount(const Table17Handle &ignored, s32 index);
u32 questEvaluateUnlockConditions(const QuestUnlockConditions *conditions);
s32 gameTestIndexedAuxiliaryFlag(s32 index);
u32 contentGetEntryKind(u32 id);
void FUN_00233730(PlaceListCursor *cursor, s32 rows, s32 count, s32 current, s32 first, s32 second);
void listCursorSetPage(PlaceListCursor *cursor, s32 page);

/* Fills the nine tab lists of the place window with the entries of the current place, flags those
 * that are locked or unseen, and opens their list windows. Returns whether any entry is active. */
u32 FUN_003a45fc(PlaceListScene *scene)
{
    u32 anyActive = 0;
    s32 i;

    for (i = 0; i < PLACE_TAB_COUNT; i++) {
        CellList *tab = &scene->tabs[i];
        tab->count = 0;
    }

    u32 kind = scene->placeKind;
    s32 key = scene->placeKey;
    s32 found = -1;
    PlaceListRecord *records = dataTable17Sub1GetRecord(Table17Handle(), 0);
    for (i = 0; i < dataTable17Sub1GetCount(Table17Handle()); i++) {
        if (records[i].kind == kind && records[i].key == key) {
            found = i;
            break;
        }
    }

    const QuestUnlockConditions *entries = dataTable17Sub1ChildGetEntries(Table17Handle(), found);
    s32 count = dataTable17Sub1ChildGetCount(Table17Handle(), found);
    for (i = 0; i < count; i++) {
        const QuestUnlockConditions *entry = &entries[i];
        u32 id = entry->unk00;
        if (id == 0) {
            break;
        }
        u32 state = questEvaluateUnlockConditions(entry);
        if (state != 0) {
            u16 locked = 0;
            s16 active = 0;
            if (state == 2 && gameTestIndexedAuxiliaryFlag(id) == 0) {
                locked = 1;
            }
            u16 *progress;
            switch (contentGetEntryKind(id)) {
            case 2:
                progress = FUN_002c0a2c(scene->placeKind, scene->placeKey, 0);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[0], id, locked, active, *progress & 0xFF);
                break;
            case 3:
                progress = FUN_002c0a2c(scene->placeKind, scene->placeKey, 1);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[1], id, locked, active, *progress & 0xFF);
                break;
            case 8:
                cellListAppend(&scene->tabs[2], id, locked, 0, 0);
                break;
            case 4:
                progress = FUN_002c0a2c(scene->placeKind, scene->placeKey, 2);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[3], id, locked, active, *progress & 0xFF);
                break;
            case 5:
                progress = FUN_002c0a2c(scene->placeKind, scene->placeKey, 3);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[4], id, locked, active, *progress & 0xFF);
                break;
            case 6:
                progress = FUN_002c0a2c(scene->placeKind, scene->placeKey, 4);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[5], id, locked, active, *progress & 0xFF);
                break;
            case 7:
                progress = FUN_002c0a2c(scene->placeKind, scene->placeKey, 5);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[6], id, locked, active, *progress & 0xFF);
                break;
            case 1:
                progress = FUN_002c0a2c(scene->placeKind, scene->placeKey, 0);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[7], id, locked, active, *progress & 0xFF);
                break;
            default:
                break;
            }
        }
    }

    for (i = 0; i < PLACE_TAB_COUNT; i++) {
        s32 rows = (i == 7 || i == 8) ? 10 : 9;
        s32 special = i == 7 || i == 8;
        FUN_00233730(&scene->cursors[i], rows, scene->tabs[i].count, 0, 1, special);
        asdDebugHookPtrInt(&scene->cursors[i], 1);
        scene->cursors[i].enabled = 1;
        listCursorSetPage(&scene->cursors[i], 0);
    }
    return anyActive;
}

} /* extern "C" */
