/* NON_MATCHING: the skill multiplier loop (a plain static helper, as in resultApplySpoils) now matches; retail keeps the defeated level in fp where the build spills it, so the divisor constant, the gained-experience clamps (predicated in retail) and the frame differ. */
#include "shard/PadState.h"
#include "shard/PassiveSkill.h"
#include "result/Result.h"
#include "gamedata/FlagBitTests.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTableIV.h"

struct ExperienceParty {
    u8 unk0000[0x90f0];
    s8 slots[24];
};
struct ExperienceUnit {
    u32 flags;
    u8 unk04[0x30];
    u16 skills[8];
    u8 unk44[4];
    u8 level;
    u8 unk49;
    u8 resultIndex;
    u8 unk4b;
};

extern "C" {
u16 dataTable09Sub3GetRecord(s32, s32);
u8 playerPadTestBit(u32);
ExperienceUnit *gameGetUnitRecord(u32);

/* The experience multiplier of a unit's passive skills: the product of their bonuses (percent). */
static f32 skillExpMultiplier(const u16 *skills, s32 count)
{
    f32 multiplier = 1.0f;
    for (s32 skillIndex = 0; skillIndex < count; ++skillIndex) {
        u16 skillId = skills[skillIndex];
        if (skillId != 0) {
            const PassiveSkillRecord *skill = passiveSkillLookupRecord(skillId);
            if (skill != NULL && skill->experience.expBonus != 0) {
                multiplier = (f32)(u32)skill->experience.expBonus * 0.01f * multiplier;
            }
        }
    }
    return multiplier;
}

// Each reward consists of the base experience followed by the defeated unit's level.
void resultAddExperienceReward(const s32 *reward)
{
    ResultWork *result = g_result;
    ExperienceParty *party = (ExperienceParty *)gameGetSlotTable();
    PadState *player = reinterpret_cast<PadState *>(gameGetPlayerData());
    s32 base = reward[0];
    s32 level = reward[1];
    s32 playerExperience = base * dataTable09Sub3GetRecord(player->unk76, level) / 100;
    if (playerExperience <= 0 && base != 0) {
        playerExperience = 1;
    }
    if (!playerPadTestBit(1) && !playerPadTestBit(10)) {
        result->totalExperience += playerExperience;
    }
    for (s32 index = 0; index < 24; ++index) {
        if (party->slots[index] < 0) {
            continue;
        }
        ExperienceUnit *unit = gameGetUnitRecord(party->slots[index]);
        if (flagWordTestBit(unit, 1) || flagWordTestBit(unit, 10) ||
            flagWordTestBit(unit, 2)) {
            continue;
        }
        ExperienceUnit *experienceUnit = gameGetUnitRecord(party->slots[index]);
        f32 multiplier = skillExpMultiplier(experienceUnit->skills, 8);
        u32 scaled = (u32)(base * (s32)(multiplier * 100.0f)) / 100;
        u32 gained = scaled * dataTable09Sub3GetRecord(experienceUnit->level, level) / 100;
        if (gained == 0 && scaled != 0) {
            gained = 1;
        }
        if ((s32)gained <= 0 && base != 0) {
            gained = 1;
        }
        result->unitExperience[unit->resultIndex] += gained;
    }
}
}
