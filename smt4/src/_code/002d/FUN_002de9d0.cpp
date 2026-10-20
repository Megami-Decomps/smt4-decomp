#include "common.h"

extern "C" {

extern int FUN_00269a58(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ int total;
} Obj;

void FUN_002de9d0(Obj *obj)
{
    int value = FUN_00269a58();

    obj->total = value + obj->total;
}

} /* extern "C" */
