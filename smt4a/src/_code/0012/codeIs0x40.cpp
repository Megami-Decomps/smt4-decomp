#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 code;
} Holder;

/* Returns 1 when `code` is 0x40. */
u32 codeIs0x40(Holder *object)
{
    if (object->code != 0x40) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
