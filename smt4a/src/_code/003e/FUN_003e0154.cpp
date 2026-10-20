#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);

s32 FUN_003e0154(void)
{
    return FUN_001801a4()->unk1C;
}

} /* extern "C" */
