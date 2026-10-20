#include "common.h"

extern "C" {

void FUN_0030ffe0(u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Passes the word at 4 to FUN_0030ffe0. */
void FUN_002f7896(Holder *object)
{
    FUN_0030ffe0(object->value);
}

} /* extern "C" */
