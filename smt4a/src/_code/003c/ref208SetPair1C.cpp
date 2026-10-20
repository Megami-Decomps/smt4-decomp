#include "shard/Shard003C.h"

extern "C" {

extern Ref208B DAT_0057f208;

void ref208SetPair1C(u8 a, u8 b)
{
    Obj1C *obj = DAT_0057f208.obj;

    if (DAT_0057f208.obj != NULL) {
        obj->unk1C = b;
        obj->unk1D = a;
    }
}

} /* extern "C" */
