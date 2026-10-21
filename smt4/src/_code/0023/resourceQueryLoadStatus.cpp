#include "common.h"
extern "C" {
struct StatusResource { u8 unk00[0x10]; void *resource; };
struct StatusOwner { u32 unk00; u32 id; };
StatusResource *FUN_00225c1c(u32 id);
s32 FUN_003afd18(void *resource);
/* Return fourteen for a missing resource, twenty when unavailable, otherwise zero. */
s32 resourceQueryLoadStatus(const StatusOwner *owner)
{
    if (owner == NULL) return 1;
    StatusResource *record = FUN_00225c1c(owner->id);
    if (record == NULL) return 14;
    if (record->resource == NULL) return 14;
    if (FUN_003afd18(record->resource) == 0) return 20;
    return 0;
}
}
