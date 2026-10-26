/* NON_MATCHING: srcWork is held in r1 across the clone-callback test and the color copy uses integer ldm/stm instead of retail vldmia/vstmia. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

static __inline void quaternionSetIdentity(PolyVec4 *quaternion)
{
    PolyVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyObject *effPolyFlashCreate(u32 kind, void *params, s32 arg);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyFlashKind g_polyFlashKinds[];
extern PolyVec4 g_polyDefaultColor;
extern const char DAT_00544ba8[];

/* Copies a flash polygon object: kinds with a clone callback get a fresh object with the source's
 * work area and cloned state, the others are rebuilt from the source's work area as parameters. */
PolyObject *effPolyFlashClone(PolyObject *src)
{
    u8 *srcWork = src->work;
    PolyObject *obj;

    if (g_polyFlashKinds[src->kind].clone != NULL) {
        u16 kind = src->kind;
        s32 workSize = g_polyFlashKinds[kind].workSize;

        asdDebugTrace(DAT_00544ba8, 3409);
        obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);
        obj->unk30 = -1;
        obj->work = obj->workData;
        obj->frame = 0;
        obj->kind = kind;
        obj->color = g_polyDefaultColor;
        quaternionSetIdentity(&obj->rotation0);
        quaternionSetIdentity(&obj->rotation1);
        rt_memcpy(obj->work, srcWork, workSize);
        obj->state = g_polyFlashKinds[src->kind].clone(src);
        g_polyFlashKinds[obj->kind].start(obj);
    } else {
        obj = effPolyFlashCreate(src->kind, srcWork, 0);
    }
    return obj;
}

} /* extern "C" */
