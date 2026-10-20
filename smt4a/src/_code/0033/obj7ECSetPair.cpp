#include "shard/Shard0033.h"

extern "C" {

extern Obj7ECRef DAT_0057f27c;

void obj7ECSetPair(u32 a, u32 b)
{
    Obj7EC *obj = DAT_0057f27c.instance;

    obj->unk7EC = a;
    obj->unk7F0 = b;
}

} /* extern "C" */
