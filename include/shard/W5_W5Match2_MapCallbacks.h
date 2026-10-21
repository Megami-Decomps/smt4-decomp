#ifndef SHARD_W5_W5MATCH2_MAPCALLBACKS_H
#define SHARD_W5_W5MATCH2_MAPCALLBACKS_H

#include "common.h"

struct MapMainCallbackWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 requested;
};

struct MapObjectCallbackWork {
    /* 0x000 */ u8 unk000[0x6D4];
    /* 0x6D4 */ void *entry;
};

struct ModelRequestWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 requested;
    /* 0x0D */ u8 unk0D[0x1F];
    /* 0x2C */ u32 model;
};

struct MapEnemyRequestWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 counter;
    /* 0x0C */ u32 first;
    /* 0x10 */ u32 second;
};

struct ResourceCallbackWork {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ void *resource;
};

struct CampCecWork {
    /* 0x000 */ u8 unk000[0xD28];
    /* 0xD28 */ s32 state;
};

struct NameCallbackWork {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 visible;
    /* 0x0E */ u8 unk0E[2];
    /* 0x10 */ u8 drawing[1];
};

struct NameCallbackGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ NameCallbackWork *work;
};

#endif
