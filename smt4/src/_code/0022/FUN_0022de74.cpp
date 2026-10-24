/* NON_MATCHING: the 0x604-byte unit copy and the cleared stat region schedule differently (retail zeroes sixteen words with individual stores, armcc keeps the temporary's layout in other registers) and the slot-table search keeps its pointers in different registers. */
#include "gamedata/DevilRecord.h"
#include "gamedata/UnitStats.h"

/* A devil list entry (0x20 bytes): only its id is read. */
struct DevilPreviewEntry {
    u8 unk00[4];
    u16 id;
    u8 unk06[0x1A];
};

/* The devil list screen's work block (only the preview fields). */
struct DevilPreviewWork {
    u8 unk000[0x20];
    u8 cursor[0x584];
    /* 0x5A4 */ u8 previewEnabled;
    /* 0x5A5 */ u8 previewMode;      /* 1: show the party's own copy of the unit */
    /* 0x5A6 */ u8 unk5a6;
    /* 0x5A7 */ u8 previewShown;
    /* 0x5A8 */ DevilPreviewEntry entries[1];
    u8 unk5c8[0xA000 - 0x28 + 0x5C0 - 0x5A8];
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
s32 FUN_0029e0f8(void);
void FUN_0029dfc0(s32 arg);
void FUN_0029d8a0(u32 id);
void statusPanelSetOpen(s32 open);
void FUN_0022d1a8(DevilPreviewWork *work);
void FUN_0029c4c8(s32 arg);
void FUN_0029c4e4(StatBlock *unit, s32 arg);
void FUN_00258a24(s32 arg);
DevilPreviewSlots *gameGetSlotTable(void);
void bitsetSetBit(StatBlock *unit, u32 bit);
void unitRecalculateEffectiveStats(StatBlock *unit);
void memClear(void *block, s32 size);
void *rt_memcpy_w(void *destination, const void *source, u32 size);

/* The last previewed id is kept at 0xA5B2 of the work block. */
struct DevilPreviewWorkView {
    u8 unk0000[0xA5B2];
    u16 lastId;
};

/* Keeps the status panel showing the devil under the cursor: opens the panel for it, and in
 * preview mode builds the unit (a fresh one, or a copy of the party's with its growth cleared). */
void FUN_0022de74(DevilPreviewWork *work)
{
    if (*(u16 *)work->entries == 0) {
        FUN_0029dfc0(0);
        return;
    }
    u16 id = work->entries[flaggedValueHolderGetTotal((u8 *)work + 0x20)].id;
    u16 *lastId = &((DevilPreviewWorkView *)work)->lastId;

    if (FUN_0029e0f8() == 0) {
        return;
    }
    if (work->previewEnabled != 1) {
        if (*lastId == id) {
            return;
        }
        FUN_0029d8a0(id);
        statusPanelSetOpen(1);
        FUN_0022d1a8(work);
    } else {
        if (work->previewShown == 0 && *lastId == id) {
            return;
        }
        if (work->previewMode != 1) {
            FUN_0029d8a0(id);
            FUN_0029c4c8(0);
            if (work->previewShown != 0) {
                FUN_00258a24(0);
            } else {
                statusPanelSetOpen(1);
            }
        } else {
            DevilPreviewSlots *slots = gameGetSlotTable();
            StatBlock *current = NULL;

            for (u16 i = 0; i < slots->stockCount; ++i) {
                s32 slot = slots->stock[i];

                if (slot >= 0) {
                    current = &slots->units[slot];
                    if (current->id == id) {
                        break;
                    }
                }
            }
            FUN_0029d8a0(id);
            const DevilRecord *devil = (const DevilRecord *)devilGetRecord(id);
            DevilPreviewUnit unit;

            rt_memcpy_w(&unit, current, sizeof(StatBlock));
            for (s32 i = 0; i < 16; i++) {
                unit.reset.clearedWords[i] = 0;
            }
            memClear(unit.reset.growth, 0x500);
            bitsetSetBit(&unit.state, devil->initialization.innateFlag);
            unitRecalculateEffectiveStats(&unit.state);
            unit.state.copy0 = unit.state.unk0E;
            unit.state.copy1 = unit.state.unk10;
            *(u16 *)unit.state.unk44 = 0;
            FUN_0029c4e4(&unit.state, 0);
            FUN_0029c4c8(1);
            if (work->previewShown == 0) {
                statusPanelSetOpen(1);
            } else {
                FUN_00258a24(1);
            }
        }
        work->previewShown = 0;
        FUN_0022d1a8(work);
    }
    *lastId = id;
}

}
