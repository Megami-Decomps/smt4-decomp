#ifndef SHARD_W8X15_MODELSTATEPLAYER_H
#define SHARD_W8X15_MODELSTATEPLAYER_H
#include "common.h"

#define MODEL_MOTION_NONE 0xffff

/* The owner of the models a state player switches between. */
struct ModelStateOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *models;
};

/* An object that shows one of its owner's models per state. */
struct ModelStatePlayer {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelStateOwner *owner;
    /* 0x0c */ u8 unk0c[0x20];
    /* 0x2c */ s32 state;
};

extern "C" {
void FUN_00421858(ModelStatePlayer *player);
void *FUN_0040619c(void *models, u32 index);
u32 FUN_003fdadc(void);
u32 ownerSlotSetText(void *model, u32 name);
u32 FUN_001a79e8(void *model, u32 name);
void FUN_003fd924(void *model, u32 motion, s32 mode, f32 start, f32 blend);
void FUN_003fd7c0(void *model, u32 motion, s32 mode, f32 start);
}

/* The owner's model `index`, or NULL without an owner. */
static inline void *modelStateOwnerGetModel(ModelStateOwner *owner, u32 index)
{
    if (owner == NULL) {
        return NULL;
    }
    return FUN_0040619c(owner->models, index);
}

#endif
