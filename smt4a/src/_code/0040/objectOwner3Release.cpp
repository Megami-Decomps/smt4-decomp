#include "shard/Shard0040.h"

extern "C" {

typedef struct GlobalObj {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GlobalObj;

typedef struct ObjectOwner3 {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Object *objects[3];
} ObjectOwner3;

extern GlobalObj *DAT_0056fcc0;
extern void FUN_0040af70(GlobalObj *obj);
extern void FUN_001aeafc(GlobalObj *obj);

/* Shuts down the global object (if started) and releases the three objects the owner holds. */
void objectOwner3Release(ObjectOwner3 *owner)
{
    s32 i;
    Object *object;

    if (DAT_0056fcc0->unk04 != 0) {
        FUN_0040af70(DAT_0056fcc0);
        FUN_001aeafc(DAT_0056fcc0);
    }
    for (i = 0; i < 3; i++) {
        object = owner->objects[i];
        if (object != NULL) {
            object->vtbl->release(object);
            owner->objects[i] = NULL;
        }
    }
}

} /* extern "C" */
