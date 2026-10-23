/* ones_room/onesRoom.c: the player's own room. */
#ifndef ONES_ROOM_ONESROOM_H
#define ONES_ROOM_ONESROOM_H

#include "common.h"
#include <stddef.h>

/* The room's main block, kept by a module global. */
typedef struct OnesRoom {
    /* 0x00 */ u32 job;          /* job that runs the room */
    /* 0x04 */ u8 unk04[0x0D];
    /* 0x11 */ u8 freeOnEnd;     /* 0 = keep the block after the job ends */
} OnesRoom;

/* Work area of the room job. */
typedef struct OnesRoomWork {
    union {
        /* 0x00 */ u8 unk00[4];
        /* 0x00 */ u32 job;
    };
    /* 0x04 */ void *dataA;      /* heap block */
    /* 0x08 */ void *process;    /* script process object */
    /* 0x0C */ void *dataB;      /* heap block */
    /* 0x10 */ u8 active; /* set while the room's own job is running */
    /* 0x11 */ u8 freeOnEnd;
    /* 0x12 */ u8 unk12[2];
} OnesRoomWork;
typedef char OnesRoomWorkLayoutCheck[sizeof(OnesRoomWork) == 0x14 &&
    offsetof(OnesRoomWork, job) == 0 && offsetof(OnesRoomWork, freeOnEnd) == 0x11 ? 1 : -1];

#endif
