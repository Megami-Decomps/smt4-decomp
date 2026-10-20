#include "common.h"

extern "C" {

int FUN_0029ae60(void);
int FUN_0029b8ec(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 unk1C;
} Obj;

void linkHolderApplyFlag(Obj *obj, int flag)
{
    if (obj->unk1C == 0) {
        return;
    }
    if (flag != 0) {
        FUN_0029ae60();
        return;
    }
    FUN_0029b8ec();
}

} /* extern "C" */
