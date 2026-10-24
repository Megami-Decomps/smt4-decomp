#include "common.h"

struct Effect00300d2c;

/* One poly flash kind: 0x1c bytes with its update function at 0x14. */
struct PolyFlashKind00300d2c {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void (*update)(Effect00300d2c *effect);
    /* 0x18 */ u8 unk18[4];
};

struct Effect00300d2c {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 active;
    /* 0x38 */ s32 kind;
};

extern "C" {

extern PolyFlashKind00300d2c g_polyFlashKinds[];

/* Runs the kind's update function while the effect is active. */
void FUN_00300d2c(Effect00300d2c *effect)
{
    if (effect->active > 0)
        g_polyFlashKinds[effect->kind].update(effect);
}

} /* extern "C" */
