#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x2392];
    /* 0x2392 */ u8 unk2392;
} Obj;

extern Obj *DAT_0044e190;

void FUN_0026d654(u8 value)
{
    if (DAT_0044e190 != NULL) {
        DAT_0044e190->unk2392 = value;
    }
}

} /* extern "C" */
