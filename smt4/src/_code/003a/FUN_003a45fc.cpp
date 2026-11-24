/* NON_MATCHING: 15 lines. (1) Retail passes the record search's three accessor calls a scratch object at sp+4 (the
   slot it later reuses for listScrollerInitialize's sixth argument) and the two child calls one at sp+88; this build
   passes one object to all five. The search is written in place as in the module's FUN_003a0d64 (IDENTICAL so):
   Apocalypse's placeTextFindRecord search as an inline with its own scratch object gives retail's two slots here
   (9 lines) but costs FUN_003a0d64 14 lines unless it reads both fields into single-use locals, so it is not kept
   (wave 89 review); two handles in place give 43. (2) In the last loop retail sets rows to 9 before the loop and
   again next to its `moveq r1, #10` at the bottom; this build sets it once at the loop top. A single-use inline
   returning the row count (`s32 rows = 9; if (i == 7 || i == 8) rows = 10; return rows;`) passed straight to
   listScrollerInitialize is IDENTICAL here and in the Apocalypse twin, but no real function has that body. */
#include "common.h"
#include "shop/CellList.h"
#include "quest_center/QuestUnlockConditions.h"
#include "gamedata/PlaceRecordTable.h"
#include "shop/PlaceScene.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

u16 *statisticsGetCounter(u8 bank, u32 row, u32 column);
u32 questEvaluateUnlockConditions(const QuestUnlockConditions *conditions);
s32 gameTestIndexedAuxiliaryFlag(s32 index);
u32 contentGetEntryKind(u32 id);
void listScrollerInitialize(PlaceListCursor *cursor, s32 rows, s32 count, s32 current, s32 first, s32 second);
void listCursorSetPage(PlaceListCursor *cursor, s32 page);

/* Fills the nine tab lists of the place window with the entries of the current place, flags those
 * that are locked or unseen, and opens their list windows. Returns whether any entry is active. */
u32 FUN_003a45fc(PlaceScene *scene)
{
    u32 anyActive = 0;

    for (s32 i = 0; i < PLACE_TAB_COUNT; i++) {
        CellList *tab = &scene->tabs[i];
        tab->count = 0;
    }

    Table17Handle table;
    u32 kind = scene->placeKind;
    s32 key = scene->placeKey;
    s32 found = -1;
    PlaceRecord *records = dataTable17Sub1GetRecord(&table, 0);
    for (s32 i = 0; i < dataTable17Sub1GetCount(&table); i++) {
        if (records[i].kind == kind && records[i].key == key) {
            found = i;
            break;
        }
    }

    const QuestUnlockConditions *entries = dataTable17Sub1ChildGetEntries(&table, found);
    s32 count = dataTable17Sub1ChildGetCount(&table, found);
    for (s32 i = 0; i < count; i++) {
        u32 id = entries[i].unk00;
        if (id == 0) {
            break;
        }
        u32 state = questEvaluateUnlockConditions(&entries[i]);
        if (state != 0) {
            u16 locked = 0;
            s16 active = 0;
            if (state == 2 && gameTestIndexedAuxiliaryFlag(id) == 0) {
                locked = 1;
            }
            u16 *progress;
            switch (contentGetEntryKind(id)) {
            case 2:
                progress = statisticsGetCounter(scene->placeKind, scene->placeKey, 0);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[0], id, locked, active, *progress & 0xFF);
                break;
            case 3:
                progress = statisticsGetCounter(scene->placeKind, scene->placeKey, 1);
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
                progress = statisticsGetCounter(scene->placeKind, scene->placeKey, 2);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[3], id, locked, active, *progress & 0xFF);
                break;
            case 5:
                progress = statisticsGetCounter(scene->placeKind, scene->placeKey, 3);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[4], id, locked, active, *progress & 0xFF);
                break;
            case 6:
                progress = statisticsGetCounter(scene->placeKind, scene->placeKey, 4);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[5], id, locked, active, *progress & 0xFF);
                break;
            case 7:
                progress = statisticsGetCounter(scene->placeKind, scene->placeKey, 5);
                if (progress != NULL && *progress != 0) {
                    active = 1;
                    anyActive = 1;
                }
                cellListAppend(&scene->tabs[6], id, locked, active, *progress & 0xFF);
                break;
            case 1:
                progress = statisticsGetCounter(scene->placeKind, scene->placeKey, 0);
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

    for (s32 i = 0; i < PLACE_TAB_COUNT; i++) {
        s32 rows = (i == 7 || i == 8) ? 10 : 9;
        s32 special = i == 7 || i == 8;
        listScrollerInitialize(&scene->cursors[i], rows, scene->tabs[i].count, 0, 1, special);
        asdDebugHookPtrInt(&scene->cursors[i], 1);
        scene->cursors[i].enabled = 1;
        listCursorSetPage(&scene->cursors[i], 0);
    }
    return anyActive;
}

} /* extern "C" */
