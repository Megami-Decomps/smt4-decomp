#include "common.h"

extern "C" {

typedef struct MobiclipAllocator {
    /* 0x0 */ void *alloc;
    /* 0x4 */ void *free;
} MobiclipAllocator;

typedef struct MwmoCriticalSection {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 owner;        /* -1 when free */
} MwmoCriticalSection;

extern MobiclipAllocator g_mobiclipAllocator;
extern MwmoCriticalSection g_mwmoCriticalSection;

/* Clears the movie allocator callbacks and marks the critical section free. */
void mobiclipAllocatorReset(void)
{
    g_mobiclipAllocator.alloc = NULL;
    g_mobiclipAllocator.free = NULL;
    g_mwmoCriticalSection.owner = -1;
}

} /* extern "C" */
