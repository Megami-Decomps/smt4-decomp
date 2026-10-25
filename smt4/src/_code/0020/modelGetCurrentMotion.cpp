#include "common.h"

extern "C" {

typedef struct Inner0020ffe0 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
} Inner0020ffe0;

/* Returns the word at +0x38. */
u32 modelGetCurrentMotion(Inner0020ffe0 *inner)
{
    return inner->unk38;
}

} /* extern "C" */
