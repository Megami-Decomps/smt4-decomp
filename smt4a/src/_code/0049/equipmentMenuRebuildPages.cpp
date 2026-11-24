/* NON_MATCHING: 3 rows by shape (13 raw), in the scroller loop's head only: retail loads the page size 9 in the
 * loop-back block (`mov r1, #9; moveq r1, #10` after the compare) and once more on the way in
 * (`movne r1, #9`), where this build loads it once in the block both paths reach. */
#include "shard/Shard0049.h"
#include "shard/W6_W6Match5_StatisticsBanks.h"
#include "addon/AocEntryKind.h"
#include "quest_center/QuestUnlockConditions.h"
#include "shop/CellList.h"
#include "ui/PlaceTextTransition.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

u32 questEvaluateUnlockConditions(const QuestUnlockConditions *conditions);
s32 gameTestIndexedAuxiliaryFlag(s32 index);
StatisticsCounter *statisticsGetCounter(s32 bank, s32 row, s32 column);
void listScrollerInitialize(EquipmentMenuCursor *cursor, s32 visible, s32 total, u8 direction, s32 unused,
                            s32 option);
void listCursorSetPage(EquipmentMenuCursor *cursor, u8 page);

enum {
    EQUIPMENT_MENU_PAGES = 9,
    EQUIPMENT_BONUS_ITEM = 0x7b2 /* offered at area 1, location 5 besides the place's stock */
};

/* Rebuilds the equipment shop's nine item pages from the stock of its place (the data table 0x17 record of
 * the menu's area and location): each unlocked row goes to the page of its content kind with its stock
 * counter. Returns whether any counted row is in stock. */
u32 equipmentMenuRebuildPages(EquipmentMenuState *menu)
{
    u32 anyInStock = 0;
    for (s32 page = 0; page < EQUIPMENT_MENU_PAGES; page++) {
        EquipmentMenuPage *items = &menu->pages[page];
        items->count = 0;
    }

    s32 selected = placeTextFindRecord(menu->place.area, menu->place.location);

    PlaceTextTableCursor stockCursor;
    const QuestUnlockConditions *stock = dataTable17Sub1ChildGetEntries(&stockCursor, selected);
    s32 stockCount = dataTable17Sub1ChildGetCount(&stockCursor, selected);
    for (s32 row = 0; row < stockCount; row++) {
        s32 id = stock[row].unk00;
        if (id == 0) {
            break;
        }
        u32 unlock = questEvaluateUnlockConditions(&stock[row]);
        if (unlock == 0) {
            continue;
        }
        u16 isNew = 0;
        s16 inStock = 0;
        if (unlock == 2 && gameTestIndexedAuxiliaryFlag(id) == 0) {
            isNew = 1;
        }
        StatisticsCounter *counter;
        switch (aocEntryGetKindForward(id)) {
        case 2:
            counter = statisticsGetCounter(menu->place.area, menu->place.location, 0);
            if (counter != NULL && counter->fields.count != 0) {
                inStock = 1;
                anyInStock = 1;
            }
            cellListAppend((CellList *)&menu->pages[0], id, isNew, inStock, counter->fields.count & 0xff);
            break;
        case 3:
            counter = statisticsGetCounter(menu->place.area, menu->place.location, 1);
            if (counter != NULL && counter->fields.count != 0) {
                inStock = 1;
                anyInStock = 1;
            }
            cellListAppend((CellList *)&menu->pages[1], id, isNew, inStock, counter->fields.count & 0xff);
            break;
        case 8:
            cellListAppend((CellList *)&menu->pages[2], id, isNew, 0, 0);
            break;
        case 4:
            counter = statisticsGetCounter(menu->place.area, menu->place.location, 2);
            if (counter != NULL && counter->fields.count != 0) {
                inStock = 1;
                anyInStock = 1;
            }
            cellListAppend((CellList *)&menu->pages[3], id, isNew, inStock, counter->fields.count & 0xff);
            break;
        case 5:
            counter = statisticsGetCounter(menu->place.area, menu->place.location, 3);
            if (counter != NULL && counter->fields.count != 0) {
                inStock = 1;
                anyInStock = 1;
            }
            cellListAppend((CellList *)&menu->pages[4], id, isNew, inStock, counter->fields.count & 0xff);
            break;
        case 6:
            counter = statisticsGetCounter(menu->place.area, menu->place.location, 4);
            if (counter != NULL && counter->fields.count != 0) {
                inStock = 1;
                anyInStock = 1;
            }
            cellListAppend((CellList *)&menu->pages[5], id, isNew, inStock, counter->fields.count & 0xff);
            break;
        case 7:
            counter = statisticsGetCounter(menu->place.area, menu->place.location, 5);
            if (counter != NULL && counter->fields.count != 0) {
                inStock = 1;
                anyInStock = 1;
            }
            cellListAppend((CellList *)&menu->pages[6], id, isNew, inStock, counter->fields.count & 0xff);
            break;
        case 1:
        case 12:
            counter = statisticsGetCounter(menu->place.area, menu->place.location, 0);
            if (counter != NULL && counter->fields.count != 0) {
                inStock = 1;
                anyInStock = 1;
            }
            cellListAppend((CellList *)&menu->pages[7], id, isNew, inStock, counter->fields.count & 0xff);
            break;
        }
    }

    if (menu->place.area == 1 && menu->place.location == 5) {
        u16 isNew = 0;
        if (gameTestIndexedAuxiliaryFlag(EQUIPMENT_BONUS_ITEM) == 0) {
            isNew = 1;
        }
        cellListAppend((CellList *)&menu->pages[7], EQUIPMENT_BONUS_ITEM, isNew, 0, 0x40);
    }

    for (s32 page = 0; page < EQUIPMENT_MENU_PAGES; page++) {
        s32 visible = (page == 7 || page == 8) ? 10 : 9;
        listScrollerInitialize(&menu->cursors[page], visible, menu->pages[page].count, 0, 1,
                               page == 7 || page == 8);
        asdDebugHookPtrInt(&menu->cursors[page], 1);
        menu->cursors[page].scroll.enabled = 1;
        listCursorSetPage(&menu->cursors[page], 0);
    }
    return anyInStock;
}

} /* extern "C" */
