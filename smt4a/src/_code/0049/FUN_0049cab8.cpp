#include "shard/Shard0049.h"

extern "C" {

extern u8 aocEntryGetKind(void);

u8 FUN_0049cab8(void)
{
    return aocEntryGetKind() == 10;
}

} /* extern "C" */
