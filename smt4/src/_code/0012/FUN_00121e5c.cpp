/* NON_MATCHING: request-bit branch placement and the flags-address hoist differ. */
#include "shard/JobAppletMessage.h"

extern "C" {
void appletShowTextMessage(const u16 *text);
const u16 *fileSectionGetData(void *file, u32 section, s32 index);
void FUN_002b4828(u32 operation);
void *fileSlotGetBuffer(u32 slot);

// Process a pending applet message and clear the completed request bits.
u32 FUN_00121e5c(void)
{
    JobAppletMessage *work = reinterpret_cast<JobAppletMessage *>(jobGetWork());
    u32 flags = work->flags;
    if (flags & 1) {
        if (!(flags & 8) || (flags & 2)) {
            if ((flags & 4) && !(flags & 2)) {
                u32 section = work->sectionIndex;
                void *file = fileSlotGetBuffer(0x42);
                appletShowTextMessage(fileSectionGetData(file, section, 0));
                work->flags &= ~7u;
            }
        } else {
            FUN_002b4828(work->operation);
            work->flags &= ~15u;
        }
    }
    return 0;
}
}
