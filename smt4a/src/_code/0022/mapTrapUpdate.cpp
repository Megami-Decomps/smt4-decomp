/* NON_MATCHING: the frame increments copy through a scratch register and schedule the sprite address and comparison differently. */
#include "map/mapTrap.h"
#include "map/LmapGlobals.h"

struct FloatTable;
struct TrapEffectFlags { u32 unk00; u32 flags; };
struct TrapEffect {
    u32 unk00;
    union { FloatTable *scalar; TrapEffectFlags *flags; };
};
struct TrapSpriteView {
    u8 active;
    u8 unk01[0x13];
    s32 animation;
    u8 animationPending;
    u8 unk19[0xb];
    TrapEffect *effect;
};
struct TrapUpdateView {
    s32 state;
    s32 frame;
    u32 unk08;
    u8 completed;
    u8 unk0d[3];
    TrapSpriteView sprite;
    u8 unk38[0x2c];
    s32 effectState;
    s32 effectFrame;
    u8 alternate;
};
extern "C" {
extern MapTrapA *g_mapTrap;
void linkHolderSetFlag(void *script);
f32 FUN_004ffb30(FloatTable *table);

/* Advances trap activation, recovery, and effect visibility. */
u32 mapTrapUpdate(void)
{
    u32 result = 0;
    TrapUpdateView *trap = (TrapUpdateView *)g_mapTrap;
    switch (trap->state) {
    case 0:
    case 1:
        break;
    case 2: {
        TrapSpriteView *sprite = &trap->sprite;
        if (++trap->frame == 40) {
            sprite->animation = 1;
            sprite->animationPending = 1;
        }
        if (trap->completed) {
            if (trap->alternate)
                sprite->animation = 3;
            else
                sprite->animation = 2;
            sprite->animationPending = 1;
            trap->state = 3;
            trap->frame = 0;
        }
        break;
    }
    case 3: {
        TrapSpriteView *sprite = &trap->sprite;
        if (++trap->frame > 30) {
            sprite->active = 0;
            ((TrapUpdateView *)g_mapTrap)->state = 1;
            trap->frame = 0;
        }
        break;
    }
    }
    TrapUpdateView *effect = (TrapUpdateView *)g_mapTrap;
    switch (effect->effectState) {
    case 0:
        break;
    case 1:
        effect->sprite.effect->flags->flags &= ~3u;
        effect->effectFrame = 0;
        effect->effectState = 2;
        break;
    case 2: {
        union { f32 value; s32 bits; } scalar;
        scalar.value = FUN_004ffb30(effect->sprite.effect->scalar);
        if (scalar.bits >= 0x43070000)
            linkHolderSetFlag(g_lmapScene->playerModel);
        break;
    }
    case 3:
        effect->sprite.effect->flags->flags |= 3;
        effect->effectState = 0;
        effect->effectFrame = 0;
        break;
    }
    return result;
}
} /* extern "C" */
