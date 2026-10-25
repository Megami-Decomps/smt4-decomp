/* NON_MATCHING: Request-bit branches merge the final flags stores through a hoisted address. */
#include "shard/JobAppletMessage.h"
#include "quest_center/qcMain.h"
extern "C" {
const u16* fileSectionGetData(void*, u32, s32);
void appletShowTextMessage(const u16*);
void FUN_001764f4(u32);

s32 FUN_0015f2ec(u32 job)
{
    JobAppletMessage* work = reinterpret_cast<JobAppletMessage*>(jobGetWork(job));
    u32 flags = work->flags;
    if ((flags & 1) != 0) {
        if ((flags & 8) != 0 && (flags & 2) == 0) {
            FUN_001764f4(work->operation);
            work->flags &= ~15u;
        } else if ((flags & 4) != 0 && (flags & 2) == 0) {
            u32 section = work->sectionIndex;
            void* file = reinterpret_cast<void*>(dataTableValueOrZero(0x41));
            appletShowTextMessage(fileSectionGetData(file, section, 0));
            work->flags &= ~7u;
        }
    }
    return 0;
}
}
