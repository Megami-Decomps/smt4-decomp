#ifndef SHARD_W6_W6MATCH6_ACTION_CONTROLLER_H
#define SHARD_W6_W6MATCH6_ACTION_CONTROLLER_H
#include "common.h"

struct ActionActor {
    u8 unk00[0x62];
    s16 id; // 0x62
};
struct ActionTrack {
    s16 unk00;
    s16 startFrame; // 0x02
    s16 trigger; // 0x04
    s16 value; // 0x06
};
struct ActionEvent {
    s16 argument; // 0x00
    s16 frame; // 0x02
    s16 action; // 0x04
};
struct ActionEvents {
    ActionEvent entries[2]; // 0x00
    s16 extraFrame; // 0x0c
    s16 extraAction; // 0x0e
};
struct ActionSequence {
    u8 unk00[4];
    s16 kind; // 0x04
    u16 unk06;
    u8 flags; // 0x08
    u8 color[3]; // 0x09: percent per channel
    ActionEvents events; // 0x0c
    u8 unk1c[0x64];
    s16 startX; // 0x80
    s16 startY; // 0x82
    s16 unk84[2];
    s16 firstX; // 0x88
    s16 firstY; // 0x8a
    s16 unk8c[2];
    s16 secondX; // 0x90
    s16 secondY; // 0x92
};
struct ActionController {
    u8 unk0000[0x3028];
    u32 flags; // 0x3028
    u8 unk302c[0x14];
    u8 state; // 0x3040
    u8 loops; // 0x3041
    s16 previousFrame; // 0x3042
    u16 loopLength; // 0x3044
    u16 unk3046;
    ActionActor *actor; // 0x3048
    void *animation; // 0x304c
    ActionTrack *tracks; // 0x3050
    ActionSequence *sequence; // 0x3054
};
#endif
