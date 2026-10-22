#ifndef MOBICLIP_CTRL_MOBICLIPSTARTSTATE_H
#define MOBICLIP_CTRL_MOBICLIPSTARTSTATE_H

#include "shard/ThreadControl.h"
#include <stddef.h>

struct MobiclipStartRecord {
    u8 unk00[0xc];
    u32 timeScale;
    u32 ticks;
};
struct MobiclipStartTable {
    ThreadControl thread;
    u8 unk028[0x520];
    s32 audioIndex;
};
struct MobiclipStartClock {
    u8 unk00[8];
    s64 position;
};

typedef char MobiclipStartLayoutCheck[
    offsetof(MobiclipStartRecord, timeScale) == 0xc &&
    offsetof(MobiclipStartRecord, ticks) == 0x10 && sizeof(MobiclipStartRecord) == 0x14 &&
    offsetof(MobiclipStartTable, audioIndex) == 0x548 && sizeof(MobiclipStartTable) == 0x54c &&
    offsetof(MobiclipStartClock, position) == 8 && sizeof(MobiclipStartClock) == 0x10 ? 1 : -1];

#endif
