#include "ui/PartyPanelStateA.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

s32 widgetSubCallIfVisible(GridNavigation *cursor);
s32 gridNavigationGetItemCount(GridNavigation *cursor); // declcheck: local (the shared prototype takes the opaque Object; the cursor is a GridNavigation)
void flaggedEntrySetValueB(GridNavigation *cursor, s32 column); // declcheck: local (the shared prototype takes a FlaggedEntry; the cursor is a GridNavigation)
void flaggedEntrySetValueA(GridNavigation *cursor, s32 row); // declcheck: local (the shared prototype takes a FlaggedEntry; the cursor is a GridNavigation)

enum {
    PANEL_STATE_PARTY_ROW = 4,
    PANEL_STATE_STOCK_GRID = 6,
    PANEL_STATE_FULL_GRID = 8,
    STOCK_COLUMNS = 4,
    STOCK_PAGE_ENTRIES = 12,   /* a stock page shows three rows */
    PANEL_OPENED_MODE_16 = 0x10,   /* PartyPanelStateA::panelState: the cursor starts on a unit with ailment bit 2 */
    SLOT_AILMENT_BIT2 = 4
};

/* Puts the cursors of the state being entered on the first unit that can be chosen (the party row's first active
 * slot, or the first listed stock entry, with the page's own grid following when the entry is on the shown page);
 * a panel opened in mode 0x10 then moves the full grid's cursors to the first unit that has ailment bit 2. Each
 * placement ends the search (a found flag leaves the nested loops). */
void partyPanelPlaceInitialCursors(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    bool placed = false;

    switch (panel->pendingState) {
    case PANEL_STATE_PARTY_ROW:
        for (s32 column = 0; column < widgetSubCallIfVisible(&panel->partyGrid); column++) {
            if (panel->activeSlots[column]) {
                flaggedEntrySetValueB(&panel->partyGrid, column);
                break;
            }
        }
        break;
    case PANEL_STATE_STOCK_GRID:
        for (s32 row = 0; row < gridNavigationGetItemCount(&panel->stockGridAlternate); row++) {
            for (s32 column = 0; column < widgetSubCallIfVisible(&panel->stockGridAlternate); column++) {
                s32 index = column + row * STOCK_COLUMNS;

                if (panel->entries[index].available != 0) {
                    flaggedEntrySetValueB(&panel->stockGridAlternate, column);
                    flaggedEntrySetValueA(&panel->stockGridAlternate, row);
                    if (panel->page == 0) {
                        if (index < STOCK_PAGE_ENTRIES) {
                            flaggedEntrySetValueB(&panel->stockGrid, column);
                            flaggedEntrySetValueA(&panel->stockGrid, row);
                        }
                    } else if (panel->page == 1 && index >= STOCK_PAGE_ENTRIES) {
                        flaggedEntrySetValueB(&panel->stockGrid, column);
                        flaggedEntrySetValueA(&panel->stockGrid, row - 4);
                    }
                    placed = true;
                    break;
                }
            }
            if (placed) {
                break;
            }
        }
        break;
    case PANEL_STATE_FULL_GRID:
        for (s32 column = 0; column < widgetSubCallIfVisible(&panel->fullGridAlternate); column++) {
            if (panel->activeSlots[column]) {
                flaggedEntrySetValueB(&panel->fullGrid, column);
                flaggedEntrySetValueA(&panel->fullGrid, 0);
                flaggedEntrySetValueB(&panel->fullGridAlternate, column);
                flaggedEntrySetValueA(&panel->fullGridAlternate, 0);
                placed = true;
                break;
            }
        }
        if (placed) {
            break;
        }
        for (s32 row = 1; row < gridNavigationGetItemCount(&panel->fullGridAlternate); row++) {
            for (s32 column = 0; column < widgetSubCallIfVisible(&panel->fullGridAlternate); column++) {
                s32 index = column + row * STOCK_COLUMNS - STOCK_COLUMNS;

                if (panel->entries[index].available != 0) {
                    flaggedEntrySetValueB(&panel->fullGridAlternate, column);
                    flaggedEntrySetValueA(&panel->fullGridAlternate, row);
                    if (panel->page == 0) {
                        if (index < STOCK_PAGE_ENTRIES) {
                            flaggedEntrySetValueB(&panel->fullGrid, column);
                            flaggedEntrySetValueA(&panel->fullGrid, row);
                        }
                    } else if (panel->page == 1 && index >= STOCK_PAGE_ENTRIES) {
                        flaggedEntrySetValueB(&panel->fullGrid, column);
                        flaggedEntrySetValueA(&panel->fullGrid, row - 3);
                    }
                    placed = true;
                    break;
                }
            }
            if (placed) {
                break;
            }
        }
        break;
    }
    if (panel->panelState == PANEL_OPENED_MODE_16) {
        SaveSlotTableA *table = gameGetSlotTable();

        for (s32 slot = 0; slot < 3; slot++) {
            if (table->reserve[slot] >= 0 && (gameGetSlotRecord(table->reserve[slot])->ailments & SLOT_AILMENT_BIT2)) {
                flaggedEntrySetValueB(&panel->fullGrid, slot + 1);
                flaggedEntrySetValueA(&panel->fullGrid, 0);
                flaggedEntrySetValueB(&panel->fullGridAlternate, slot + 1);
                flaggedEntrySetValueA(&panel->fullGridAlternate, 0);
                return;
            }
        }
        for (s32 index = 0; index < 24; index++) {
            if ((s32)panel->entries[index].packedIndex >= 0 &&
                (gameGetSlotRecord(panel->entries[index].packedIndex)->ailments & SLOT_AILMENT_BIT2)) {
                s32 column = index % STOCK_COLUMNS;
                s32 row = index / STOCK_COLUMNS + 1;

                flaggedEntrySetValueB(&panel->fullGridAlternate, column);
                flaggedEntrySetValueA(&panel->fullGridAlternate, row);
                if (panel->page == 0) {
                    if (index < STOCK_PAGE_ENTRIES) {
                        flaggedEntrySetValueB(&panel->fullGrid, column);
                        flaggedEntrySetValueA(&panel->fullGrid, row);
                    }
                } else if (panel->page == 1 && index >= STOCK_PAGE_ENTRIES) {
                    flaggedEntrySetValueB(&panel->fullGrid, column);
                    flaggedEntrySetValueA(&panel->fullGrid, row - 3);
                }
                return;
            }
        }
    }
}

} /* extern "C" */
