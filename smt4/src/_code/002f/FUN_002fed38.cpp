#include "common.h"

namespace {
struct EventWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *allocation;
    /* 0x0c */ void *resources;
};
}

extern "C" {
EventWork *jobGetWork(u32 job);
void resourceListDestroy(void *resources);
void asdMemFree(void *memory);

/* Destroys an event's resources and backing allocation. */
void FUN_002fed38(u32 job)
{
    EventWork *work = jobGetWork(job);
    resourceListDestroy(work->resources);
    asdMemFree(work->allocation);
}
}
