#include "common.h"

extern "C" {

void FUN_002e783c(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 value;
} Holder;

/* Runs FUN_002e783c when the word at 4 is set. */
void FUN_002eea7c(Holder *object)
{
    if (object->value != 0) {
        FUN_002e783c();
    }
}

} /* extern "C" */
