/* NON_MATCHING: retail keeps &record->resource in r4 and the record in r5 (frame push {r4-r6, lr}); armcc folds the slot into [r4, #4] */
/* Frees a record: releases the resource it owns, clears the pointer, then frees the record itself. */
#include "common.h"

extern "C" {
void FUN_002628fc(void *resource);
void asdMemFreeNonNull(void *memory);
}

struct OwnedRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *resource;
};

/* Releases the resource behind `slot` and clears it. */
static inline void releaseResource(void *&slot)
{
    FUN_002628fc(slot);
    slot = NULL;
}

extern "C" void FUN_00356d70(OwnedRecord *record)
{
    releaseResource(record->resource);
    asdMemFreeNonNull(record);
}
