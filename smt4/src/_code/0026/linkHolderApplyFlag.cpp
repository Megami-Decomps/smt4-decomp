#include "common.h"

extern "C" {

int linkHolderClearFlagGroup(void);
int linkHolderSetFlagGroup(void);

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
        linkHolderClearFlagGroup();
        return;
    }
    linkHolderSetFlagGroup();
}

} /* extern "C" */
