#include "status/CompendiumBrowse.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/UnitStats.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* The party's slot table (shared prefix): 24 units, the stock order and its count. */
struct DevilPreviewSlots {
    u8 prefix[0x90];
    StatBlock units[24];
    s8 stock[24];
    s8 active[3];
    u8 stockCount;
};

union DevilPreviewUnit {
    StatBlock state;
    struct {
        u8 unk00[0x4C];
        u32 clearedWords[16];
        u8 growth[0x500];
    } reset;
};

extern "C" {
void FUN_0029dfc0(s32 arg);
void FUN_0029d8a0(u32 id);
void statusPanelSetOpen(s32 open);
void FUN_0029c4e4(StatBlock *unit, s32 arg);
void statusPanelRefreshSelection(s32 arg);
DevilPreviewSlots *gameGetSlotTable(void);
void bitsetSetBit(StatBlock *unit, u32 bit);
void unitRecalculateEffectiveStats(StatBlock *unit);
void memClear(void *block, s32 size);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Keeps the status panel showing the devil under the cursor: opens the panel for it, and in
 * preview mode builds the unit (a fresh one, or a copy of the party's with its growth cleared). */
void devilListUpdatePreview(BibleDevilWork *work)
{
    if (work->entries[0].present == 0) {
        FUN_0029dfc0(0);
        return;
    }
    u16 id = compendiumSelectedId(work);

    if (FUN_0029e0f8() == 0) {
        return;
    }
    if (work->mode == 1) {
        if (work->viewing == 0 && work->lastId == id) {
            return;
        }
        if (work->column != 1) {
            FUN_0029d8a0(id);
            FUN_0029c4c8(0);
            if (work->viewing != 0) {
                statusPanelRefreshSelection(0);
            } else {
                statusPanelSetOpen(1);
            }
        } else {
            DevilPreviewSlots *slots = gameGetSlotTable();
            StatBlock *current = NULL;

            u8 count = slots->stockCount;
            for (u16 i = 0; i < count; ++i) {
                s32 slot = slots->stock[i];

                if (slot >= 0) {
                    current = &slots->units[slot];
                    if (current->id == id) {
                        break;
                    }
                }
            }
            FUN_0029d8a0(id);
            const NkmBaseRecord *devil = (const NkmBaseRecord *)nkmBaseGetRecord(id);
            DevilPreviewUnit unit;

            __aeabi_memcpy4(&unit, current, sizeof(StatBlock));
            for (s32 i = 0; i < 16; i++) {
                unit.reset.clearedWords[i] = 0;
            }
            memClear(unit.reset.growth, 0x500);
            bitsetSetBit(&unit.state, devil->innateFlag);
            unitRecalculateEffectiveStats(&unit.state);
            unit.state.hp = unit.state.maxHp;
            unit.state.mp = unit.state.maxMp;
            unit.state.ailments = 0;
            FUN_0029c4e4(&unit.state, 0);
            FUN_0029c4c8(1);
            if (work->viewing == 0) {
                statusPanelSetOpen(1);
            } else {
                statusPanelRefreshSelection(1);
            }
        }
        work->viewing = 0;
        FUN_0022d1a8(work);
    } else {
        if (work->lastId == id) {
            return;
        }
        FUN_0029d8a0(id);
        statusPanelSetOpen(1);
        FUN_0022d1a8(work);
    }
    work->lastId = id;
}

}
