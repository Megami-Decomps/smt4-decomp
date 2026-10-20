#include "shard/Shard0040.h"

extern "C" {

extern Flag10Obj *FUN_001519ac(void);

void setFlag10(void)
{
    FUN_001519ac()->unk10 = 1;
}

} /* extern "C" */
