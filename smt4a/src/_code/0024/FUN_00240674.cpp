/* NON_MATCHING: addressing now matches retail (s8 `maxed`, entries indexed directly from the 0x7800 base); remaining: retail loads the leader's u64 with `ldrd` (members use two `ldr`), places the `lsr` temp in r2, and schedules the `maxed` byte load after the move of `needed`. */
#include "common.h"
#include "sys/RuntimeObjects.h"

/* The 16-bit gauge width an icon frame carries. */
struct GaugeIcon {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u16 *width;
};

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

/* The result screen's work area; leader is the player, members[slot] a party member. */
struct ExpResultWork {
    /* 0x0000 */ u8 unk0000[0x7880];
    /* 0x7880 */ ExpGaugeEntry leader;
    /* 0x78a8 */ ExpGaugeEntry members[36];
};

/* The party slot table: the active order and the three party slots. */
struct PartySlotTable {
    /* 0x0000 */ u8 unk0000[0x1c88];
    /* 0x1c88 */ s8 order[24];
    /* 0x1ca0 */ s8 party[3];
};

/* A party member's record (only the fields read here). */
struct PartyMemberRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 expCurve;
    /* 0x64 */ u16 level;
};

extern "C" {
PartySlotTable *gameGetSlotTable(void);
GaugeIcon *asdTMTexTableEntryAt(u32 table, u32 sprite);
PartyMemberRecord *gameGetPlayerData(void);
PartyMemberRecord *gameGetSlotRecord(s32 slot);
PartyMemberRecord *FUN_003e503c(u16 index);
s32 partySlotMatchesSelected(PartyMemberRecord *record);
u32 FUN_004ccbf0(s32 level);
u32 FUN_004ccdb8(u16 expCurve, s32 level, s32 expBonus);
}

/* Refreshes the gauge widths of the player, the party, the stock and the remaining slots. */
extern "C" void FUN_00240674(ExpResultWork *work)
{
    PartySlotTable *table = gameGetSlotTable();
    GaugeIcon *icon = asdTMTexTableEntryAt(0x1d, 0x14);
    u64 needed = FUN_004ccbf0(gameGetPlayerData()->expCurve + work->leader.levelOffset);
    if (work->leader.maxed) {
        work->leader.gauge = *icon->width;
    } else {
        work->leader.gauge = (s32)((f32)(work->leader.exp >> 12) / (f32)needed * (f32)(s16)*icon->width);
    }

    for (s32 i = 0; i < 3; i++) {
        s32 slot = table->party[i];
        if (slot >= 0) {
            PartyMemberRecord *record = gameGetSlotRecord(slot);
            if (record != NULL) {
                u64 needed = FUN_004ccdb8(record->expCurve, record->level + work->members[slot].levelOffset, work->members[slot].expBonus);
                if (work->members[slot].maxed) {
                    work->members[slot].gauge = *icon->width;
                } else {
                    work->members[slot].gauge = (s32)((f32)(work->members[slot].exp >> 12) / (f32)needed * (f32)(s16)*icon->width);
                }
            }
        }
    }

    icon = asdTMTexTableEntryAt(0x1d, 0x5f);
    for (s32 i = 0; i < 24; i++) {
        if ((table->party[0] >= 0 && table->party[0] == table->order[i]) ||
            (table->party[1] >= 0 && table->party[1] == table->order[i]) ||
            (table->party[2] >= 0 && table->party[2] == table->order[i])) {
            continue;
        }
        s32 slot = table->order[i];
        if (slot >= 0) {
            PartyMemberRecord *record = gameGetSlotRecord(slot);
            if (record != NULL) {
                u64 needed = FUN_004ccdb8(record->expCurve, record->level + work->members[slot].levelOffset, work->members[slot].expBonus);
                if (work->members[slot].maxed) {
                    work->members[slot].gauge = *icon->width;
                } else {
                    work->members[slot].gauge = (s32)((f32)(work->members[slot].exp >> 12) / (f32)needed * (f32)(s16)*icon->width);
                }
            }
        }
    }

    for (s32 i = 0; i < 12; i++) {
        PartyMemberRecord *record = FUN_003e503c(i);
        if (actorIsActive(record)) {
            s32 index = i + 25;
            if (index > 36) {
                index = 36;
            }
            u64 needed = FUN_004ccbf0((&work->leader)[index].levelOffset + record->level);
            if (partySlotMatchesSelected(record)) {
                icon = asdTMTexTableEntryAt(0x1d, 0x13b);
            } else {
                icon = asdTMTexTableEntryAt(0x1d, 0x5f);
            }
            if ((&work->leader)[index].maxed) {
                (&work->leader)[index].gauge = *icon->width;
            } else {
                (&work->leader)[index].gauge = (s32)((f32)((&work->leader)[index].exp >> 12) / (f32)needed * (f32)(s16)*icon->width);
            }
        }
    }
}
