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

extern Allocator g_moAllocator;

/* Frees the two buffers of the record and the record itself through the allocator's free callback. */
void recordFree(Words4Rec *record)
{
    if (g_moAllocator.free == NULL || record == NULL) {
        return;
    }
    if (record->buf3 != NULL) {
        g_moAllocator.free(record->buf3);
    }
    if (record->buf0 != NULL) {
        g_moAllocator.free(record->buf0);
    }
    g_moAllocator.free(record);
}

} /* extern "C" */
