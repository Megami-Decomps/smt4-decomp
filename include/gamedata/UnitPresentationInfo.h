#ifndef GAMEDATA_UNIT_PRESENTATION_INFO_H
#define GAMEDATA_UNIT_PRESENTATION_INFO_H
#include "common.h"
#include <stddef.h>

struct UnitPresentationInfo {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 hp;
    /* 0x00C */ u32 mp;
    /* 0x010 */ s32 maximumHp;
    /* 0x014 */ u32 maximumMp;
    /* 0x018 */ u8 unk018[0x628];
};
typedef char UnitPresentationInfoOffsets[
    offsetof(UnitPresentationInfo, hp) == 8 &&
    offsetof(UnitPresentationInfo, maximumHp) == 0x10 &&
    sizeof(UnitPresentationInfo) == 0x640 ? 1 : -1];
#endif
