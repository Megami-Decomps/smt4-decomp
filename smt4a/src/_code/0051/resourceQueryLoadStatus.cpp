#include "common.h"
extern "C" {
struct StatusResource { u8 unk00[0x10]; void *resource; };
struct StatusOwner { u32 unk00; u32 id; };
StatusResource *FUN_0050d2cc(u32 id);
s32 FUN_004acb54(void *resource);
/* Return fourteen for a missing resource, twenty when unavailable, otherwise zero. */
s32 resourceQueryLoadStatus(const StatusOwner *owner)
{
    if (owner == NULL) return 1;
    StatusResource *record = FUN_0050d2cc(owner->id);
    if (record == NULL) return 14;
    if (record->resource == NULL) return 14;
    if (FUN_004acb54(record->resource) == 0) return 20;
    return 0;
}
}
