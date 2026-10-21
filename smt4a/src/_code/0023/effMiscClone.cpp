#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

EffMiscObject *FUN_00271be0(u32 kind, void *params);

extern EffMiscKind g_effMiscKinds[];

/* Copies an effect object: a new object of the same kind with the same work area that shares
 * the source's shared resource where the kind allows it. */
EffMiscObject *effMiscClone(EffMiscObject *src)
{
    u16 kind = src->kind;
    EffMiscObject *obj = FUN_00271be0(kind, src->work);
    EffMiscShared *shared = src->shared;

    if (shared != NULL && g_effMiscKinds[obj->kind].sharesData != 0) {
        shared->refCount++;
        obj->shared = shared;
    }
    return obj;
}

} /* extern "C" */
