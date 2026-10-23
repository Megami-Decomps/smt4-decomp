/* NON_MATCHING: retail rebuilds packed color through byte-reversal accessors; packed-color instructions differ. */
#include "gfx/EffectPrimitiveWork.h"
extern "C" {
u32 FUN_00269694(const void *curve, const u32 *baseColor, u32 frame, u32 duration);
void asdSetNormalizedColorRgba(u32 color);
void FUN_00246bd4(void);
u32 FUN_00246c28(void);
void FUN_00246afc(EffectPrimitive *primitive, const f32 *translation, const f32 *rotation, const f32 *scale);
void FUN_00256a50(EffectPrimitive *primitive, u32 flags);
extern EffectColorProductState DAT_004ea81c;

/* Update a live effect primitive's transform, interpolated color, and render flags. */
void FUN_0032128c(EffectPrimitiveWork *work)
{
    EffectPrimitiveEmitter *emitter = work->emitter;
    EffectPrimitive *primitive = work->handle->primitive;
    if (emitter->duration < work->frame && emitter->duration != 0)
        return;
    u32 color = FUN_00269694(emitter->colorCurve, &emitter->color, work->frame, emitter->duration);
    asdSetNormalizedColorRgba(work->color);
    DAT_004ea81c.factor = DAT_004ea81c.color;
    asdSetNormalizedColorRgba(color);
    FUN_00246bd4();
    primitive->color = FUN_00246c28();
    FUN_00246afc(primitive, work->translation, work->rotation, work->scale);
    if (emitter->enabled)
        primitive->flags |= 0x100;
    else
        primitive->flags &= ~0x100;
    FUN_00256a50(primitive, emitter->renderFlags & 0xffff);
}
}
