/* NON_MATCHING: compiler forwards the cleared count and removes redundant cache stores; retail repeatedly computes the embedded source address and reloads each field. */
#include "common.h"

class ListJobSource {
    u8 unk00[0x1c]; // 0x00
    u32 count;       // 0x1c
    u32 first;       // 0x20
    u32 last;        // 0x24
public:
    void clearCount() { count = 0; }
    u32 getCount() const { return count; }
    u32 getFirst() const { return first; }
    u32 getLast() const { return last; }
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
ListJobWork* jobGetWork(void);
void dlistFreeAll(ListJobWork* work);

// Releases the job's list and resets its cached source endpoints and count.
void FUN_0024ef90()
{
    ListJobWork* work = jobGetWork();
    dlistFreeAll(work);
    work->state = 0;
    work->count = 0;
    work->first = 0;
    work->last = 0;
    work->source.clearCount();
    work->count = work->source.getCount();
    work->last = work->source.getLast();
    work->first = work->source.getFirst();
}
}
