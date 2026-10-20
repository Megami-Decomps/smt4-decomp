#include "shard/Shard004F.h"

extern "C" {

typedef struct ObjRef1F50 {
    /* 0x0000 */ u8 unk0000[0x1F50];
    /* 0x1F50 */ Object *object;
} ObjRef1F50;

void objRef1F50Release(ObjRef1F50 *obj)
{
    Object *object = obj->object;

    if (object != NULL) {
        object->vtbl->release(object);
        obj->object = NULL;
    }
}

} /* extern "C" */
