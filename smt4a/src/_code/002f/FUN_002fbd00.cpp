#include "common.h"

extern "C" {

void FUN_002f32f8(u32 object, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Passes `object` and the word at 4 of `holder` to FUN_002f32f8. */
void FUN_002fbd00(u32 object, Holder *holder)
{
    FUN_002f32f8(object, holder->value);
}

} /* extern "C" */
