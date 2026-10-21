#include "common.h"

struct Record { u32 first; u32 second; u8 kind; };

extern "C" {
/* Copies or updates the stored values. */
Record *FUN_0019c06c(u32 id);

u32 FUN_0019271c(u32 id)
{
    Record *record = FUN_0019c06c(id);
    return record != NULL ? record->kind : 0;
}
}
