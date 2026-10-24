/* NON_MATCHING: the player/unit duplicated accessors are expanded in another order than retail and the status-bit scan branches differ; the item effect logic is the same. */
#include "common.h"

extern "C" {

/* The skill/item effect record (only the fields read here). */
typedef struct EffectRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 kind;                /* 0xB: ailment guard, 0xC: halve value */
    /* 0x62 */ u8 unk62[0x12];
    /* 0x74 */ u16 percentGain;
    /* 0x76 */ u16 unk76;
} EffectRecord;

typedef struct PassiveSkill {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 flags;               /* 0x1000000: blocks the guard */
} PassiveSkill;

/* A party unit (only the fields used here). */
typedef struct EffectUnit {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s16 value;
    /* 0x2E */ u8 unk2e[2];
    /* 0x30 */ u32 gauge;
    /* 0x34 */ u8 unk34[0x12];
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 level;
    /* 0x49 */ u8 unk49[0x2D];
    /* 0x76 */ u8 tier;
} EffectUnit;

s32 randNextInRange(u32 limit);
EffectUnit *gameGetUnitRecord(void);
EffectUnit *gameGetPlayerData(void);
void FUN_00283f30(u16 skills[8], s32 arg);
void FUN_002485d4(EffectUnit *unit, u16 skills[8]);
s32 playerPadTestBit(u32 bit);
s32 flagWordTestBit(EffectUnit *unit, u32 bit);
void playerPadSetBit(u32 bit);
void objectFlagSetBit(EffectUnit *unit, u32 bit);
PassiveSkill *passiveSkillLookupRecord(u32 id);
u32 dataTable9EntryOrZero(u32 tier);
u32 FUN_00295c60(u32 id, u32 level);
s32 FUN_00295cec(void);
void FUN_0026e630(void);

/* Applies (or, with `dryRun`, only tests) the effect record `effect` on the unit `index` (a
 * negative index is the player): halving the value, guarding with a status bit, growing the gauge
 * by a percent of its cap. Returns 0 when something changed (or would), 1 otherwise. */
u32 FUN_002e33f4(s32 index, EffectRecord *effect, s32 previewOnly, s32 dryRun)
{
    EffectUnit *player = NULL;
    EffectUnit *unit = NULL;
    u32 result = 1;

    if (index < 0) {
        player = gameGetPlayerData();
    } else {
        unit = gameGetUnitRecord();
        if (unit == NULL) {
            return 1;
        }
    }
    if (dryRun == 0) {
        if (effect->kind == 0xB) {
            if (previewOnly == 0 && randNextInRange(99) <= 24) {
                u16 skills[8];
                s32 guarded;

                if (player != NULL) {
                    FUN_00283f30(skills, 0);
                    guarded = playerPadTestBit(5);
                } else {
                    FUN_002485d4(unit, skills);
                    guarded = flagWordTestBit(unit, 5);
                }
                if (guarded == 0) {
                    bool blocked = false;

                    for (s32 i = 0; i < 8; i++) {
                        PassiveSkill *skill = passiveSkillLookupRecord(skills[i]);

                        if (skill != NULL && (skill->flags & 0x1000000) != 0) {
                            blocked = true;
                            break;
                        }
                    }
                    if (!blocked) {
                        if (player != NULL) {
                            playerPadSetBit(5);
                        } else {
                            objectFlagSetBit(unit, 5);
                        }
                        result = 0;
                    }
                }
            }
        } else if (effect->kind == 0xC && previewOnly == 0 && randNextInRange(99) <= 24) {
            EffectUnit *target = player != NULL ? player : unit;

            target->value = target->value / 2;
            result = 0;
        }
    }
    if (effect->percentGain != 0
        && ((player != NULL && dataTable9EntryOrZero(player->tier) != player->gauge)
            || (unit != NULL && FUN_00295c60(unit->id, unit->level) != unit->gauge))) {
        if (dryRun == 0) {
            if (player != NULL) {
                player->gauge += (s32)(effect->percentGain * dataTable9EntryOrZero(player->tier)) / 100;
                if (dataTable9EntryOrZero(player->tier) < player->gauge) {
                    player->gauge = dataTable9EntryOrZero(player->tier);
                }
            } else if (unit != NULL) {
                unit->gauge += (s32)(effect->percentGain * FUN_00295c60(unit->id, unit->level)) / 100;
                if (FUN_00295c60(unit->id, unit->level) < unit->gauge) {
                    unit->gauge = FUN_00295c60(unit->id, unit->level);
                }
            }
        }
        result = 0;
    }
    if (effect->unk76 != 0 && player != NULL && FUN_00295cec() != 9999) {
        if (dryRun == 0) {
            FUN_0026e630();
        }
        result = 0;
    }
    if (previewOnly == 0) {
        result = 0;
    }
    return result;
}

}
