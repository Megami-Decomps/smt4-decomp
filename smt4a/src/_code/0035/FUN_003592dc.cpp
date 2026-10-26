#include "common.h"
#include "shard/JobWork.h"

struct ListJobSource {
    u8 unk00[0x1c]; // 0x00
    u32 count;       // 0x1c
    u32 first;       // 0x20
    u32 last;        // 0x24
};
struct ListJobWork {
    u8 unk00[0x0c];    // 0x00
    ListJobSource source; // 0x0c
    u8 unk34[0x2c];    // 0x34
    u32 first;          // 0x60
    u32 last;           // 0x64
    u8 unk68[4];        // 0x68
    u32 count;          // 0x6c
    u32 state;          // 0x70
};

extern "C" {
void dlistFreeAll(ListJobWork* work);
void asdListBoxSetCursor(ListJobSource *source, u32 value);
u32 asdListBoxGetCursor(const ListJobSource *source);
u32 scrollListGetTop(const ListJobSource *source);
u32 scrollListGetOffset(const ListJobSource *source);

// Releases the job's list and resets its cached source endpoints and count.
void FUN_003592dc(u32 job)
{
    ListJobWork *work = (ListJobWork *)jobGetWork(job);
    dlistFreeAll(work);
    work->state = 0;
    work->count = 0;
    work->first = 0;
    work->last = 0;
    asdListBoxSetCursor(&work->source, 0);
    work->count = asdListBoxGetCursor(&work->source);
    work->last = scrollListGetTop(&work->source);
    work->first = scrollListGetOffset(&work->source);
}
}
