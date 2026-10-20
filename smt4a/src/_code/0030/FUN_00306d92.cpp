#include "common.h"

extern "C" {

void FUN_00111690(u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 value;
} Holder;

/* Passes the word at 0x18 to FUN_00111690. */
void FUN_00306d92(Holder *object)
{
    FUN_00111690(object->value);
}

} /* extern "C" */
