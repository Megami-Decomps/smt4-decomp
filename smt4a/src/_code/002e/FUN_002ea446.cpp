#include "common.h"

extern "C" {

void FUN_003106a8(void *object, s32 mode);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value;
} Holder;

/* Calls FUN_003106a8 with mode 1 and stores `value` at 0x24. */
void FUN_002ea446(Holder *object, u32 value)
{
    FUN_003106a8(object, 1);
    object->value = value;
}

} /* extern "C" */
