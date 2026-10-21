#include "common.h"

namespace {
struct Record { u8 data[0x2c]; };
struct Pool { Record *records; u32 count; };
}
extern "C" {
extern Pool DAT_00464a70;
/* Gets an indexed record when the pool is allocated and the index is valid. */
Record *FUN_002aeaac(u32 index)
{
    if (DAT_00464a70.records != NULL && index < DAT_00464a70.count) {
        return &DAT_00464a70.records[index];
    }
    return NULL;
}
}
