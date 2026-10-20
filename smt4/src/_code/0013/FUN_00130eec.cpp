#include "common.h"

extern "C" {

int FUN_002c38fc(void *obj);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ u8 unk1C4[1];
} Obj;

void FUN_00130eec(Obj *obj)
{
    FUN_002c38fc(obj->unk1C4);
}

} /* extern "C" */
