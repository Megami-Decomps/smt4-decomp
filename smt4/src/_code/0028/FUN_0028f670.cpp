#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 unk400;
} Obj;

extern Obj *DAT_0043dd68;

u8 FUN_0028f670(void)
{
    int value = 0;

    if (DAT_0043dd68 != NULL) {
        value = DAT_0043dd68->unk400;
    }
    return DAT_0043dd68 == NULL || value == 0x24;
}

} /* extern "C" */
