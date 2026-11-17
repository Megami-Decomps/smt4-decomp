#ifndef STATUS_STATUSDOWNPARTS_H
#define STATUS_STATUSDOWNPARTS_H
#include "common.h"
#include "ui/GridNavigation.h"

/* Sub-objects of the status screen's work area, the same in both games (StatusDownState in
 * status/StatusDown.h, StatusDownStateA in status/StatusDownA.h). */

/* The screen's state with its predecessor: entering a state copies `state` to `previous`
 * (retail addresses the pair through one pointer). */
typedef struct StatusDownTrack {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 previous;
} StatusDownTrack;

/* A demon listed by statusBuildFlaggedDemonList: its id and the flag that marks it. */
typedef struct FlaggedDemonEntry {
    u16 id;
    u16 flag;
} FlaggedDemonEntry;

/* The demons whose flag is set (statusBuildFlaggedDemonList), with their grid. */
typedef struct StatusDownFlaggedList {
    /* 0x000 */ FlaggedDemonEntry entries[512];
    /* 0x800 */ s16 count;
    /* 0x802 */ s16 total;            /* demons with a flag, set or not */
    /* 0x804 */ GridNavigation navigation;
} StatusDownFlaggedList;

/* The owned-demon inventory tab: (demon id, quantity) rows and their grid. */
typedef struct StatusDownInventory {
    /* 0x0000 */ u16 entries[0x500][2];
    /* 0x1400 */ s16 count;
    /* 0x1402 */ s16 ownedCount;
    /* 0x1404 */ s16 column;
    /* 0x1406 */ s16 row;
    /* 0x1408 */ u32 unk1408;
    /* 0x140C */ GridNavigation navigation;
} StatusDownInventory;

typedef char StatusDownPartsLayoutCheck[sizeof(StatusDownFlaggedList) == 0x868 &&
    sizeof(StatusDownInventory) == 0x1470 ? 1 : -1];

#endif
