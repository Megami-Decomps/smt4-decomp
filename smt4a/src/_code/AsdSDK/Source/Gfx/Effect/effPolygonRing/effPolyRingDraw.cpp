/* NON_MATCHING: instruction scheduling and register allocation differ; retail 168 vs built 136 rows, 237 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

void FUN_002b3c9c(PolyGeom *geom, u32 value);
void FUN_00338330(PolyGeom *geom, PolyVec4 *rotation0, PolyVec4 *rotation1, PolyVec4 *color);
u32 FUN_0038136c(void *work, void *colorRamp);

extern PolyRingKind g_polyRingKinds[];
extern f32 DAT_006472dc; /* scratch: color after tinting, alpha first */
extern f32 DAT_006472e0;
extern f32 DAT_006472e4;
extern f32 DAT_006472e8;
extern f32 DAT_006472ec; /* scratch: tint, alpha first */
extern f32 DAT_006472f0;
extern f32 DAT_006472f4;
extern f32 DAT_006472f8;

/* Per-frame draw of a ring effect: tints the color from the work area's ramp with the object's
 * tint into the geometry and, while it is visible, mirrors the object's transform into the ring's
 * own polygon object and updates the geometry. */
void effPolyRingDraw(PolyObject *obj)
{
    PolyRingState *state = (PolyRingState *)obj->state;
    PolyRingWork *work = (PolyRingWork *)obj->work;
    PolyGeom *geom = state->geom;

    if ((u32)obj->frame <= work->duration || work->duration == 0) {
        u32 ringColor = FUN_0038136c(work, work->colorRamp);
        u32 tint = obj->unk30;
        PolyObject *ringObj;

        DAT_006472ec = (f32)(tint >> 24);
        DAT_006472f0 = (f32)((tint & 0xffffff) >> 16);
        DAT_006472f4 = (f32)((tint & 0xffff) >> 8);
        DAT_006472f8 = (f32)(tint & 0xff);
        DAT_006472ec = DAT_006472ec * 0.003921569f;
        DAT_006472f0 = DAT_006472f0 * 0.003921569f;
        DAT_006472f4 = DAT_006472f4 * 0.003921569f;
        DAT_006472f8 = DAT_006472f8 * 0.003921569f;
        DAT_006472dc = (f32)(ringColor >> 24) * 0.003921569f * DAT_006472ec;
        DAT_006472e0 = (f32)((ringColor & 0xffffff) >> 16) * 0.003921569f * DAT_006472f0;
        DAT_006472e4 = (f32)((ringColor & 0xffff) >> 8) * 0.003921569f * DAT_006472f4;
        DAT_006472e8 = (f32)(ringColor & 0xff) * 0.003921569f * DAT_006472f8;
        geom->color = ((u32)(DAT_006472e8 * 255.0f) & 0xff) | (((u32)(DAT_006472e4 * 255.0f) & 0xff) << 8) |
                      (((u32)(DAT_006472e0 * 255.0f) & 0xff) << 16) | ((u32)(DAT_006472dc * 255.0f) << 24);
        if (((u8 *)&geom->color)[3] != 0) {
            ringObj = state->obj;
            ringObj->unk30 = obj->unk30;
            ringObj->color = obj->color;
            ringObj->rotation0 = obj->rotation0;
            ringObj->rotation1 = obj->rotation1;
            if (ringObj->frame > 0) {
                g_polyRingKinds[ringObj->kind].lateUpdate(ringObj);
            }
            FUN_00338330(geom, &obj->rotation0, &obj->rotation1, &obj->color);
            if (work->flag != 0) {
                geom->drawFlags |= 0x100;
            } else {
                geom->drawFlags &= 0xfeff;
            }
            FUN_002b3c9c(geom, work->unk28 & 0xffff);
        }
    }
}

} /* extern "C" */
