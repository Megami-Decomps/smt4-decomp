/* NON_MATCHING: slot pointer and frame now match; retail materialises the zero in r1 and stores it after `mov r0, r5`, armcc stores it from r0 first. */
/* Frees a record: releases the resource it owns, clears the pointer, then frees the record itself. */
#include "common.h"

extern "C" {
void objectReleaseIfSet(void *resource);
void asdMemFreeNonNull(void *memory);
}

struct OwnedRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *resource;
};

extern "C" void FUN_00356d70(OwnedRecord *record)
{
    void **slot = &record->resource;
    objectReleaseIfSet(*slot);
    *slot = NULL;
    asdMemFreeNonNull(record);
}
