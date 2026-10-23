/* NON_MATCHING: state-machine constants, sprite member bases and result-zero lifetime differ. */
#include "map/mapTrap.h"

struct FloatTable;
struct TrapEffectFlags { u32 unk00; u32 flags; };
struct TrapEffect {
    u32 unk00;
    union { FloatTable *scalar; TrapEffectFlags *flags; };
};
struct TrapUpdateView {
    s32 state;
    s32 frame;
    u32 unk08;
    u8 completed;
    u8 unk0d[3];
    struct {
        u8 active;
        u8 unk01[0x13];
        s32 animation;
        u8 animationPending;
        u8 unk19[0xb];
        TrapEffect *effect;
    } sprite;
    u8 unk38[0x2c];
    s32 effectState;
    s32 effectFrame;
    u8 alternate;
};
struct TrapSceneView { u8 unk00[0x1a8]; void *script; };

extern "C" {
extern MapTrapA *g_mapTrap;
extern TrapSceneView *g_lmapScene;
void linkHolderSetFlag(void *script);
f32 FUN_004ffb30(FloatTable *table);

// Advance trap activation, recovery and effect visibility state machines.
u32 FUN_002242a0(void)
{
    TrapUpdateView *trap = reinterpret_cast<TrapUpdateView *>(g_mapTrap);
    switch (trap->state) {
    case 0:
    case 1:
        break;
    case 2:
        if (++trap->frame == 40) {
            trap->sprite.animation = 1;
            trap->sprite.animationPending = 1;
        }
        if (trap->completed) {
            trap->sprite.animation = trap->alternate ? 3 : 2;
            trap->sprite.animationPending = 1;
            trap->state = 3;
            trap->frame = 0;
        }
        break;
    case 3:
        if (++trap->frame > 30) {
            trap->sprite.active = 0;
            trap = reinterpret_cast<TrapUpdateView *>(g_mapTrap);
            trap->state = 1;
            trap->frame = 0;
        }
        break;
    }
    trap = reinterpret_cast<TrapUpdateView *>(g_mapTrap);
    switch (trap->effectState) {
    case 0:
        break;
    case 1:
        trap->sprite.effect->flags->flags &= ~3u;
        trap->effectState = 2;
        trap->effectFrame = 0;
        break;
    case 2: {
        union { f32 value; s32 bits; } scalar;
        scalar.value = FUN_004ffb30(trap->sprite.effect->scalar);
        if (scalar.bits >= 0x43070000)
            linkHolderSetFlag(g_lmapScene->script);
        break;
    }
    case 3:
        trap->sprite.effect->flags->flags |= 3;
        trap->effectState = 0;
        trap->effectFrame = 0;
        break;
    }
    return 0;
}
}
