#include "common.h"

extern "C" {

void onlineSockAddrCopy(void *dest, u32 value);

typedef struct Object {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 flag;
} Object;

Object *onlineSockAddrConstruct(void);

/* Creates an object with onlineSockAddrConstruct, fills it from `value` and stores `flag` at 0x20; returns it. */
Object *FUN_002ea948(u32 unused, u32 value, u8 flag)
{
    Object *object;

    object = onlineSockAddrConstruct();
    onlineSockAddrCopy(object, value);
    object->flag = flag;
    return object;
}

} /* extern "C" */
