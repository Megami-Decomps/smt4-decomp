/* NON_MATCHING: retail loads the vtable into r1 and the zero into r2; the compiler picks them the other way round. */
#include "common.h"

extern "C" {

extern u8 DAT_0042259c; /* vtable */

typedef struct Object {
    u32 vtbl; /* 0x00 */
    u16 value;    /* 0x04 */
} Object;

void FUN_00233228(Object *object)
{
    object->vtbl = (u32)&DAT_0042259c;
    object->value = 0;
}

} /* extern "C" */
