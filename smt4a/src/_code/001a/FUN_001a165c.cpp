#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 value;
} Holder;

/* Returns the byte at 0x3. */
u8 FUN_001a165c(Holder *object)
{
    return object->value;
}

} /* extern "C" */
