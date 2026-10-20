#include "shard/Obj43da28.h"

extern "C" {

int FUN_00296ae8(u32 a, int b, u32 c, int d, int e, int f, u32 g);

void FUN_0026f188(int mode, u32 arg)
{
    Obj43da28 *obj = DAT_0043da28.obj;

    DAT_0043da28.obj->unk55C = 1;
    obj->unk4CB = 1;
    if (mode != 0) {
        FUN_00296ae8(obj->unk558, 3, 0xffffffff, 0, 3, mode, arg);
        return;
    }
    obj->unk4CB = 0;
    obj->unk55C = 0;
    obj->unk558 = 0;
}

} /* extern "C" */
