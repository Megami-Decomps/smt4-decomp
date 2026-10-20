#include "common.h"

extern "C" {

void codeIs0x40(u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 value;
} Holder;

/* Passes the word at 0x18 to codeIs0x40. */
void FUN_00123a72(Holder *object)
{
    codeIs0x40(object->value);
}

} /* extern "C" */
