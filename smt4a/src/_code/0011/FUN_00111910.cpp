#include "common.h"

extern "C" {

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00[10];
    /* 0x28 */ Object *(*getTarget)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 base;
};

void FUN_002e995c(u8 *buffer);
u32 FUN_002ea93c(u32 value);
Object *FUN_002ea704(void);
void FUN_002fd394(s32 address, u32 value, u8 *buffer);

/* Builds a 32-byte buffer, converts `value` with FUN_002ea93c, and hands both to FUN_002fd394 together with the address 0x80 bytes into the current target object's data. */
void FUN_00111910(u32 unused, u32 value)
{
    u8 buffer[32];
    u32 converted;
    Object *object;
    Object *target;

    FUN_002e995c(buffer);
    converted = FUN_002ea93c(value);
    object = FUN_002ea704();
    target = object->vtbl->getTarget(object);
    FUN_002fd394(target->base + 0x80, converted, buffer);
}

} /* extern "C" */
