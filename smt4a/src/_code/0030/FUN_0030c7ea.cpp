#include "common.h"

extern "C" {

void FUN_00310f64(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Stores `value` at 0x4, then runs FUN_00310f64. */
void FUN_0030c7ea(Holder *object, u32 value)
{
    object->value = value;
    FUN_00310f64();
}

} /* extern "C" */
