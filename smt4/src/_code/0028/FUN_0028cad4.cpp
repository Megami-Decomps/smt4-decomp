#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 unk400;
} Obj;

extern Obj *DAT_0044e190;

u8 FUN_0028cad4(void)
{
    int value = 0;

    if (DAT_0044e190 != NULL) {
        value = DAT_0044e190->unk400;
    }
    return DAT_0044e190 == NULL || value == 0;
}

} /* extern "C" */
