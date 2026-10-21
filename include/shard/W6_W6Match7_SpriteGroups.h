#ifndef SHARD_W6_W6MATCH7_SPRITEGROUPS_H
#define SHARD_W6_W6MATCH7_SPRITEGROUPS_H
#include "common.h"

struct SpriteGroupDefinition {
    /* 0x00 */ u32 offset;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 flags;
    /* 0x0c */ u32 count;
    /* 0x10 */ u32 kind;
};

struct SpriteGroupData {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 frameCount;
};

struct SpriteGroupResource {
    u8 *data;
    SpriteGroupDefinition *groups;
};

struct SpriteGroupChild {
    s16 group;
    s16 startFrame;
    u8 unk04[0x14];
};

struct SpriteGroupState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 frame;
    /* 0x08 */ s32 frameCount;
    /* 0x0c */ SpriteGroupDefinition *definition;
    /* 0x10 */ SpriteGroupData *data;
};

struct SpriteGroupPlayer {
    /* 0x00 */ SpriteGroupResource *resource;
    /* 0x04 */ u32 flags;
    /* 0x08 */ s32 group;
    /* 0x0c */ u32 count;
    /* 0x10 */ SpriteGroupState *states;
    /* 0x14 */ u16 active;
};

static __inline void spriteGroupStateInitialize(SpriteGroupResource *resource,
                                                s32 group, SpriteGroupState *state)
{
    SpriteGroupDefinition *definition = &resource->groups[group];
    SpriteGroupData *data = reinterpret_cast<SpriteGroupData *>(resource->data + definition->offset);
    state->frame = 0;
    state->frameCount = data->frameCount;
    state->definition = definition;
    state->data = data;
}
#endif
