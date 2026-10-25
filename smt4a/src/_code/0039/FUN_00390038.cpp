/* NON_MATCHING: vector-copy transfer class, scratch lifetimes, and final branch lowering differ. */
#include "shard/W6_W6Match6_EffectRender.h"
#include "gfx/EffectEditorStorage.h"

extern "C" {
extern EffectRenderGlobals DAT_006471dc;
void FUN_002f8794(void);
/* Release armlink removes this optional three-argument transform hook. */
__weak void effectEditorTransformPosition(const EffectPositionControl *, const EffMenuPosition *, EffMenuPosition *);

/* Apply the position override, optional source scale, and render transforms. */
void FUN_00390038(const EffectPositionControl *control)
{
    EffectRenderGlobals *globals = &DAT_006471dc;
    if (control->flags & 0x18) {
        globals->current = g_effectEditorInitialVector.value;
        globals->vector = effectRenderSource()->origin;
        FUN_002f8794();
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
    FUN_002f8794();
    globals->vector = effectRenderSource()->origin;
    FUN_002f8794();
    if (control->flags & 4) {
        globals->current.y = 5.0f;
    }
}
}
