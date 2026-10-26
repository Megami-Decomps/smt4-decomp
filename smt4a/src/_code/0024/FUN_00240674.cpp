/* NON_MATCHING: entry-field base-register CSE and register allocation differ (retail addresses the 0x28-byte entries from a 0x7800 base with the u64 loaded through a separate address; this build folds the offset into one base) */
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
    /* 0x0e */ u8 maxed;         /* gauge is full */
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

/* The share of the next level's experience a gauge has gained. */
static __inline f32 expGaugeRatio(const u64 *exp, u64 expForLevel)
{
    return (f32)(*exp >> 12) / (f32)expForLevel;
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
        work->leader.gauge = (s32)(expGaugeRatio(&work->leader.exp, needed) * (f32)(s16)*icon->width);
    }

    for (s32 i = 0; i < 3; i++) {
        s32 slot = table->party[i];
        if (slot >= 0) {
            PartyMemberRecord *record = gameGetSlotRecord(slot);
            if (record != NULL) {
                ExpGaugeEntry *entry = &work->members[slot];
                needed = FUN_004ccdb8(record->expCurve, record->level + entry->levelOffset, entry->expBonus);
                if (entry->maxed) {
                    entry->gauge = *icon->width;
                } else {
                    entry->gauge = (s32)(expGaugeRatio(&entry->exp, needed) * (f32)(s16)*icon->width);
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
                ExpGaugeEntry *entry = &work->members[slot];
                needed = FUN_004ccdb8(record->expCurve, record->level + entry->levelOffset, entry->expBonus);
                if (entry->maxed) {
                    entry->gauge = *icon->width;
                } else {
                    entry->gauge = (s32)(expGaugeRatio(&entry->exp, needed) * (f32)(s16)*icon->width);
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
            ExpGaugeEntry *entry = &(&work->leader)[index];
            needed = FUN_004ccbf0(entry->levelOffset + record->level);
            if (partySlotMatchesSelected(record)) {
                icon = asdTMTexTableEntryAt(0x1d, 0x13b);
            } else {
                icon = asdTMTexTableEntryAt(0x1d, 0x5f);
            }
            if (entry->maxed) {
                entry->gauge = *icon->width;
            } else {
                entry->gauge = (s32)(expGaugeRatio(&entry->exp, needed) * (f32)(s16)*icon->width);
            }
        }
    }
}
