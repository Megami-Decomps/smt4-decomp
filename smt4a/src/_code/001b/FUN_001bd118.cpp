#include "common.h"
#include "util/CalleeContracts.h"

namespace {
struct TableRecord {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 value;
};
}
extern "C" {
TableRecord *FUN_001ad9b4(u32 id);

/* Reads the record's byte, returning zero when absent. */
s32 FUN_001bd118(u32 id)
{
    TableRecord *record = FUN_001ad9b4(id);
    return record != NULL ? record->value : 0;
}
}
