/* NON_MATCHING: the colour unpack and pack get other VFP registers and store order than retail (which stores each
 * channel with its own vstr and keeps the ramp colour in r0); the work flag (+0x3c) and the alpha re-read match. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"
#include "gfx/EffectColorUnpack.h"
#include "gfx/VectorScratch.h"
#include "gfx/RenderSubmission.h"

extern "C" {

void renderSubmissionDrawPacket(PolyGeom *geom, u32 value);
void FUN_00246afc(PolyGeom *geom, PolyVec4 *rotation0, PolyVec4 *rotation1, PolyVec4 *color);
u32 colorRampBlendWithFade(void *work, void *colorRamp);

/* Per-frame draw of a ring effect built from a single geometry (the kind's late update): tints the
 * colour from the work area's ramp with the object's tint into the geometry and, while it is visible,
 * places and draws the geometry. */
void effPolyRingGeom0Draw(PolyObject *obj)
{
    PolyRingWork *work = (PolyRingWork *)obj->work;
    PolyGeom *geom = *(PolyGeom **)obj->state;
    if ((u32)obj->frame > work->duration && work->duration != 0)
        return;

    u32 ringColor = colorRampBlendWithFade(work, work->colorRamp);
    effectColorUnpack(obj->unk30, &g_vectorScratch.second.color);
    effectColorUnpack(ringColor, &g_vectorScratch.first.color);
    g_vectorScratch.first.color.red *= g_vectorScratch.second.color.red;
    g_vectorScratch.first.color.green *= g_vectorScratch.second.color.green;
    g_vectorScratch.first.color.blue *= g_vectorScratch.second.color.blue;
    g_vectorScratch.first.color.alpha *= g_vectorScratch.second.color.alpha;
    u32 color = effectColorPack(&g_vectorScratch.first.color);
    RenderSubmissionColor packed;
    packed.channels.red = __rev(color) >> 24;
    packed.channels.green = __rev(color) >> 16;
    packed.channels.blue = __rev(color) >> 8;
    packed.channels.alpha = __rev(color);
    geom->color = packed.value;
    if (((u8 *)&geom->color)[3] != 0) {
        FUN_00246afc(geom, &obj->rotation0, &obj->rotation1, &obj->color);
        if (work->flag != 0)
            geom->drawFlags |= 0x100;
        else
            geom->drawFlags &= ~0x100;
        renderSubmissionDrawPacket(geom, (u16)work->unk28);
    }
}

} /* extern "C" */
