#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4.h"

extern "C" {

extern u8 *g_commandBufferCursor;

/* Advances the command buffer write cursor by `size` bytes. */
void asdModelAdvanceCommandCursor(s32 size)
{
    g_commandBufferCursor += size;
}

} /* extern "C" */
