#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 value;
} Holder;

Holder *onlineSockAddrConstruct2(void);

/* Copies the word at 0x20 of `source` into the object onlineSockAddrConstruct2 returns. */
void FUN_002ede78(u32 unused, Holder *source)
{
    Holder *target;

    target = onlineSockAddrConstruct2();
    target->value = source->value;
}

} /* extern "C" */
