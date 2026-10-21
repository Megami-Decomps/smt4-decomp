/* NON_MATCHING: temporary-list stack placement, argument stores, and saved-register allocation differ. */
#include "shard/Shard0031.h"

extern "C" {
ListOwner* FUN_002f8728(ListOwner* list);
void FUN_002fbac6(ListOwner* list, u32 value);
u32 FUN_002fd108(u32 owner, u32 key, u32 first, u32 second,
                 ListOwner* list, u32 mode, u32 flags, u32 reserved, u32 option);
ListOwner* FUN_002fd180(ListOwner* list);

// Dispatch using a temporary single-value list, then release the list.
u32 FUN_003056a0(u32 owner, u32 key, u32 value, u32 mode, u32 flags, u32 option)
{
    ListOwner list;
    FUN_002f8728(&list);
    FUN_002fbac6(&list, value);
    u32 result = FUN_002fd108(owner, key, 0, 0, &list, mode, flags, 0, option);
    FUN_002fd180(&list);
    return result;
}
}
