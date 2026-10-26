/* NON_MATCHING: after the clear, -1/0 land in r2/r1 instead of r1/r0 and the work pointer is built in r3 before the copy (retail builds it in r0). */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char DAT_005449ec[]; /* __FILE__ */

void rt_memclr(void *block, s32 size);
void rt_memcpy(void *dest, const void *src, u32 size);

extern EffMiscKind g_effMiscKinds[];

/* Allocates an effect object of the given kind, copies the kind's work area from `params` and lets
 * the kind build its state. */
EffMiscObject *FUN_00271be0(u32 kind, void *params)
{
    s32 workSize = g_effMiscKinds[kind].workSize;
    s32 objectSize = workSize + 0x30;
    asdDebugTrace(DAT_005449ec, 450);
    EffMiscObject *obj = (EffMiscObject *)memAlloc(0x10000, 0x100, 0, objectSize, 0x10, 1);
    rt_memclr(obj, objectSize);
    obj->unk10 = -1;
    obj->kind = kind;
    obj->scale = 1.0f;
    obj->shared = NULL;
    EffMiscVec4 identity = {0.0f, 0.0f, 0.0f, 0.0f};
    obj->rotation = identity;
    obj->rotation.w = 1.0f;
    obj->work = obj->workData;
    rt_memcpy(obj->work, params, workSize);
    if (g_effMiscKinds[kind].create != NULL) {
        obj->state = g_effMiscKinds[kind].create(params);
    }
    return obj;
}

} /* extern "C" */
