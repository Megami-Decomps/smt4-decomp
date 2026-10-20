#include "common.h"

extern "C" {

extern const u8 DAT_00559504[];  /* vtable */
void onlineStringAssign(u32 *member, u32 value);

typedef struct Object559504 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 first;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 second;
} Object559504;

Object559504 *FUN_002fd284(void);

/* Creates the object through FUN_002fd284, sets its vtable and fills its two members; returns it. */
Object559504 *FUN_002f7b34(u32 unused, u32 first, u32 second)
{
    Object559504 *object;

    object = FUN_002fd284();
    object->vtbl = DAT_00559504;
    onlineStringAssign(&object->first, first);
    onlineStringAssign(&object->second, second);
    return object;
}

} /* extern "C" */
