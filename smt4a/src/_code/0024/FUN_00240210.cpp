/* NON_MATCHING: block layout and register allocation differ (retail tests kinds 0/14 and 1 in separate chains and hoists menu + entry*2 into a stack slot) */
#include "common.h"

/* The filter menu's per-category id lists, each indexed by entry (entry 0 is "don't specify"). */
struct FilterMenuA {
    /* 0x000 */ u8 unk000[0x5d2];
    /* 0x5d2 */ u16 firstIds[0x100];   /* kind 1 */
    /* 0x7d2 */ u8 unk7d2[0x762];
    /* 0xf34 */ u16 thirdIds[0x3b];    /* kind 3 */
    /* 0xfaa */ u8 unkfaa[0xc];
    /* 0xfb6 */ u16 fourthIds[0x38];   /* kind 4 */
};

/* The currently selected filter value of each kind. */
struct FilterSelectionA {
    /* 0x00 */ s16 partyFilter;     /* kind 0: slot of the chosen party member */
    /* 0x02 */ s16 allyFilter;      /* kind 14 */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s16 secondFilter;    /* kinds 2 and 3 */
    /* 0x0a */ s16 firstFilter;     /* kind 1 */
    /* 0x0c */ s16 fourthFilter;    /* kind 4 */
    /* 0x0e */ s16 sixthFilter;     /* kind 6 */
    /* 0x10 */ u8 unk10[5];
    /* 0x15 */ s8 fifthFilter;      /* kind 5 */
};

/* The filter settings record: the selection starts at 0x20. */
struct FilterSettingsA {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ FilterSelectionA selection;
};

/* The party slot table: the active order of the stock slots. */
struct StockSlotTable {
    /* 0x0000 */ u8 unk0000[0x1c88];
    /* 0x1c88 */ s8 order[24];
};

struct StockUnitA {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
};

extern "C" {
FilterSettingsA *FUN_0026140c(void);
StockSlotTable *gameGetSlotTable(void);
StockUnitA *gameGetSlotRecord(s32 slot);
s32 bitsAt60Test(StockUnitA *unit, u32 bit);
void FUN_0021b390(FilterMenuA *menu, s32 kind, s32 index, char *label);

/* Formats the label of entry `entry` of filter kind `kind` into `label` and tells whether it is
   the entry the settings currently have selected. */
u8 FUN_00240210(FilterMenuA *menu, s32 kind, char *label, s32 entry)
{
    FilterSelectionA *settings = &FUN_0026140c()->selection;
    u8 selected = 0;

    if (kind == 0) {
        if (entry != 0) {
            s32 count = 0;
            for (s32 i = 0; i < 24; i++) {
                if (gameGetSlotTable()->order[i] >= 0) {
                    StockUnitA *unit = gameGetSlotRecord(gameGetSlotTable()->order[i]);
                    if (!bitsAt60Test(unit, 10)) {
                        if (count == entry - 1) {
                            FUN_0021b390(menu, kind, unit->id, label);
                            selected = gameGetSlotTable()->order[i] == settings->partyFilter;
                            break;
                        }
                        count++;
                    }
                }
            }
        } else {
            FUN_0021b390(menu, kind, -1, label);
            if (settings->partyFilter < 0) {
                return 1;
            }
            return selected;
        }
    } else if (kind == 14) {
        if (entry != 0) {
            s32 count = 0;
            for (s32 i = 0; i < 24; i++) {
                if (gameGetSlotTable()->order[i] >= 0) {
                    StockUnitA *unit = gameGetSlotRecord(gameGetSlotTable()->order[i]);
                    if (!bitsAt60Test(unit, 10)) {
                        if (count == entry - 1) {
                            FUN_0021b390(menu, kind, unit->id, label);
                            selected = gameGetSlotTable()->order[i] == settings->allyFilter;
                            break;
                        }
                        count++;
                    }
                }
            }
        } else {
            FUN_0021b390(menu, kind, -1, label);
            if (settings->allyFilter < 0) {
                return 1;
            }
            return selected;
        }
    }

    if (kind == 1) {
        if (entry != 0) {
            FUN_0021b390(menu, kind, menu->firstIds[entry], label);
            if (settings->firstFilter == (s16)menu->firstIds[entry]) {
                return 1;
            }
            return selected;
        }
        FUN_0021b390(menu, kind, -1, label);
        if (settings->firstFilter == 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 2) {
        if (entry != 0) {
            FUN_0021b390(menu, kind, entry, label);
            if (settings->secondFilter == entry) {
                return 1;
            }
            return selected;
        }
        FUN_0021b390(menu, kind, -1, label);
        if (settings->secondFilter <= 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 3) {
        if (entry != 0) {
            FUN_0021b390(menu, kind, menu->thirdIds[entry], label);
            if (settings->secondFilter == menu->thirdIds[entry]) {
                return 1;
            }
            return selected;
        }
        FUN_0021b390(menu, kind, -1, label);
        if (settings->secondFilter == 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 4) {
        if (entry != 0) {
            FUN_0021b390(menu, kind, menu->fourthIds[entry], label);
            if (settings->fourthFilter == (s16)menu->fourthIds[entry]) {
                return 1;
            }
            return selected;
        }
        FUN_0021b390(menu, kind, -1, label);
        if (settings->fourthFilter == 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 5) {
        if (entry != 0) {
            FUN_0021b390(menu, kind, entry - 1, label);
            if (settings->fifthFilter == entry - 1) {
                return 1;
            }
            return selected;
        }
        FUN_0021b390(menu, kind, -1, label);
        if (settings->fifthFilter < 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 6) {
        if (entry != 0) {
            FUN_0021b390(menu, kind, entry - 1, label);
            if (settings->sixthFilter == entry - 1) {
                return 1;
            }
            return selected;
        }
        FUN_0021b390(menu, kind, -1, label);
        if (settings->sixthFilter < 0) {
            return 1;
        }
        return selected;
    }
    return selected;
}

} /* extern "C" */
