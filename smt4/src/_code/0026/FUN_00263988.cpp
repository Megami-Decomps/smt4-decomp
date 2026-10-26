/* NON_MATCHING: only register naming differs: retail keeps &current in r6 and the motion in r7, and 0.0f/1.0f in s16/s17 (here swapped). */
#include "common.h"

extern "C" {
typedef f32 (*AnimationPolicy)(void *context, f32 start, f32 end, f32 frame);
f32 mathClampFloat(void *context, f32 start, f32 end, f32 frame);
f32 nw_anim_PlayPolicy_Loop(void *context, f32 start, f32 end, f32 frame);
}

/* A playing animation: its vtable's slot 8 refreshes it after the state changes. */
struct AnimationPlayer {
    virtual void vfn00();
    virtual void vfn04();
    virtual void vfn08();
    virtual void vfn0C();
    virtual void vfn10();
    virtual void vfn14();
    virtual void vfn18();
    virtual void vfn1C();
    virtual void refresh();
    /* 0x04 */ u8 unk04[0x34];
    /* 0x38 */ f32 frame;
    /* 0x3C */ f32 previous;
    /* 0x40 */ f32 speed;
    /* 0x44 */ f32 start;
    /* 0x48 */ f32 end;
    /* 0x4C */ AnimationPolicy policy;
    /* 0x50 */ void *context;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u8 dirty;
};

struct ModelSlotObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AnimationPlayer *player;
};

struct ModelSwitcher {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ void *models[2];
    /* 0x03C */ ModelSlotObject *slots[8];
    /* 0x05C */ u8 unk05C[0x4F4];
    /* 0x550 */ s32 current;
    /* 0x554 */ u8 unk554[0xC];
    /* 0x560 */ s32 modelIndex;
};

struct TintColor {
    f32 red, green, blue, alpha;
    TintColor(f32 r, f32 g, f32 b, f32 a) : red(r), green(g), blue(b), alpha(a) {}
};

extern "C" {
void asdModelSlotSetColor(s32 slot, u32 index, f32 r, f32 g, f32 b);
void asdModelSlotSetTint(s32 slot, u32 bank, TintColor color);
void FUN_0029c2cc(void *slot, s32 index);
void modelSlotAttachChild(void *slot, s32 index);
void asdModelResetAndSelectSecondaryMotion(void *model, s32 motion, f32 blend, f32 speed);
void animOwnerSetScale(void *model, f32 speed);
void FUN_002e1230(void *model, s32 loop);

static __inline void resetAnimation(AnimationPlayer *player)
{
    f32 frame = player->policy(player->context, player->start, player->end, 0.0f);
    player->previous = player->frame;
    player->frame = frame;
    player->dirty = 1;
}

/* Switches the active motion slot: stops the old one, starts the new one and sets its loop policy and tint. */
void FUN_00263988(ModelSwitcher *switcher, s32 motion)
{
    if (switcher->current == motion) {
        return;
    }
    if (switcher->current != -1) {
        FUN_0029c2cc(switcher->slots[switcher->current], 0);
        animOwnerSetScale(switcher->models[switcher->modelIndex], 0.0f);
        AnimationPlayer *old = switcher->slots[switcher->current]->player;
        old->speed = 0.0f;
        old->dirty = 1;
        old->refresh();
    }
    switcher->current = motion;
    modelSlotAttachChild(switcher->slots[motion], 0);
    asdModelResetAndSelectSecondaryMotion(switcher->models[switcher->modelIndex], motion, 0.0f, 0.0f);
    animOwnerSetScale(switcher->models[switcher->modelIndex], 1.0f);
    resetAnimation(switcher->slots[switcher->current]->player);
    switcher->slots[switcher->current]->player->speed = 1.0f;
    switch (motion) {
    case 0: {
        FUN_002e1230(switcher->models[switcher->modelIndex], 0);
        AnimationPlayer *player = switcher->slots[switcher->current]->player;
        player->policy = mathClampFloat;
        player->dirty = 1;
        asdModelSlotSetTint(0, 0, TintColor(1.0f, 1.0f, 1.0f, 1.0f));
        asdModelSlotSetColor(0, 0, 0.3f, 0.3f, 0.3f);
        break;
    }
    case 1: {
        FUN_002e1230(switcher->models[switcher->modelIndex], 0);
        AnimationPlayer *player = switcher->slots[switcher->current]->player;
        player->policy = mathClampFloat;
        player->dirty = 1;
        asdModelSlotSetTint(0, 0, TintColor(0.6f, 0.6f, 0.6f, 1.0f));
        asdModelSlotSetColor(0, 0, 0.1f, 0.1f, 0.1f);
        break;
    }
    case 2: {
        FUN_002e1230(switcher->models[switcher->modelIndex], 1);
        AnimationPlayer *player = switcher->slots[switcher->current]->player;
        player->policy = nw_anim_PlayPolicy_Loop;
        player->dirty = 1;
        asdModelSlotSetTint(0, 0, TintColor(1.0f, 1.0f, 1.0f, 1.0f));
        asdModelSlotSetColor(0, 0, 0.3f, 0.3f, 0.3f);
        break;
    }
    }
}

}
