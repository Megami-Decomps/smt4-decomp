#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 value;
} Holder;

Holder *FUN_002ede60(void);

/* Copies the word at 0x20 of `source` into the object FUN_002ede60 returns. */
void FUN_002ede78(u32 unused, Holder *source)
{
    Holder *target;

    target = FUN_002ede60();
    target->value = source->value;
}

} /* extern "C" */
