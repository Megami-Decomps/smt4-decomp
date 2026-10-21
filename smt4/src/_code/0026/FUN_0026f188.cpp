#include "shard/Obj43da28.h"

extern "C" {

int asdTextDrawDirectoryEntry(u32 a, int b, u32 c, int d, int e, int f, u32 g);

void FUN_0026f188(int mode, u32 arg)
{
    Obj43da28 *obj = g_buttonHelp.obj;

    g_buttonHelp.obj->unk55C = 1;
    obj->unk4CB = 1;
    if (mode != 0) {
        asdTextDrawDirectoryEntry(obj->unk558, 3, 0xffffffff, 0, 3, mode, arg);
        return;
    }
    obj->unk4CB = 0;
    obj->unk55C = 0;
    obj->unk558 = 0;
}

} /* extern "C" */
