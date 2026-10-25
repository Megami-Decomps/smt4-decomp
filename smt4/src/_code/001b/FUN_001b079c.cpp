/* NON_MATCHING: block layout and register allocation differ (retail hoists menu + entry*2 into a stack slot and tests kinds 0/13 and 1 in separate chains) */
#include "common.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "status/StatusCamera.h"
#include "gamedata/FlagBitTests.h"

/* The filter menu's per-category id lists, each indexed by entry (entry 0 is "don't specify"). */
struct FilterMenu {
    /* 0x000 */ u8 unk000[0x5be];
    /* 0x5be */ u16 firstIds[0x70];   /* kind 1 */
    /* 0x69e */ u8 unk69e[0x882];
    /* 0xf20 */ u16 secondIds[0x38];  /* kind 2 */
    /* 0xf90 */ u16 thirdIds[0x38];   /* kind 3 */
};

/* The currently selected filter value of each kind. */
struct FilterSelection {
    /* 0x00 */ s16 partyFilter;     /* kind 0: slot of the chosen party member */
    /* 0x02 */ s16 allyFilter;      /* kind 13 */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s16 secondFilter;    /* kind 2 */
    /* 0x0a */ u16 firstFilter;     /* kind 1 */
    /* 0x0c */ u16 thirdFilter;     /* kind 3 */
    /* 0x0e */ s16 fifthFilter;     /* kind 5 */
    /* 0x10 */ u8 unk10[5];
    /* 0x15 */ s8 fourthFilter;     /* kind 4 */
};

/* The filter settings record: the selection starts at 0x1c. */
struct FilterSettings {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ FilterSelection selection;
};

struct StockUnit {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
};

extern "C" {
PartyDamageSlotsIV *gameGetSlotTable(void);
StockUnit *gameGetUnitRecord(s32 slot);
void uiFormatIndexedDisplayName(FilterMenu *menu, s32 kind, s32 index, char *label);

/* Formats the label of entry `entry` of filter kind `kind` into `label` and tells whether it is
   the entry the settings currently have selected. */
u8 FUN_001b079c(FilterMenu *menu, s32 kind, char *label, s32 entry)
{
    FilterSelection *settings = &reinterpret_cast<FilterSettings *>(FUN_002a0d0c())->selection;
    u8 selected = 0;

    if (kind == 0) {
        if (entry != 0) {
            s32 count = 0;
            for (s32 i = 0; i < 24; i++) {
                if (gameGetSlotTable()->stock[i] >= 0) {
                    StockUnit *unit = gameGetUnitRecord(gameGetSlotTable()->stock[i]);
                    if (!flagWordTestBit(unit, 10) && !flagWordTestBit(unit, 2)) {
                        if (count == entry - 1) {
                            uiFormatIndexedDisplayName(menu, kind, unit->id, label);
                            selected = gameGetSlotTable()->stock[i] == settings->partyFilter;
                            break;
                        }
                        count++;
                    }
                }
            }
        } else {
            uiFormatIndexedDisplayName(menu, kind, -1, label);
            if (settings->partyFilter < 0) {
                return 1;
            }
            return selected;
        }
    } else if (kind == 13) {
        if (entry != 0) {
            s32 count = 0;
            for (s32 i = 0; i < 24; i++) {
                if (gameGetSlotTable()->stock[i] >= 0) {
                    StockUnit *unit = gameGetUnitRecord(gameGetSlotTable()->stock[i]);
                    if (!flagWordTestBit(unit, 10) && !flagWordTestBit(unit, 2)) {
                        if (count == entry - 1) {
                            uiFormatIndexedDisplayName(menu, kind, unit->id, label);
                            selected = gameGetSlotTable()->stock[i] == settings->allyFilter;
                            break;
                        }
                        count++;
                    }
                }
            }
        } else {
            uiFormatIndexedDisplayName(menu, kind, -1, label);
            if (settings->allyFilter < 0) {
                return 1;
            }
            return selected;
        }
    }

    if (kind == 1) {
        if (entry != 0) {
            uiFormatIndexedDisplayName(menu, kind, menu->firstIds[entry], label);
            if (settings->firstFilter == menu->firstIds[entry]) {
                return 1;
            }
            return selected;
        }
        uiFormatIndexedDisplayName(menu, kind, -1, label);
        if (settings->firstFilter == 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 2) {
        if (entry != 0) {
            uiFormatIndexedDisplayName(menu, kind, menu->secondIds[entry], label);
            if (settings->secondFilter == menu->secondIds[entry]) {
                return 1;
            }
            return selected;
        }
        uiFormatIndexedDisplayName(menu, kind, -1, label);
        if (settings->secondFilter <= 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 3) {
        if (entry != 0) {
            uiFormatIndexedDisplayName(menu, kind, menu->thirdIds[entry], label);
            if (settings->thirdFilter == menu->thirdIds[entry]) {
                return 1;
            }
            return selected;
        }
        uiFormatIndexedDisplayName(menu, kind, -1, label);
        if (settings->thirdFilter == 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 4) {
        if (entry != 0) {
            uiFormatIndexedDisplayName(menu, kind, entry - 1, label);
            if (settings->fourthFilter == entry - 1) {
                return 1;
            }
            return selected;
        }
        uiFormatIndexedDisplayName(menu, kind, -1, label);
        if (settings->fourthFilter < 0) {
            return 1;
        }
        return selected;
    }
    if (kind == 5) {
        if (entry != 0) {
            uiFormatIndexedDisplayName(menu, kind, entry - 1, label);
            if (settings->fifthFilter == entry - 1) {
                return 1;
            }
            return selected;
        }
        uiFormatIndexedDisplayName(menu, kind, -1, label);
        if (settings->fifthFilter < 0) {
            return 1;
        }
        return selected;
    }
    return selected;
}

} /* extern "C" */
