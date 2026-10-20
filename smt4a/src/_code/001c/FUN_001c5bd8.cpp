#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0xC0C];
    /* 0xC0C */ u8 memberC0C[1];
} Holder;

/* Returns the address of the member at 0xC0C. */
u8 *FUN_001c5bd8(Holder *object)
{
    return object->memberC0C;
}

} /* extern "C" */
