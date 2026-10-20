#include "common.h"

extern "C" {

int FUN_00297684(void);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x4394];
    /* 0x4394 */ int unk4394;
} Obj;

void FUN_00338358(Obj *obj)
{
    if (obj->unk4394 != 0) {
        FUN_00297684();
        return;
    }
}

} /* extern "C" */
