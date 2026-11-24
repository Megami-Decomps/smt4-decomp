#include "status/CompendiumBrowse.h"
#include "shard/Shard0032.h"
#include "gamedata/NkmBaseRecordA.h"
#include "event/2dEvent/SmokeFade.h"
#include "code/Code002a_Smt4a.h"

/* The party slot table: the units followed by the order they are listed in. */
struct StatusSlotTable {
    /* 0x0000 */ u8 unk0000[0x68];
    /* 0x0068 */ UnitRecord units[24];
    /* 0x1C88 */ s8 order[0x1B];
    /* 0x1CA3 */ u8 count;
};
typedef char StatusSlotTableOffsets[offsetof(StatusSlotTable, count) == 0x1CA3 ? 1 : -1];

extern "C" {
void FUN_0023b45c(s32 value);
void FUN_0034a9c4(u32 id, s32 value);
void FUN_002c8550(s32 value);
void objBInitBlock12DC(void);
void objBInitBlock12DC5(void);
void statusPanelSetOpen(s32 open);
void FUN_0033449c(s32 value);
void statusScreenRefreshForSelection(s32 value);
StatusSlotTable *gameGetSlotTable(void);
s32 FUN_00372014(void);
void unitRecomputeDerivedStats(UnitRecord *unit);
u16 recordGetScaledMaximum(UnitRecord *unit);
void objBInitBlock19D0(UnitRecord *unit, s32 copyPair, u32 c);

/* Per-frame refresh of the status panel: when the selected entry changed, switch the demon shown (or, for a party
 * member, build a working copy of its record) and reopen the panel. */
void compendiumRefreshStatusPreview(CompendiumBrowseWorkA *panel)
{
    CompendiumBrowsePageA *page = &panel->browse.page;
    if (page->entries[0].present == 0) {
        FUN_0023b45c(0);
        return;
    }
    u16 id = compendiumSelectedId(panel);
    if (gameStateIsNotTransitioning() == 0) {
        return;
    }
    if (page->tabsActive == 1) {
        if (page->viewing == 0 && panel->shownId == id) {
            return;
        }
        if (page->tabPage != 1) {
            s32 previous = gameGlobalsGetFieldState();
            FUN_0034a9c4(id, 0);
            FUN_0033449c(0);
            if (previous != 5) {
                objBInitBlock12DC();
            }
            if (page->viewing != 0) {
                statusScreenRefreshForSelection(0);
            } else {
                statusPanelSetOpen(1);
            }
        } else {
            StatusSlotTable *slots = gameGetSlotTable();
            UnitRecord *member = NULL;
            for (u16 i = 0; i < slots->count; i++) {
                if (slots->order[i] >= 0) {
                    member = &slots->units[slots->order[i]];
                    if (member->id == id) {
                        break;
                    }
                }
            }
            s32 previous = gameGlobalsGetFieldState();
            FUN_0034a9c4(id, 0);
            FUN_002c8550(2);
            if (previous == 5 && FUN_00372014() != 0) {
                objBInitBlock12DC5();
            }
            nkmBaseGetRecord(id);
            UnitRecord unit = *member;
            for (s32 i = 0; i < 0x40; i++) {
                unit.inheritedFlags[i] = 0;
            }
            unitRecomputeDerivedStats(&unit);
            unit.hp = recordGetScaledMaximum(&unit);
            unit.mp = unit.maxMp;
            unit.ailments = 0;
            objBInitBlock19D0(&unit, 0, 0);
            FUN_0033449c(1);
            if (page->viewing != 0) {
                statusScreenRefreshForSelection(1);
            } else {
                statusPanelSetOpen(1);
            }
        }
        panel->browse.page.viewing = 0;
        FUN_004a3e04((StatMenu *)panel);
    } else {
        if (panel->shownId == id) {
            return;
        }
        s32 previous = gameGlobalsGetFieldState();
        FUN_0034a9c4(id, 0);
        if (compendiumEntryIsRegistered(id) == 0) {
            FUN_002c8550(0xE);
        }
        s32 current = gameGlobalsGetFieldState();
        if (current == 5) {
            if (previous == 0xE) {
                objBInitBlock12DC();
            }
        } else if (current == 0xE && previous == 5) {
            objBInitBlock12DC5();
        }
        statusPanelSetOpen(1);
        FUN_004a3e04((StatMenu *)panel);
    }
    panel->shownId = id;
}
}
