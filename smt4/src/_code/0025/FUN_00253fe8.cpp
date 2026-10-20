#include "shard/Obj43da28.h"

extern "C" {

void FUN_00253fe8(u32 a, u8 b, u8 c, u8 d)
{
    Obj43da28 *obj = g_buttonHelp.obj;

    g_buttonHelp.obj->unk550 = a;
    obj->unk554 = b;
    obj->unk555 = c;
    obj->unk556 = d;
}

} /* extern "C" */
