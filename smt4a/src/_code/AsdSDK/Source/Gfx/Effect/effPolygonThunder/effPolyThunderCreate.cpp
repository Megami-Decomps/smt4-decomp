#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>
#include <string.h>
#include "AsdSDK/AsdMemAlloc.h"

/* Sets a quaternion to the identity rotation. */
static __inline void quaternionSetIdentity(PolyVec4 *quaternion)
{
    memset(quaternion, 0, sizeof(*quaternion));
    quaternion->w = 1.0f;
}

extern "C" {

extern const char g_effPolygonThunderSourceFileName[]; /* effect source file name (__FILE__) */
void rt_memcpy(void *dst, const void *src, int size);

extern PolyThunderKind g_polyThunderKinds[];

/* Creates a thunder polygon object of the given kind: allocates the object and its work area,
 * copies the parameter block into it, builds the kind's state and starts it. */
PolyThunderObject *effPolyThunderCreate(u32 kind, void *parameters)
{
    s32 workSize = g_polyThunderKinds[kind].workSize;
    asdDebugTrace(g_effPolygonThunderSourceFileName, 1705);
    PolyThunderObject *obj = (PolyThunderObject *)memAlloc(0x10000, 0x100, 0,
        workSize + offsetof(PolyThunderObject, workData), 0x10, 1);

    obj->unk24 = -1;
    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    obj->scale = 1.0f;
    quaternionSetIdentity(&obj->rotation0);
    quaternionSetIdentity(&obj->rotation1);
    rt_memcpy(obj->work, parameters, workSize);
    obj->state = g_polyThunderKinds[kind].create(parameters);
    g_polyThunderKinds[kind].start(obj);
    return obj;
}

} /* extern "C" */
