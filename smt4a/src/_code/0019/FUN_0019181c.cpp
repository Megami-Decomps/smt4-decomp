/* NON_MATCHING: retail weak call receives r0=0 and r1=0x04000144, but its target symbol is missing. */
#include "common.h"

struct Object {
    const u8* vtable; // 0x00
};

extern "C" {
extern u8 DAT_0055c5a8;

Object* FUN_0019181c(Object* object)
{
    object->vtable = &DAT_0055c5a8;
    return object;
}
}
