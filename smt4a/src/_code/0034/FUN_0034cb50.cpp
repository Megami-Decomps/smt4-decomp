/* NON_MATCHING: logic and instruction mix match; the allocator spills a different set of accumulators (retail keeps the mp percent and the first two stat bonuses in registers, hp percent and the rest on the stack). */
#include "common.h"

namespace {
struct PassiveSkillRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 hpPercentTens;
    /* 0x25 */ u8 mpPercentTens;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u8 statBonus[5];
    /* 0x2D */ u8 unk2D[0x17];
    /* 0x44 */ u32 kind;
};
}

extern "C" {
const PassiveSkillRecord *dataTable41FindById(u32 id);

/* Apply the stat-boosting passive skills (kind 10) to a unit's hp, mp and five stats. */
void FUN_0034cb50(s16 *stats, const u16 *skills, s32 skillCount)
{
    s16 bonusA = 0;
    u32 mpPercent = 100;
    s16 bonusB = 0;
    u32 hpPercent = 100;
    s16 bonusC = 0;
    s16 bonusD = 0;
    s16 bonusE = 0;
    for (s32 i = 0; i < skillCount; i++) {
        if (skills[i] == 0) {
            continue;
        }
        const PassiveSkillRecord *skill = dataTable41FindById(skills[i]);
        if (skill != NULL && ((skill->kind >> 6) & 0x1F) == 10) {
            hpPercent += skill->hpPercentTens * 10;
            mpPercent += skill->mpPercentTens * 10;
            bonusA = (s16)(bonusA + skill->statBonus[0]);
            bonusB = (s16)(bonusB + skill->statBonus[1]);
            bonusC = (s16)(bonusC + skill->statBonus[2]);
            bonusD = (s16)(bonusD + skill->statBonus[3]);
            bonusE = (s16)(bonusE + skill->statBonus[4]);
        }
    }
    u32 hp = stats[0];
    if (hp != 0) {
        u32 scaled = hp * hpPercent / 100;
        if (scaled == hp && hpPercent > 100) {
            scaled++;
        }
        hp = scaled > 9999 ? 9999 : (scaled == 0 ? 1 : scaled);
    }
    stats[0] = (s16)hp;
    u32 mp = stats[1];
    if (mp != 0) {
        u32 scaled = mp * mpPercent / 100;
        if (scaled == mp && mpPercent > 100) {
            scaled++;
        }
        mp = scaled > 9999 ? 9999 : (scaled == 0 ? 1 : scaled);
    }
    stats[1] = (s16)mp;
    s32 value = stats[2] + bonusA;
    stats[2] = (s16)(value > 999 ? 999 : (value < 1 ? 1 : value));
    value = stats[3] + bonusB;
    stats[3] = (s16)(value > 999 ? 999 : (value < 1 ? 1 : value));
    value = stats[4] + bonusC;
    stats[4] = (s16)(value > 999 ? 999 : (value < 1 ? 1 : value));
    value = stats[5] + bonusD;
    stats[5] = (s16)(value > 999 ? 999 : (value < 1 ? 1 : value));
    value = stats[6] + bonusE;
    stats[6] = (s16)(value > 999 ? 999 : (value < 1 ? 1 : value));
}
}
