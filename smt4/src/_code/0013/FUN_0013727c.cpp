/* NON_MATCHING: compiler forwards stack arguments with VFP loads/stores; retail uses integer LDM/STM and more saved registers. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
void FUN_0013780c(AsdCmdBuffer* buffer, u32 source, u32 sourceWidth, u32 sourceHeight,
                  u32 sourceFormat, u32 destination, u32 destinationWidth,
                  u32 destinationHeight, u32 destinationFormat, u32 mode, u32 flags, u32 option);

// Queue an image transfer on the current graphics command buffer.
void FUN_0013727c(u32 source, u32 sourceWidth, u32 sourceHeight, u32 sourceFormat,
                  u32 destination, u32 destinationWidth, u32 destinationHeight,
                  u32 destinationFormat, u32 mode, u32 flags, u32 option)
{
    FUN_0013780c(g_asdGfxContext.cmdBuffer, source, sourceWidth, sourceHeight, sourceFormat,
                 destination, destinationWidth, destinationHeight, destinationFormat,
                 mode, flags, option);
}
}
