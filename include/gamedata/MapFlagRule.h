#ifndef GAMEDATA_MAPFLAGRULE_H
#define GAMEDATA_MAPFLAGRULE_H

#include "common.h"

struct MapFlagRule {
    /* 0x00 */ s8 group;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 type;
    /* 0x03 */ s8 flag;
};

#endif
