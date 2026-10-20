#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ u8 *unk80;
    /* 0x084 */ u8 *unk84;
    /* 0x088 */ u8 unk088[0x508];
    /* 0x590 */ u8 unk590[1];
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} DAT_0044ea58;

void FUN_002a4d14(void)
{
    Obj *obj = DAT_0044ea58.obj;
    u8 *second = DAT_0044ea58.obj->unk590;

    DAT_0044ea58.obj->unk80 = DAT_0044ea58.obj->unk088;
    obj->unk84 = second;
}

} /* extern "C" */
