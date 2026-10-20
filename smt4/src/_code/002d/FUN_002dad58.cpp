#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 unk48;
} Inner;

u32 FUN_002dad58(Inner **owner)
{
    return (*owner)->unk48;
}

} /* extern "C" */
