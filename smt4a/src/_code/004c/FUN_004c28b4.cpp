/* NON_MATCHING: matches retail except the order the 0.2/0.4 constants are hoisted (s18/s19) and the load order of the two 64-bit mask words in the final doubling check. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/Table04Record.h"

/* A skill record: its rate at +0x40 and packed class/grade bits at +0x44. */
struct SkillRateRecord {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ f32 rate;
    /* 0x44 */ u32 bits; /* bits 11-15: category, bits 16-19: grade */
};

/* The combatant's skill info block filled in by FUN_003e8bb0 (0x34 bytes). */
struct SkillInfo {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 skillId;
    /* 0x18 */ u8 unk18[0x14];
    /* 0x2C */ u8 valid;
    /* 0x2D */ u8 unk2D[7];
};

extern "C" {
extern u64 DAT_00571408;
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 group);
void source4CCopyHalves(BtlCombatantEntryA *entry, u16 *skills);
void FUN_003e8bb0(SkillInfo *info, BtlMainStateA *battle, BtlCombatantEntryA *entry);
s32 FUN_004bd098(u32 owner, s32 skillId);

/* Rate multiplier for the combatant's skills of the given kind: boosts from graded skills and from rate skills. */
f32 FUN_004c28b4(s32 group, s32 kind)
{
    f32 rate = 1.0f;
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), group);
    u16 skills[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    source4CCopyHalves(entry, skills);
    for (s32 i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            SkillRateRecord *record = reinterpret_cast<SkillRateRecord *>(dataTable41FindById(skills[i]));
            if (record != NULL) {
                u32 bits = record->bits;
                bool applies;
                if (((bits << 16) >> 27) == 26) {
                    applies = true;
                } else if (((bits << 16) >> 27) == 27) {
                    switch (kind) {
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 20:
                        applies = true;
                        break;
                    default:
                        applies = false;
                        break;
                    }
                } else {
                    applies = kind == (s32)((bits << 16) >> 27);
                }
                if (applies) {
                    u32 grade = (bits << 12) >> 28;
                    if (grade == 5)
                        rate += 0.2f;
                    else if (grade == 6)
                        rate += 0.4f;
                }
            }
        }
    }
    for (s32 i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            SkillRateRecord *record = reinterpret_cast<SkillRateRecord *>(dataTable41FindById(skills[i]));
            f32 value = 0.0f;
            if (record != NULL)
                value = record->rate;
            if (record != NULL && value > 0.00001f) {
                if (((record->bits << 16) >> 27) == 26) {
                    rate += value - 1.0f;
                } else if (((record->bits << 16) >> 27) == 27) {
                    switch (kind) {
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 20:
                        rate += value - 1.0f;
                        break;
                    }
                } else if (kind == (s32)((record->bits << 16) >> 27)) {
                    rate += value - 1.0f;
                }
            }
        }
    }
    SkillInfo info;
    FUN_003e8bb0(&info, btlGetMainState(), entry);
    if (info.valid != 0 && (entry->statusFlags & 0x10) != 0) {
        u64 flags = entry->flags;
        u64 mask = DAT_00571408;
        if ((mask & flags) == 0 || FUN_004bd098(entry->sourceId, info.skillId) >= 0)
            rate *= 2.0f;
    }
    return rate;
}
}
