#include "common.h"
extern "C" {
struct GameDataBlocksView { u32 unk00; u8 *source; void *destination; };
extern GameDataBlocksView g_gameDataBlocks;
void __aeabi_memcpy4(void *destination,const void *source,u32 size);
/* Copy the saved block from its serialized image after the header. */
void gameCopyPersistentSave(void) { __aeabi_memcpy4(g_gameDataBlocks.destination,g_gameDataBlocks.source+0x88,0x24D28); }
}
