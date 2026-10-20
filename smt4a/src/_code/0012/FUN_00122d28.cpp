#include "common.h"

extern "C" {

void FUN_002fd0f4(u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1C8];
    /* 0x1C8 */ u32 value;
} Holder;

/* Passes the word at 0x1C8 to FUN_002fd0f4. */
void FUN_00122d28(Holder *object)
{
    FUN_002fd0f4(object->value);
}

} /* extern "C" */
