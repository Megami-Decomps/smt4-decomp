#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 value;
} Inner;

u32 FUN_003df63c(Inner **obj)
{
    return (*obj)->value;
}

} /* extern "C" */
