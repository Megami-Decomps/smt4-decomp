#include "common.h"

extern "C" {

void FUN_00123772(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u32 value;
} Holder;

/* Runs FUN_00123772 and returns the word at 0x60. */
u32 FUN_002fbb86(Holder *object)
{
    FUN_00123772();
    return object->value;
}

} /* extern "C" */
