#include "common.h"
#include "code/Code0023_Smt4.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28;
} Inner;

u32 FUN_00234618(Inner **owner)
{
    return (*owner)->unk28;
}

} /* extern "C" */
