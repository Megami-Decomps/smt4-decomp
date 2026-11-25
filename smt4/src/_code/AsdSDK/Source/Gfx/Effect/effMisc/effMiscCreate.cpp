#include "AsdSDK/Source/Gfx/Effect/EffMiscInit.h"

/* Allocates an effect object, copies the kind's work area, and lets the kind create its state. */
extern "C" EffMiscObject *effMiscCreate(u32 kind, void *params)
{
    s32 workSize = g_effMiscKinds[kind].workSize;
    u32 objectSize = workSize + offsetof(EffMiscObject, workData);
    EffMiscObject *obj = (EffMiscObject *)effMiscAllocateZeroed(objectSize);
    obj->unk10 = -1;
    obj->kind = kind;
    obj->scale = 1.0f;
    obj->shared = NULL;
    effMiscSetIdentityRotation(&obj->rotation);
    obj->work = obj->workData;
    memcpy(obj->work, params, workSize);
    if (g_effMiscKinds[kind].create != NULL) {
        obj->state = g_effMiscKinds[kind].create(params);
    }
    return obj;
}
