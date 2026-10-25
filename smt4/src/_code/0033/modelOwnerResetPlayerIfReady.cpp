#include "common.h"

extern "C" {

/* The model owner: its model object at +0x4398 and the model's animation player at +8 of that. */
typedef struct AnimPlayer {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 loopPolicy;
} AnimPlayer;

typedef struct ModelObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AnimPlayer *player;
} ModelObject;

typedef struct ModelOwner {
    /* 0x0000 */ u8 unk0000[0x4398];
    /* 0x4398 */ ModelObject *model;
} ModelOwner;

void animPlayerSetLoopPolicy(AnimPlayer *player, s32 policy);
void nodeSetScale(AnimPlayer *player, s32 flag, f32 x, f32 y, f32 z);
void FUN_002a0428(ModelObject *model, s32 mode);
void animOwnerSetScale(ModelObject *model, f32 value);
s32 modelHasLoadedAttachment(ModelObject *model);

/* Resets the owner's model when it is ready and its player has a negative loop policy (unit scale, loop policy 1); returns whether it was ready. */
u32 modelOwnerResetPlayerIfReady(ModelOwner *owner)
{
    if (modelHasLoadedAttachment(owner->model) == 0) {
        return 0;
    }
    if (owner->model->player->loopPolicy < 0) {
        FUN_002a0428(owner->model, 1);
        nodeSetScale(owner->model->player, 0, 1.0f, 1.0f, 1.0f);
        animPlayerSetLoopPolicy(owner->model->player, 1);
        animOwnerSetScale(owner->model, 1.0f);
    }
    return 1;
}

} /* extern "C" */
