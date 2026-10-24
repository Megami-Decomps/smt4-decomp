#include "common.h"

extern "C" {

int messageOwnerSetState(void *obj, int state);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u32 unkA4;
    /* 0xA8 */ u32 unkA8;
    /* 0xAC */ u32 unkAC;
} Obj;

void FUN_00398940(Obj *obj)
{
    messageOwnerSetState(obj, 1);
    obj->unkA4 = 0x140;
    obj->unkA8 = 0;
    obj->unkAC = 0x140;
}

} /* extern "C" */
