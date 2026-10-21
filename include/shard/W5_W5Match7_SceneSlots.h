#ifndef SHARD_W5_W5MATCH7_SCENESLOTS_H
#define SHARD_W5_W5MATCH7_SCENESLOTS_H

#include "shard/W5_W5Match7_SceneState.h"

struct SceneSlot {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[7];
    /* 0x008 */ MapVector position;
    /* 0x014 */ u8 unk014[0xc];
    /* 0x020 */ MapVector previousPosition;
    /* 0x02c */ f32 value;
    /* 0x030 */ u8 unk030[0x4d];
    /* 0x07d */ u8 locked;
    /* 0x07e */ u8 unk07e[6];
    /* 0x084 */ s32 state;
    /* 0x088 */ s32 stateTime;
    /* 0x08c */ u8 unk08c[0x78];
    /* 0x104 */ f32 origin[4];
    /* 0x114 */ f32 destination[4];
    /* 0x124 */ f32 duration;
    /* 0x128 */ MapVector velocity;
    /* 0x134 */ f32 progress;
    /* 0x138 */ u8 unk138[0x44];
    /* 0x17c */ s32 kind;
    /* 0x180 */ u8 unk180[8];
};

struct SceneSlotList {
    /* 0x0000 */ u8 unk0000[0x34];
    /* 0x0034 */ SceneSlot slots[40];
    /* 0x3d74 */ u8 unk3d74[8];
    /* 0x3d7c */ s32 activeCount;
};

extern "C" {
extern SceneSlotList *g_mapEnemy;
}

#endif
