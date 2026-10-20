#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ int state;
} Obj;

extern Obj *DAT_0043dd50;

u8 FUN_00311594(void)
{
    return DAT_0043dd50->state == 0;
}

} /* extern "C" */
