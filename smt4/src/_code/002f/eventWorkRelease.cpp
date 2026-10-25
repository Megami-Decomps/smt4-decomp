#include "common.h"
#include "shard/JobWork.h"

namespace {
struct EventWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *allocation;
    /* 0x0c */ void *resources;
};
}

extern "C" {
void resourceListDestroy(void *resources);
void asdMemFree(void *memory);

/* Destroys an event's resources and backing allocation. */
void eventWorkRelease(u32 job)
{
    EventWork *work = (EventWork *)jobGetWork(job);
    resourceListDestroy(work->resources);
    asdMemFree(work->allocation);
}
}
