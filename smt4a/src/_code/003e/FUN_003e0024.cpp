#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);

s32 FUN_003e0024(void)
{
    return FUN_001801a4()->unk2A;
}

} /* extern "C" */
