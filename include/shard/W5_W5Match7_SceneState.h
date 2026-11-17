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


extern "C" {
extern MapEntry g_mapEntries[];
}

#endif
