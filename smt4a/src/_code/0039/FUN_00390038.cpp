/* NON_MATCHING: vector-copy transfer class, scratch lifetimes, and final branch lowering differ. */
#include "shard/W6_W6Match6_EffectRender.h"
#include "gfx/EffectEditorStorage.h"
#include "gfx/VectorScratch.h"

extern "C" {
void FUN_002f8794(void);
/* Release armlink removes this optional three-argument transform hook. */
__weak void effectEditorTransformPosition(const EffectPositionControl *, const EffMenuPosition *, EffMenuPosition *);

/* Apply the position override, optional source scale, and render transforms. */
void FUN_00390038(const EffectPositionControl *control)
{
    VectorScratch *globals = &g_vectorScratch;
    if (control->flags & 0x18) {
        globals->first.position = g_effectEditorInitialVector.value;
        globals->second.position = effectRenderSource()->origin;
        FUN_002f8794();
        EffMenuPosition transformed = globals->first.position;
        EffMenuPosition position;
        effectEditorTransformPosition(control, &transformed, &position);
        globals->first.position = position;
    } else {
        globals->first.position = control->position;
    }
    if (control->flags & 0x80) {
        f32 scale = effectRenderSource()->scale;
        globals->first.position.x *= scale;
        globals->first.position.y *= scale;
        globals->first.position.z *= scale;
        globals->first.position.w *= scale;
    }
    globals->second.position = g_effectEditorInitialVector.value;
    FUN_002f8794();
    globals->second.position = effectRenderSource()->origin;
    FUN_002f8794();
    if (control->flags & 4) {
        globals->first.position.y = 5.0f;
    }
}
}
