/* NON_MATCHING: 37 lines: retail computes the entry array's base (work + 0x5A8) into a saved register before the
 * flaggedValueHolderGetTotal call; this build adds it after the call (one instruction fewer), which shifts every
 * later branch. Only a single-use base pointer local reproduces it (steering, not kept). */
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/UnitStats.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* A devil list entry (0x20 bytes). */
struct DevilPreviewEntry {
    /* 0x00 */ u16 key;  /* 0 in the first entry: the list is empty */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
};

/* The devil list screen's work block (only the preview fields). */
struct DevilPreviewWork {
    u8 unk000[0x20];
    u8 cursor[0x584];
    /* 0x5A4 */ s8 previewEnabled;
    /* 0x5A5 */ s8 previewMode;      /* 1: show the party's own copy of the unit */
    /* 0x5A6 */ u8 unk5a6;
    /* 0x5A7 */ s8 previewShown;
    /* 0x5A8 */ DevilPreviewEntry entries[1];
    /* 0x5C8 */ u8 unk5c8[0xA5B2 - 0x5C8];
    /* 0xA5B2 */ u16 lastId;         /* the devil the panel shows */
};

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
s32 flaggedValueHolderGetTotal(void *cursor);
void FUN_0029dfc0(s32 arg);
void FUN_0029d8a0(u32 id);
void statusPanelSetOpen(s32 open);
void FUN_0022d1a8(DevilPreviewWork *work);
void FUN_0029c4e4(StatBlock *unit, s32 arg);
void statusPanelRefreshSelection(s32 arg);
DevilPreviewSlots *gameGetSlotTable(void);
void bitsetSetBit(StatBlock *unit, u32 bit);
void unitRecalculateEffectiveStats(StatBlock *unit);
void memClear(void *block, s32 size);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Keeps the status panel showing the devil under the cursor: opens the panel for it, and in
 * preview mode builds the unit (a fresh one, or a copy of the party's with its growth cleared). */
void devilListUpdatePreview(DevilPreviewWork *work)
{
    if (work->entries[0].key == 0) {
        FUN_0029dfc0(0);
        return;
    }
    u16 id = work->entries[flaggedValueHolderGetTotal(work->cursor)].id;

    if (FUN_0029e0f8() == 0) {
        return;
    }
    if (work->previewEnabled == 1) {
        if (work->previewShown == 0 && work->lastId == id) {
            return;
        }
        if (work->previewMode != 1) {
            FUN_0029d8a0(id);
            FUN_0029c4c8(0);
            if (work->previewShown != 0) {
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
            if (work->previewShown == 0) {
                statusPanelSetOpen(1);
            } else {
                statusPanelRefreshSelection(1);
            }
        }
        work->previewShown = 0;
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
