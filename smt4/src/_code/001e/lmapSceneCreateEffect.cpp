#include "common.h"

extern "C" {

typedef struct EffectObj {
    /* 0x0 */ const void *vtable;
} EffectObj;

typedef struct LmapScene {
    /* 0x000 */ u8 unk000[0x194];
    /* 0x194 */ EffectObj *effect;
} LmapScene;

extern const u8 _ZTV9Obj4207c0[];
extern LmapScene *g_lmapScene;

extern void *asdOperatorNew(u32 size);
extern EffectObj *_ZN9Obj4206e8C1Ev(void *memory);

/* Allocates the scene's effect object (constructor _ZN9Obj4206e8C1Ev, then its own vtable) and stores it. */
void lmapSceneCreateEffect(void)
{
    EffectObj *effect = (EffectObj *)asdOperatorNew(0x100);

    if (effect != NULL) {
        effect = _ZN9Obj4206e8C1Ev(effect);
        effect->vtable = _ZTV9Obj4207c0 + 0x18;
    }
    g_lmapScene->effect = effect;
}

} /* extern "C" */
