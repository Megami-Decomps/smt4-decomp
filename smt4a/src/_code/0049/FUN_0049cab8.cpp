#include "shard/Shard0049.h"
#include "addon/AocEntryKind.h"

extern "C" {

/* Whether content entry `id` is of kind 10. */
u8 FUN_0049cab8(u32 id)
{
    return aocEntryGetKind(id) == 10;
}

} /* extern "C" */
