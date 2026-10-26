#include "common.h"
#include "code/Code001b.h"

namespace { struct Record { u8 padding[7]; u8 flags; }; }

extern "C" {
/* Reads or forwards the current state. */
Record *FUN_001ad9b4(u32 id);
u32 FUN_001bd100(u32 id)
{
    Record *record = FUN_001ad9b4(id);
    return record != NULL ? record->flags & 1 : 0;
}
}
