#include "common.h"

struct Record { u32 first; u32 second; u8 kind; };

extern "C" {
/* Copies or updates the stored values. */
Record *FUN_002b4748(u32 id);

u32 aocEntryGetKind(u32 id)
{
    Record *record = FUN_002b4748(id);
    return record != NULL ? record->kind : 0;
}
}
