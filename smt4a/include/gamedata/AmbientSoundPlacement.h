#ifndef GAMEDATA_AMBIENT_SOUND_PLACEMENT_H
#define GAMEDATA_AMBIENT_SOUND_PLACEMENT_H

#include "common.h"
#include <stddef.h>

/* A map placement in data table 0x2d, section 4. */
struct Table2dSection4Record {
    /* 0x00 */ s8 map;
    /* 0x01 */ s8 area;
    /* 0x02 */ s16 x;
    /* 0x04 */ s16 y;
    /* 0x06 */ s16 z;
    /* 0x08 */ s32 sound;
    /* 0x0C */ s16 requiredFlag;
    /* 0x0E */ s16 forbiddenFlag;
};
typedef char AmbientSoundPlacementLayoutCheck[
    sizeof(Table2dSection4Record) == 0x10 && offsetof(Table2dSection4Record, x) == 2 &&
    offsetof(Table2dSection4Record, sound) == 8 &&
    offsetof(Table2dSection4Record, forbiddenFlag) == 0xE ? 1 : -1];

#endif
