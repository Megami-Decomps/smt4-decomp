#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
} Obj;

extern Obj *DAT_0043e128;

void FUN_002015d0(u32 value)
{
    DAT_0043e128->unk10 = value;
}

} /* extern "C" */
