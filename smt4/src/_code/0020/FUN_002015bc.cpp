#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
} Obj;

extern Obj *DAT_0043e128;

u32 FUN_002015bc(void)
{
    return DAT_0043e128->unk10;
}

} /* extern "C" */
