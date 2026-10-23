/* NON_MATCHING: packed fields match, but target address/pitch stores combine into VFP transfers and argument registers differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

// Queue a source/target transfer, packing 16/24/32-bit pixel formats into the command.
void FUN_0019618c(AsdCmdBuffer *buffer, const void *source, u32 sourceSize, u32 sourcePitch,
                  s32 sourceBits, void *target, u32 targetSize, u32 targetPitch, s32 targetBits)
{
    AsdCmdRecord *command = &buffer->entries[buffer->listCount];
    command->kind = 2;
    command->commands = source;
    command->byteCount = sourcePitch;
    command->copySource.size = sourceSize;
    if (sourceBits == 16) {
        command->copySource.format = 0;
    } else if (sourceBits == 24) {
        command->copySource.format = 1;
    } else if (sourceBits == 32) {
        command->copySource.format = 2;
    }
    command->copyTarget.dimensions.size = targetSize;
    command->copyTarget.pitch = targetPitch;
    command->copyTarget.address = target;
    if (targetBits == 16) {
        command->copyTarget.dimensions.format = 0;
    } else if (targetBits == 24) {
        command->copyTarget.dimensions.format = 1;
    } else if (targetBits == 32) {
        command->copyTarget.dimensions.format = 2;
    }
    globalCriticalSectionEnterForward();
    ++buffer->listCount;
    if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submission.enabled != 0 &&
        g_asdGfxContext.submission.pending == 0) {
        g_asdGfxContext.submission.pending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
