#include "common.h"

namespace { struct Record { u8 padding[7]; u8 flags; }; }

extern "C" {
/* Computes or forwards the requested value. */
Record *dataTable1bOr1cGetRecord(u32 id);
u32 FUN_00298e00(u32 id)
{
    Record *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? (record->flags & 2) >> 1 : 0;
}
}
