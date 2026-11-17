#ifndef SHARD_W5_W5MATCH7_SCENESTATE_H
#define SHARD_W5_W5MATCH7_SCENESTATE_H

#include "map/mapDepart.h"
#include "map/LmapGlobals.h" /* per game: g_lmapScene */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>


struct MapEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 kind;
    /* 0x08 */ MapVector origin;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 flags;
    /* 0x1c */ MapVector position;
    /* 0x28 */ f32 value;
    /* 0x2c */ s32 status;
};


struct MapGimicResource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *object;
};

struct MapGimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x13];
    /* 0x14 */ MapGimicResource *resource;
    /* 0x18 */ u8 unk18[0x10];
    /* 0x28 */ s32 value;
};

struct MapGimic {
    /* 0x000 */ u8 unk000[0x9b4];
    /* 0x9b4 */ MapGimicEntry entry;
};

extern "C" {
extern MapEntry g_mapEntries[];
extern MapGimic *g_mapGimic;
}

#endif
