/* NON_MATCHING: branch structure and addressing match; armcc merges the identical flags store of the two arms into one shared tail, retail stores in each arm. */
#include "shard/JobAppletMessage.h"

extern "C" {
void appletShowTextMessage(const u16 *text);
const u16 *fileSectionGetData(void *file, u32 section, s32 index);
void FUN_002b4828(u32 operation);
void *fileSlotGetBuffer(u32 slot);

/* Clears request bits once they have been handled. */
static __inline void jobAppletClearFlags(JobAppletMessage *work, u32 mask)
{
    work->flags &= ~mask;
}

// Process a pending applet message and clear the completed request bits.
s32 FUN_00121e5c(u32 job)
{
    JobAppletMessage *work = reinterpret_cast<JobAppletMessage *>(jobGetWork(job));
    u32 flags = work->flags;
    if (flags & 1) {
        if ((flags & 8) && !(flags & 2)) {
            FUN_002b4828(work->operation);
            jobAppletClearFlags(work, 15);
        } else if ((flags & 4) && !(flags & 2)) {
            u32 section = work->sectionIndex;
            void *file = fileSlotGetBuffer(0x42);
            appletShowTextMessage(fileSectionGetData(file, section, 0));
            jobAppletClearFlags(work, 7);
        }
    }
    return 0;
}
}
