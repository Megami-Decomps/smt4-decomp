#ifndef SKILL_SKILL_SLOT_SCREEN_H
#define SKILL_SKILL_SLOT_SCREEN_H
#include "common.h"
#include <stddef.h>

/* The skill selection screen's slot list (offsets from the screen object). */
struct SkillSlotScreen {
    /* 0x0000 */ u8 unk0000[0x8b60];
    /* 0x8b60 */ u16 slots[8];
    /* 0x8b70 */ u16 candidates[0x60];
    /* 0x8c30 */ u8 unk8c30[0x180];
    /* 0x8db0 */ u8 slotCursor[0x64];
    /* 0x8e14 */ u8 candidateCursor[0x68];
    /* 0x8e7c */ s32 freedCount;
    /* 0x8e80 */ u8 unk8e80[0xc];
    /* 0x8e8c */ s32 freedSlots[8];
};

typedef char SkillSlotScreenOffsets[
    offsetof(SkillSlotScreen, slots) == 0x8b60 &&
    offsetof(SkillSlotScreen, candidates) == 0x8b70 &&
    offsetof(SkillSlotScreen, slotCursor) == 0x8db0 &&
    offsetof(SkillSlotScreen, candidateCursor) == 0x8e14 &&
    offsetof(SkillSlotScreen, freedCount) == 0x8e7c &&
    offsetof(SkillSlotScreen, freedSlots) == 0x8e8c ? 1 : -1];

#endif
