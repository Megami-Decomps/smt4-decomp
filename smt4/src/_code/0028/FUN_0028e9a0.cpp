#include "common.h"

namespace { struct Record { u8 padding[0x6d]; u8 kind; }; }

extern "C" {
/* Reads or updates the requested state. */
Record *dataTable08Sub1GetRecord(u32 id);
s32 FUN_0028e9a0(u32 id)
{
    if (id > 0 && id <= 60) {
        u8 kind = dataTable08Sub1GetRecord(id)->kind;
        return kind == 2 || kind == 3;
    }
    return 0;
}
}
