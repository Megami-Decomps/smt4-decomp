/* NON_MATCHING: unit/denominator register retention replaces retail spills/reloads; inner-loop limit and minimum-experience branch lowering differ, possibly under alternate optimization. */
#include "shard/PadState.h"

struct ExperienceResult {
    u8 unk0000[0x35b4];
    s32 playerExperience;
    s32 unitExperience[24];
};
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
struct ExperienceSkill {
    u8 unk00[0x2f];
    u8 percentage;
};

extern "C" {
extern ExperienceResult *g_result;
u8 *gameGetSlotTable();
PadState *gameGetPlayerData();
u16 dataTable09Sub3GetRecord(s32, s32);
u8 playerPadTestBit(u32);
ExperienceUnit *gameGetUnitRecord(u32);
u32 flagWordTestBit(const ExperienceUnit *, u32);
ExperienceSkill *passiveSkillLookupRecord(u32);

// Each reward consists of the base experience followed by the defeated unit's level.
void resultAddExperienceReward(const s32 *reward)
{
    ExperienceResult *result = g_result;
    ExperienceParty *party = (ExperienceParty *)gameGetSlotTable();
    PadState *player = gameGetPlayerData();
    s32 base = reward[0];
    s32 level = reward[1];
    s32 playerExperience = base * dataTable09Sub3GetRecord(player->unk76, level) / 100;
    if (playerExperience <= 0 && base != 0) {
        playerExperience = 1;
    }
    if (!playerPadTestBit(1) && !playerPadTestBit(10)) {
        result->playerExperience += playerExperience;
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
        f32 multiplier = 1.0f;
        for (s32 skillIndex = 0; skillIndex < 8; ++skillIndex) {
            u16 skillId = experienceUnit->skills[skillIndex];
            if (skillId != 0) {
                ExperienceSkill *skill = passiveSkillLookupRecord(skillId);
                if (skill != NULL && skill->percentage != 0) {
                    multiplier = (f32)(u32)skill->percentage * 0.01f * multiplier;
                }
            }
        }
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
