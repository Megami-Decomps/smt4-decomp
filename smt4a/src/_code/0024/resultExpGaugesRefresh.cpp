/* NON_MATCHING: 37 lines (23 by shape). The player's gauge and the three reserve[] demons' match. In the party[]
 * loop retail moves `needed` before it loads `maxed` and shifts the experience through r2 (this build: the load
 * first, r3), and in the stock-slot loop it loads the experience with two `ldr` where this build uses `ldrd`.
 * The u64-to-gauge conversion is the IV twin's `expWholePart(u64)`, a plain `static` there; here the plain form
 * scores 50 and `static __inline` 37. Open-coding it at two of the four sites scores 10 but has no reason.
 * Wave 91: all fifteen open-coded subsets were scored as a diagnostic and show no per-site rule (reserve[] and
 * stock: 10, reserve[] and party[]: 14, reserve[] alone: 26, all four: 50, the same as the plain `static`; the
 * rest 34-59); the best one still has the party[] loop's `needed` move. The helper taking `const u64 &`, a
 * pointer or the entry scores 39 by shape inline and 40 plain; returning the shifted u64 28 inline and 58 plain;
 * a ratio helper `(f32)(exp >> 12) / (f32)needed` 77 here and breaks the IV twin (IDENTICAL -> 39); a u32
 * `needed` 175; an entry pointer in the stock loop 93. Separate icon variables for the party[] and stock loops
 * change nothing. */
#include "common.h"
#include "sys/RuntimeObjects.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* One experience-gauge entry of the result screen (0x28 bytes). */
struct ExpGaugeEntry {
    /* 0x00 */ u64 exp;          /* gained experience, 12-bit fixed point */
    /* 0x08 */ u16 gauge;        /* gauge width shown */
    /* 0x0a */ s16 levelOffset;  /* levels already gained, added to the base level */
    /* 0x0c */ u8 unk0c[2];
    /* 0x0e */ s8 maxed;         /* gauge is full */
    /* 0x0f */ u8 unk0f;
    /* 0x10 */ s16 expBonus;
    /* 0x12 */ u8 unk12[0x16];
};

/* The result screen's work area (only the experience gauges). */
struct ExpResultWork {
    /* 0x0000 */ u8 unk0000[0x7880];
    /* 0x7880 */ ExpGaugeEntry entries[37];  /* the player, then one per slot-table entry; the stock slots from 25 */
};

extern "C" {
u32 levelGetExpRequirement(s32 level);
u32 unitGetExpRequirement(u16 id, s32 level, s32 expBonus);
}

/* The whole part of an experience value (12-bit fixed point), as the gauge arithmetic uses it. */
static __inline f32 expWholePart(u64 exp)
{
    return (f32)(exp >> 12);
}

/* Refreshes the gauge widths of the player, the three demons in reserve[], the other demons of party[] and the
 * stock slots (entries 25 and up). */
extern "C" void resultExpGaugesRefresh(ExpResultWork *work)
{
    SaveSlotTableA *table = gameGetSlotTable();
    TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1d, 0x14);
    u64 needed = levelGetExpRequirement(gameGetPlayerData()->level + work->entries[0].levelOffset);
    if (work->entries[0].maxed) {
        work->entries[0].gauge = icon->placement->width;
    } else {
        work->entries[0].gauge = (s32)(expWholePart(work->entries[0].exp) / (f32)needed * (f32)icon->placement->width);
    }

    for (s32 i = 0; i < 3; i++) {
        s32 slot = table->reserve[i];
        if (slot >= 0) {
            SlotRecordA *record = gameGetSlotRecord(slot);
            if (record != NULL) {
                u64 needed = unitGetExpRequirement(record->id, record->level + work->entries[slot + 1].levelOffset, work->entries[slot + 1].expBonus);
                if (work->entries[slot + 1].maxed) {
                    work->entries[slot + 1].gauge = icon->placement->width;
                } else {
                    work->entries[slot + 1].gauge = (s32)(expWholePart(work->entries[slot + 1].exp) / (f32)needed * (f32)icon->placement->width);
                }
            }
        }
    }

    icon = asdTMTexTableEntryAt(0x1d, 0x5f);
    for (s32 i = 0; i < 24; i++) {
        if ((table->reserve[0] >= 0 && table->reserve[0] == table->party[i]) ||
            (table->reserve[1] >= 0 && table->reserve[1] == table->party[i]) ||
            (table->reserve[2] >= 0 && table->reserve[2] == table->party[i])) {
            continue;
        }
        s32 slot = table->party[i];
        if (slot >= 0) {
            SlotRecordA *record = gameGetSlotRecord(slot);
            if (record != NULL) {
                u64 needed = unitGetExpRequirement(record->id, record->level + work->entries[slot + 1].levelOffset, work->entries[slot + 1].expBonus);
                if (work->entries[slot + 1].maxed) {
                    work->entries[slot + 1].gauge = icon->placement->width;
                } else {
                    work->entries[slot + 1].gauge = (s32)(expWholePart(work->entries[slot + 1].exp) / (f32)needed * (f32)icon->placement->width);
                }
            }
        }
    }

    for (s32 i = 0; i < 12; i++) {
        PartySlotA *stocked = partyGetSlotPreferredFirst((u16)i);
        if (actorIsActive(stocked)) {
            s32 index = i + 25;
            if (index > 36) {
                index = 36;
            }
            u64 needed = levelGetExpRequirement(work->entries[index].levelOffset + stocked->record.level);
            if (partySlotMatchesSelected(stocked)) {
                icon = asdTMTexTableEntryAt(0x1d, 0x13b);
            } else {
                icon = asdTMTexTableEntryAt(0x1d, 0x5f);
            }
            if (work->entries[index].maxed) {
                work->entries[index].gauge = icon->placement->width;
            } else {
                work->entries[index].gauge = (s32)(expWholePart(work->entries[index].exp) / (f32)needed * (f32)icon->placement->width);
            }
        }
    }
}
