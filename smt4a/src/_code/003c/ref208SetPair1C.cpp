#include "shard/Shard003C.h"

extern "C" {

extern Ref208B g_commonBg;

void ref208SetPair1C(u8 a, u8 b)
{
    Obj1C *obj = g_commonBg.obj;

    if (g_commonBg.obj != NULL) {
        obj->unk1C = b;
        obj->unk1D = a;
    }
}

} /* extern "C" */
