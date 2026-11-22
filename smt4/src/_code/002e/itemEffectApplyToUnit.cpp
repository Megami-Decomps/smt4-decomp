/* NON_MATCHING: retail keeps the guard loop's flag in a stack slot and the parameters in r7/sl/r9 (here r9/sl/r8
 * after the entry push of r0-r3); the effect logic and the branch layout follow retail. */
#include "code/Code002e.h"
#include "common.h"
#include "shard/PassiveSkill.h"
#include "gamedata/UnitRecordAccess.h"
#include "util/Random.h"

extern "C" {

/* The skill/item effect record (only the fields read here). */
typedef struct EffectRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 kind;                /* 0xB: ailment guard, 0xC: halve value */
    /* 0x62 */ u8 unk62[0x12];
    /* 0x74 */ u16 percentGain;
    /* 0x76 */ u16 unk76;
} EffectRecord;

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

EffectUnit *gameGetPlayerData(void);
void playerCollectPassiveSkillBits(u16 skills[8], s32 arg);
void halves34Copy(EffectUnit *unit, u16 skills[8]); // declcheck: local (the shared declaration in code/Code0024_Smt4.h does not compile here: argument of type "EffectUnit *" is incompatible with parameter of type "Source *")
s32 playerPadTestBit(u32 bit);
s32 flagWordTestBit(EffectUnit *unit, u32 bit);
void playerPadSetBit(u32 bit);
void objectFlagSetBit(EffectUnit *unit, u32 bit);
u32 dataTable9EntryOrZero(u32 tier);
u32 devilCalcLevelScaledCost(u32 id, u32 level);
void gameSaveAddPointsClamped(void);

/* Applies (or, with `dryRun`, only tests) the effect record `effect` on the unit `index` (a
 * negative index is the player): halving the value, guarding with a status bit, growing the gauge
 * by a percent of its cap. Returns 0 when something changed (or would), 1 otherwise. */
u32 itemEffectApplyToUnit(s32 index, EffectRecord *effect, s32 previewOnly, s32 dryRun)
{
    EffectUnit *player = NULL;
    EffectUnit *unit = NULL;
    u32 result;

    if (index < 0) {
        player = gameGetPlayerData();
    } else {
        unit = reinterpret_cast<EffectUnit *>(gameGetUnitRecord(index)); /* the view is shared with the player record */
        if (unit == NULL) {
            return 1;
        }
    }
    result = 1;
    if (dryRun == 0) {
        switch (effect->kind) {
        case 0xB: {
            u16 skills[8];
            bool allowed;

            if (previewOnly != 0 || randNextInRange(99) >= 25) {
                break;
            }
            if (player != NULL) {
                playerCollectPassiveSkillBits(skills, 0);
                if (playerPadTestBit(5) != 0) {
                    break;
                }
            } else {
                halves34Copy(unit, skills);
                if (flagWordTestBit(unit, 5) != 0) {
                    break;
                }
            }
            allowed = true;
            for (s32 i = 0; allowed && i < 8; i++) {
                const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[i]);

                if (skill != NULL && (skill->affinity & 0x1000000) != 0) {
                    allowed = false;
                }
            }
            if (allowed) {
                if (player != NULL) {
                    playerPadSetBit(5);
                } else {
                    objectFlagSetBit(unit, 5);
                }
                result = 0;
            }
            break;
        }
        case 0xC: {
            EffectUnit *target;

            if (previewOnly != 0 || randNextInRange(99) >= 25) {
                break;
            }
            target = player != NULL ? player : unit;
            target->value = target->value / 2;
            result = 0;
            break;
        }
        }
    }
    if (effect->percentGain != 0
        && ((player != NULL && dataTable9EntryOrZero(player->tier) != player->gauge)
            || (unit != NULL && devilCalcLevelScaledCost(unit->id, unit->level) != unit->gauge))) {
        if (dryRun == 0) {
            if (player != NULL) {
                player->gauge += (s32)(effect->percentGain * dataTable9EntryOrZero(player->tier)) / 100;
                if (dataTable9EntryOrZero(player->tier) < player->gauge) {
                    player->gauge = dataTable9EntryOrZero(player->tier);
                }
            } else if (unit != NULL) {
                unit->gauge += (s32)(effect->percentGain * devilCalcLevelScaledCost(unit->id, unit->level)) / 100;
                if (devilCalcLevelScaledCost(unit->id, unit->level) < unit->gauge) {
                    unit->gauge = devilCalcLevelScaledCost(unit->id, unit->level);
                }
            }
        }
        result = 0;
    }
    if (effect->unk76 != 0 && player != NULL && gameSaveGetPoints() != 9999) {
        if (dryRun == 0) {
            gameSaveAddPointsClamped();
        }
        result = 0;
    }
    if (previewOnly == 0) {
        result = 0;
    }
    return result;
}

}
