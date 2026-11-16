#include "common.h"

extern "C" {

extern u8 DAT_00594b1c; /* object handed to atomicAddS32 */

typedef struct Holder {
    u8 unk00[0x10];
    u32 value; /* 0x10 */
} Holder;

extern void atomicAddS32(u8 *object, int flag);

/* Stores `value` and notifies the object. */
void FUN_001104c0(Holder *holder, u32 value)
{
    holder->value = value;
    atomicAddS32(&DAT_00594b1c, 1);
}

} /* extern "C" */
