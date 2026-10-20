/* NON_MATCHING: instruction scheduling and register allocation differ; retail 168 vs built 136 rows, 237 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

void FUN_00256a50(PolyGeom *geom, u32 value);
void FUN_00246afc(PolyGeom *geom, PolyVec4 *rotation0, PolyVec4 *rotation1, PolyVec4 *color);
u32 FUN_00269694(void *work, void *colorRamp);

extern PolyRingKind g_polyRingKinds[];
extern f32 DAT_004ea91c; /* scratch: color after tinting, alpha first */
extern f32 DAT_004ea920;
extern f32 DAT_004ea924;
extern f32 DAT_004ea928;
extern f32 DAT_004ea92c; /* scratch: tint, alpha first */
extern f32 DAT_004ea930;
extern f32 DAT_004ea934;
extern f32 DAT_004ea938;

/* Per-frame draw of a ring effect: tints the color from the work area's ramp with the object's
 * tint into the geometry and, while it is visible, mirrors the object's transform into the ring's
 * own polygon object and updates the geometry. */
void effPolyRingDraw(PolyObject *obj)
{
    PolyRingState *state = (PolyRingState *)obj->state;
    PolyRingWork *work = (PolyRingWork *)obj->work;
    PolyGeom *geom = state->geom;

    if ((u32)obj->frame <= work->duration || work->duration == 0) {
        u32 ringColor = FUN_00269694(work, work->colorRamp);
        u32 tint = obj->unk30;
        PolyObject *ringObj;

        DAT_004ea92c = (f32)(tint >> 24);
        DAT_004ea930 = (f32)((tint & 0xffffff) >> 16);
        DAT_004ea934 = (f32)((tint & 0xffff) >> 8);
        DAT_004ea938 = (f32)(tint & 0xff);
        DAT_004ea92c = DAT_004ea92c * 0.003921569f;
        DAT_004ea930 = DAT_004ea930 * 0.003921569f;
        DAT_004ea934 = DAT_004ea934 * 0.003921569f;
        DAT_004ea938 = DAT_004ea938 * 0.003921569f;
        DAT_004ea91c = (f32)(ringColor >> 24) * 0.003921569f * DAT_004ea92c;
        DAT_004ea920 = (f32)((ringColor & 0xffffff) >> 16) * 0.003921569f * DAT_004ea930;
        DAT_004ea924 = (f32)((ringColor & 0xffff) >> 8) * 0.003921569f * DAT_004ea934;
        DAT_004ea928 = (f32)(ringColor & 0xff) * 0.003921569f * DAT_004ea938;
        geom->color = ((u32)(DAT_004ea928 * 255.0f) & 0xff) | (((u32)(DAT_004ea924 * 255.0f) & 0xff) << 8) |
                      (((u32)(DAT_004ea920 * 255.0f) & 0xff) << 16) | ((u32)(DAT_004ea91c * 255.0f) << 24);
        if (((u8 *)&geom->color)[3] != 0) {
            ringObj = state->obj;
            ringObj->unk30 = obj->unk30;
            ringObj->color = obj->color;
            ringObj->rotation0 = obj->rotation0;
            ringObj->rotation1 = obj->rotation1;
            if (ringObj->frame > 0) {
                g_polyRingKinds[ringObj->kind].lateUpdate(ringObj);
            }
            FUN_00246afc(geom, &obj->rotation0, &obj->rotation1, &obj->color);
            if (work->flag != 0) {
                geom->drawFlags |= 0x100;
            } else {
                geom->drawFlags &= 0xfeff;
            }
            FUN_00256a50(geom, work->unk28 & 0xffff);
        }
    }
}

} /* extern "C" */
