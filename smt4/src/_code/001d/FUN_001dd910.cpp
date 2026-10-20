#include "common.h"

extern "C" {

int FUN_002bed98(void *obj);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 unk34[1];
} Obj;

extern Obj *DAT_0043e140;

void FUN_001dd910(void)
{
    if (DAT_0043e140 != NULL) {
        FUN_002bed98(DAT_0043e140->unk34);
    }
}

} /* extern "C" */
