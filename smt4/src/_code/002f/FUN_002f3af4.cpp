#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 busy;
} Obj;

extern Obj *DAT_00447a48;

/* 1 when the object is not busy. */
u8 FUN_002f3af4(void)
{
    if (DAT_00447a48->busy != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
