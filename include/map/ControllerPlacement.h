/* One placed object of the current map (0x24 bytes): the rows FUN_00379958 returns, dataTableGetRecordFifty() of
 * them. A row places a controller (smt4a FUN_00482fe8) or a visible enemy (smt4a mapEnemyPlaceFromRows). */
#ifndef MAP_CONTROLLERPLACEMENT_H
#define MAP_CONTROLLERPLACEMENT_H

#include "common.h"
#include <stddef.h>

struct ControllerPlacement {
    /* 0x00 */ s8 kind;            /* the map it stands in; -1: unused row */
    /* 0x01 */ s8 sub;             /* the room of that map */
    /* 0x02 */ s16 x;
    /* 0x04 */ s16 y;
    /* 0x06 */ s16 z;
    /* 0x08 */ s16 heading;
    /* 0x0A */ u8 enemyType;       /* 1: waits when enemyUnk0C is 0, 2: locked, 3: placed at once */
    /* 0x0B */ s8 enemyRoute;      /* 0 and 1 choose the placed enemy's first state */
    /* 0x0C */ u16 enemyUnk0C;
    /* 0x0E */ s8 enemyKind;       /* which extra model the enemy uses */
    /* 0x0F */ u8 unk0F;
    /* 0x10 */ s16 sourceValue;
    /* 0x12 */ u16 modelId;
    /* 0x14 */ s16 requiredFlag;
    /* 0x16 */ s16 forbiddenFlag;
    /* 0x18 */ s16 param0;
    /* 0x1A */ s16 param1;
    /* 0x1C */ u32 param2;
    /* 0x20 */ s16 param3;
    /* 0x22 */ s16 param4;
};
typedef char ControllerPlacementLayoutCheck[sizeof(ControllerPlacement) == 0x24 &&
    offsetof(ControllerPlacement, sourceValue) == 0x10 && offsetof(ControllerPlacement, param2) == 0x1C ? 1 : -1];

#endif
