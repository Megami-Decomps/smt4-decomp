#include "shard/JobWork.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_JobWork.h"

extern "C" {

void asdGfxCmdBufferForward5(u32 destBuffer, u32 sourceBuffer, s32 width, s32 height, u32 format);
void asdGxCmdBufferFinalizeBlock(void);

/* Copies a surface: after asdGxCmdBufferFinalizeBlock, copies the source surface's buffer into the destination's using the destination's width, height and format. */
void surfaceCopy(JobSurface *dest, JobSurface *source)
{
    asdGxCmdBufferFinalizeBlock();
    asdGfxCmdBufferForward5(dest->buffer, source->buffer, dest->width, dest->height, dest->format);
}

} /* extern "C" */
