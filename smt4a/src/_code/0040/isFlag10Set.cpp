#include "shard/Shard0040.h"

extern "C" {

extern Flag10Obj *FUN_001519ac(void);

u8 isFlag10Set(void)
{
    return FUN_001519ac()->unk10 != 0;
}

} /* extern "C" */
