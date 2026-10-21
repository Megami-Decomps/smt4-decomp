#ifndef SHARD_W5_W5MATCH2_MAPINTERFACEWORK_H
#define SHARD_W5_W5MATCH2_MAPINTERFACEWORK_H

#include "common.h"

struct MapInterfaceWork {
    /* 0x0000 */ u8 unk0000[0x18];
    /* 0x0018 */ u8 active;
    /* 0x0019 */ u8 unk0019[3];
    /* 0x001C */ u32 counter;
    /* 0x0020 */ u8 unk0020[0xCBCC];
    /* 0xCBEC */ u32 model;
};

#endif
