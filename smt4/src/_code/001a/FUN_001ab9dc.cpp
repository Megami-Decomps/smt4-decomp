#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[0xC];
    /* 0xC */ u32 unkC;
} Obj;

extern Obj *DAT_0043e128;

u32 FUN_001ab9dc(void)
{
    return DAT_0043e128->unkC;
}

} /* extern "C" */
