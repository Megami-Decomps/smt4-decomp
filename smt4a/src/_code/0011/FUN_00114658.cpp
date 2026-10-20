#include "common.h"

extern "C" {

void strInit(u8 *str);
void strDestroy(u8 *str);
void FUN_002ec8a8(u32 dest, u8 *str);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ s32 (*fill)(Object *object, u32 key, u8 *str);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

/* Asks the object to fill a temporary string for `key`; on success (0) copies it to `key` via FUN_002ec8a8. Returns the object's result. */
s32 FUN_00114658(Object *object, u32 key)
{
    s32 result;
    u8 str[36];

    strInit(str);
    result = object->vtbl->fill(object, key, str);
    if (result == 0) {
        FUN_002ec8a8(key, str);
    }
    strDestroy(str);
    return result;
}

} /* extern "C" */
