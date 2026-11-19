#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
} Inner;

void ownerRef20Clear(Inner **owner)
{
    if (*owner != NULL) {
        (*owner)->unk20 = 0;
    }
}

} /* extern "C" */
