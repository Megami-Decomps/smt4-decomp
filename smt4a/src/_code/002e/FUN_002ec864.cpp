/* Looks up the owner's handle and, if found, runs its request and finish steps; then closes the object. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 key;
    /* 0x40 */ u8 unk40[0x2C];
    /* 0x6C */ u32 target;
} Object;

extern void *onlineInstanceTableGetCurrent(void);
extern void *onlineInstanceTableFind(void *owner, u32 key);
extern void onlineJobSetStateDone(Object *obj);
extern void FUN_002ec728(u32 target, u32 arg);
extern void FUN_002ec738(void *handle);

void FUN_002ec864(Object *obj, u32 arg)
{
    void *handle = onlineInstanceTableFind(onlineInstanceTableGetCurrent(), obj->key);

    if (handle != NULL) {
        FUN_002ec728(obj->target, arg);
        FUN_002ec738(handle);
    }
    onlineJobSetStateDone(obj);
}

}
