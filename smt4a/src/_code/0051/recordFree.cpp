#include "shard/Shard0051.h"

extern "C" {

typedef struct Words4Rec {
    /* 0x00 */ void *buf0;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ void *buf3;
} Words4Rec;

typedef struct Allocator {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*free)(void *ptr);
} Allocator;

extern Allocator DAT_00589508;

/* Frees the two buffers of the record and the record itself through the allocator's free callback. */
void recordFree(Words4Rec *record)
{
    if (DAT_00589508.free == NULL || record == NULL) {
        return;
    }
    if (record->buf3 != NULL) {
        DAT_00589508.free(record->buf3);
    }
    if (record->buf0 != NULL) {
        DAT_00589508.free(record->buf0);
    }
    DAT_00589508.free(record);
}

} /* extern "C" */
