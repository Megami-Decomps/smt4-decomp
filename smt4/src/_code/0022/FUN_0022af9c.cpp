#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 unk20;
} Obj;

extern Obj *DAT_0043e128;

void FUN_0022af9c(u8 value)
{
    DAT_0043e128->unk20 = value;
}

} /* extern "C" */
