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

Object *FUN_002ea704(void);

/* When FUN_002ea704 yields an object, passes its slot-11 value to watcherSetEnabled(value, 0). */
void watcherRefreshEnabledState(void)
{
    Object *object;
    u32 value;

    if (FUN_002ea704() != NULL) {
        object = FUN_002ea704();
        value = object->vtbl->getValue(object);
        watcherSetEnabled(value, 0);
    }
}

} /* extern "C" */
