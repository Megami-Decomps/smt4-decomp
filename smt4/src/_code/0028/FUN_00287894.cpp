#include "common.h"

namespace {
struct TableRecord {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 value;
};
}
extern "C" {
TableRecord *dataTable1bOr1cGetRecord(u32 id);

/* Reads the record's byte, returning zero when absent. */
s32 FUN_00287894(u32 id)
{
    TableRecord *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->value : 0;
}
}
