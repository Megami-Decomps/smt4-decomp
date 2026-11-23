/* NON_MATCHING: the flag clears through a helper stop the hoisted flags address; retail still keeps the first branch's own `str r0, [r4, #1876]; b` where the build cross-jumps it into the second branch's store. */
#include "shard/JobAppletMessage.h"
#include "quest_center/qcMain.h"
extern "C" {
const u16* fileSectionGetData(void*, u32, s32);
void appletShowTextMessage(const u16*);
void appletShowOperationMessage(u32);

/* Clears the given request bits. */
static __inline void appletMessageClear(JobAppletMessage *work, u32 bits)
{
    work->flags &= ~bits;
}

s32 jobAppletMessageUpdate(u32 job)
{
    JobAppletMessage* work = reinterpret_cast<JobAppletMessage*>(jobGetWork(job));
    u32 flags = work->flags;
    if ((flags & 1) != 0) {
        if ((flags & 8) != 0 && (flags & 2) == 0) {
            appletShowOperationMessage(work->operation);
            appletMessageClear(work, 15);
        } else if ((flags & 4) != 0 && (flags & 2) == 0) {
            u32 section = work->sectionIndex;
            void* file = reinterpret_cast<void*>(dataTableValueOrZero(0x41));
            appletShowTextMessage(fileSectionGetData(file, section, 0));
            appletMessageClear(work, 7);
        }
    }
    return 0;
}
}
