#include "shard/Shard0033.h"

extern "C" {

extern Obj7ECRef g_useCounter;

void obj7ECSetPair(u32 a, u32 b)
{
    Obj7EC *obj = g_useCounter.instance;

    obj->unk7EC = a;
    obj->unk7F0 = b;
}

} /* extern "C" */
