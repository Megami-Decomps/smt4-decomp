#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 unk10;
} Obj;

extern Obj *DAT_0043e140;

void FUN_002305e8(u8 value)
{
    DAT_0043e140->unk10 = value;
}

} /* extern "C" */
