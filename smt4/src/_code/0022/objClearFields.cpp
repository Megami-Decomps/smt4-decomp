#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} Obj;

void objClearFields(Obj *obj)
{
    if (obj != NULL) {
        obj->unk00 = 0;
        obj->unk04 = 0;
        obj->unk08 = 0;
        obj->unk0C = 0;
        obj->unk10 = 0;
    }
}

} /* extern "C" */
