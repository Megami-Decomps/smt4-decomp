#include "common.h"

struct NamedDataRecord {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ u8 payload[1];
};

extern "C" {

extern NamedDataRecord *dataTable1bOr1cGetRecord(u32 index);

/* Finds the named-data payload of a table record. */
void *FUN_0011b454(u32 index)
{
    NamedDataRecord *record = dataTable1bOr1cGetRecord(index);
    return record != NULL ? record->payload : NULL;
}

} /* extern "C" */
