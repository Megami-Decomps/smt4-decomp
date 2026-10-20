#include "common.h"

extern "C" {

void wstrlenU16(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 value;
} Holder;

/* Runs wstrlenU16 when the word at 4 is set. */
void FUN_002eea7c(Holder *object)
{
    if (object->value != 0) {
        wstrlenU16();
    }
}

} /* extern "C" */
