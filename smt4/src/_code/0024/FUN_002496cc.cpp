/* NON_MATCHING: vector-copy transfer class, scratch lifetimes, and final branch lowering differ. */
#include "shard/W6_W6Match6_EffectRender.h"
#include "gfx/EffectEditorStorage.h"

extern "C" {
extern EffectRenderGlobals DAT_004ea81c;
void FUN_00249678(void);
/* Release armlink removes this optional three-argument transform hook. */
__weak void effectEditorTransformPosition(const EffectPositionControl *, const EffMenuPosition *, EffMenuPosition *);

/* Apply the position override, optional source scale, and render transforms. */
void FUN_002496cc(const EffectPositionControl *control)
{
    EffectRenderGlobals *globals = &DAT_004ea81c;
    if (control->flags & 0x18) {
        globals->current = g_effectEditorInitialVector.value;
        globals->vector = effectRenderSource()->origin;
        FUN_00249678();
        EffMenuPosition transformed = globals->current;
        EffMenuPosition position;
        effectEditorTransformPosition(control, &transformed, &position);
        globals->current = position;
    } else {
        globals->current = control->position;
    }
    if (control->flags & 0x80) {
        f32 scale = effectRenderSource()->scale;
        globals->current.x *= scale;
        globals->current.y *= scale;
        globals->current.z *= scale;
        globals->current.w *= scale;
    }
    globals->vector = g_effectEditorInitialVector.value;
    FUN_00249678();
    globals->vector = effectRenderSource()->origin;
    FUN_00249678();
    if (control->flags & 4) {
        globals->current.y = 5.0f;
    }
}
}
