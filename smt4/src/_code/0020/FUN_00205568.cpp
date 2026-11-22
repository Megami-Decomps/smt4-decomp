/* NON_MATCHING: retail unrolls each eight-skill walk by two (a pointer biased by -2, a count-down of 4; the player walk peeled at both ends); armcc here keeps one skill per iteration and compares the pointer against the end. */
#include "common.h"
#include <stddef.h>
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTableIV.h"

/* Two skill references packed into one 64-bit word. */
struct PackedSkillPair {
    u64 first : 15;
    u64 second : 15;
    u64 firstKind : 2;
    u64 secondKind : 2;
};

/* Skills already covered: twelve ids with a flag byte each. */
struct SkillExclusions {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 ids[12];
    /* 0x1A */ u8 flags[12];
};
typedef char SkillExclusionsOffsetCheck[offsetof(SkillExclusions, flags) == 0x1A ? 1 : -1];

struct SkillSourceView {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u16 skills[8];
};
struct PlayerSkillView {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 skills[8];
};
struct UnitSkillView {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ u8 unk44[2];
    /* 0x46 */ u16 id;
};

extern "C" {
UnitSkillView *gameGetUnitRecord(s32 index);

/* Appends a non-empty skill to the output (when one is given) and counts it. */
static __inline s32 appendSkill(u16 *out, s32 count, u16 skill)
{
    if (skill != 0) {
        if (out != NULL)
            out[count] = skill;
        count++;
    }
    return count;
}

/* Collects the skills of the source, the player and each party unit that is not excluded; returns how many. */
s32 FUN_00205568(u16 *out, const SkillSourceView *source, const PackedSkillPair *covered, const SkillExclusions *exclusions)
{
    s32 count = 0;
    for (const u16 *skill = source->skills; skill < source->skills + 8; skill++)
        count = appendSkill(out, count, *skill);
    PlayerSkillView *player = reinterpret_cast<PlayerSkillView *>(gameGetPlayerData());
    for (const u16 *skill = player->skills; skill < player->skills + 8; skill++)
        count = appendSkill(out, count, *skill);
    SaveSlotTableIV *slots = gameGetSlotTable();
    for (s32 slot = 0; slot < 24; slot++) {
        if (slots->stock[slot] < 0)
            break;
        UnitSkillView *unit = gameGetUnitRecord(slots->stock[slot]);
        if (covered != NULL && ((covered->first == (u64)unit->id && covered->firstKind == 1) ||
                                (covered->second == (u64)unit->id && covered->secondKind == 1)))
            continue;
        if (exclusions != NULL) {
            bool excluded = false;
            for (s32 i = 0; i < 12; i++) {
                if (exclusions->ids[i] == unit->id && exclusions->flags[i] == 1)
                    excluded = true;
            }
            if (excluded)
                continue;
        }
        for (const u16 *skill = unit->skills; skill < unit->skills + 8; skill++)
            count = appendSkill(out, count, *skill);
    }
    return count;
}
}
