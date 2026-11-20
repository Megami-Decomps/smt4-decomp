#include "common.h"

extern "C" {

void watcherSetEnabled(u32 value, s32 flag);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00[11];
    /* 0x2C */ u32 (*getValue)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

Object *watcherGetEnabledFlag(void);

/* When watcherGetEnabledFlag yields an object, passes its slot-11 value to watcherSetEnabled(value, 0). */
void watcherRefreshEnabledState(void)
{
    Object *object;
    u32 value;

    if (watcherGetEnabledFlag() != NULL) {
        object = watcherGetEnabledFlag();
        value = object->vtbl->getValue(object);
        watcherSetEnabled(value, 0);
    }
}

} /* extern "C" */
