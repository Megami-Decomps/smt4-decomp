#include "common.h"
#include "code/Code0023_Smt4.h"

extern "C" {

int gridNavigationHandleConfirm(void *block, int arg);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 unk08;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u8 block[1];
} Obj;

void sub10OwnerStart(Obj *obj)
{
    if (obj->unk08 != 0) {
        gridNavigationHandleConfirm(obj->block, 1);
    }
}

} /* extern "C" */
