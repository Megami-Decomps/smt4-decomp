#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x430];
    /* 0x430 */ u8 unk430;
} Obj;

extern Obj *DAT_0043dd68;

u8 FUN_0026ab40(void)
{
    u8 value = 0;

    if (DAT_0043dd68 != NULL) {
        value = DAT_0043dd68->unk430;
    }
    return DAT_0043dd68 == NULL || value == 0;
}

} /* extern "C" */
