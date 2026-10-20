#include "common.h"

extern "C" {

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ u8 (*query)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ s32 value;
    /* 0x2C */ u8 queried;
};

/* Copies the word at 0x28 from `source` and caches the result of the object's query method at 0x2C; returns the object. */
Object *onlineObjectCopyValue(Object *object, const Object *source)
{
    u8 result;

    object->value = source->value;
    result = object->vtbl->query(object);
    object->queried = result;
    return object;
}

} /* extern "C" */
