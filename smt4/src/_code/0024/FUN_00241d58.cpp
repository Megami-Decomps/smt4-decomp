#include "common.h"

extern "C" {

int FUN_002e1344(void);
int FUN_0036ef0c(void *block);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 active;
    /* 0x0C */ u8 block[1];
} Obj;

void FUN_00241d58(Obj *obj)
{
    if (obj->active != 0) {
        FUN_002e1344();
        FUN_0036ef0c(obj->block);
        obj->active = 0;
    }
}

} /* extern "C" */
