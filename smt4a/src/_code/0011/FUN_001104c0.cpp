#include "common.h"

extern "C" {

extern u8 DAT_00594b1c; /* object handed to FUN_002f4f20 */

typedef struct Holder {
    u8 unk00[0x10];
    u32 value; /* 0x10 */
} Holder;

extern void FUN_002f4f20(u8 *object, int flag);

/* Stores `value` and notifies the object. */
void FUN_001104c0(Holder *holder, u32 value)
{
    holder->value = value;
    FUN_002f4f20(&DAT_00594b1c, 1);
}

} /* extern "C" */
