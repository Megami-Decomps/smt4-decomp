/* Built with the unit's cflags (-O3 -Otime --fpu=softvfp). */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
void asdGxQueueDisplayTransfer(AsdCmdBuffer* buffer, u32 source, u32 sourceWidth, u32 sourceHeight,
                  u32 sourceFormat, u32 destination, u32 destinationWidth,
                  u32 destinationHeight, u32 destinationFormat, u32 mode, u32 flags, u32 option);

// Queue an image transfer on the current graphics command buffer.
void FUN_0013727c(u32 source, u32 sourceWidth, u32 sourceHeight, u32 sourceFormat,
                  u32 destination, u32 destinationWidth, u32 destinationHeight,
                  u32 destinationFormat, u32 mode, u32 flags, u32 option)
{
    asdGxQueueDisplayTransfer(g_asdGfxContext.cmdBuffer, source, sourceWidth, sourceHeight, sourceFormat,
                 destination, destinationWidth, destinationHeight, destinationFormat,
                 mode, flags, option);
}
}
