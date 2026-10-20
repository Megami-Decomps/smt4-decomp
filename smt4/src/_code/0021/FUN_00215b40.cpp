#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x47E];
    /* 0x47E */ u16 unk47E;
} Obj;

extern Obj *DAT_0044e190;

void FUN_00215b40(u16 value)
{
    if (DAT_0044e190 != NULL) {
        DAT_0044e190->unk47E = value;
    }
}

} /* extern "C" */
