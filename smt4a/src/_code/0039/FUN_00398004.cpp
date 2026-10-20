#include "shard/Shard0039.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

void FUN_00398004(s32 enabled)
{
    FUN_00162e8c()->unk1C = enabled != 0;
}

} /* extern "C" */
