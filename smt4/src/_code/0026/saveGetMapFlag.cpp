/* NON_MATCHING: compiler addresses the saved flag directly instead of via the retail nested save-header base. */
#include "common.h"
extern "C" {
struct SavedMapFlags { u8 unk00[0x24BAF]; u8 flags; };
struct SavedMapGlobals { u32 unk00; SavedMapFlags *image; };
extern SavedMapGlobals g_gameDataBlocks;
/* Set or clear the requested bits in the saved map flag byte. */
void saveGetMapFlag(u32 mask,s32 enabled) { if (enabled) g_gameDataBlocks.image->flags|=mask; else g_gameDataBlocks.image->flags&=~mask; }
}
