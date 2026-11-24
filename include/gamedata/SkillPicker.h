#ifndef GAMEDATA_SKILLPICKER_H
#define GAMEDATA_SKILLPICKER_H
#include "common.h"
#include <stddef.h>

/* A list of skill ids (8 bytes): the pickers read a list's pointer and count with one ldm. */
struct SkillIdList {
    /* 0x0 */ u16 *ids;
    /* 0x4 */ s32 count;
};

/* The skill inheritance/learning picker's work (FUN_001cffd0, FUN_001d01f8, FUN_001df8d4): the candidate
 * skills, the passive skills that may follow them and the skills already chosen. */
struct SkillPicker {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SkillIdList candidates;
    /* 0x0C */ SkillIdList passives;        /* skills the demon already holds */
    /* 0x14 */ SkillIdList unk14;
    /* 0x1C */ SkillIdList chosen;
    /* 0x24 */ SkillIdList unk24;
    /* 0x2C */ u8 preferredElement;         /* compared with idMapLookup of each candidate */
    /* 0x2D */ u8 unk2D[3];
    /* 0x30 */ s32 rankByType[8];           /* indexed by the skill's category */
};

enum { SKILL_PICKER_BASE_POINTS_MASK = 0x1F };

/* Starts the score with the candidate's points and a one-percent bonus. */
static __inline f32 skillPickerInitialScore(u32 points)
{
    const f32 basePoints = (f32)points;
    f32 score = basePoints;
    score += basePoints * 0.01f;
    return score;
}

typedef char SkillPickerLayout[
    offsetof(SkillPicker, chosen) == 0x1C && offsetof(SkillPicker, preferredElement) == 0x2C &&
    sizeof(SkillPicker) == 0x50 ? 1 : -1];

#endif
