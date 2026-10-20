#include "shard/Shard0045.h"

extern "C" {

extern u8 DAT_0055bde0;
extern VtblHolder *FUN_00460e9c(u32 arg, u8 flag);

void installVtbl55BDE0(u32 arg)
{
    VtblHolder *obj = FUN_00460e9c(arg, 0);

    obj->vtbl = &DAT_0055bde0;
}

} /* extern "C" */
