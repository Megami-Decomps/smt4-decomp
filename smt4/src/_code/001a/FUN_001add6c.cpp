#include "common.h"

extern "C" {

int FUN_002a03a0(u32 value, int a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x47C];
    /* 0x47C */ u32 unk47C;
} Obj;

extern Obj *DAT_0043dd68;

u32 FUN_001add6c(void)
{
    if (DAT_0043dd68 == NULL) {
        return 0;
    }
    FUN_002a03a0(DAT_0043dd68->unk47C, 0, 0x3c);
    return 1;
}

} /* extern "C" */
