#include "sys/AtomicCounter.h"

extern "C" {

extern s32 DAT_00594b1c; /* shared counter */

typedef struct Holder {
    u8 unk00[0x10];
    u32 value; /* 0x10 */
} Holder;

/* Stores `value` and notifies the object. */
void FUN_001104c0(Holder *holder, u32 value)
{
    holder->value = value;
    atomicAddS32(&DAT_00594b1c, 1);
}

} /* extern "C" */
