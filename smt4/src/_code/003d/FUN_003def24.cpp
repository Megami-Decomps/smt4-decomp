#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ int value;
} Inner;

u8 FUN_003def24(Inner **obj)
{
    return (*obj)->value != 0;
}

} /* extern "C" */
