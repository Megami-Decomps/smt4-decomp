#include "shard/W5_W5Match2_StatusQuery.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
extern "C" {
extern TextureStateTable g_texTable;
/* Test whether the selected texture entry is assigned. */
s32 textureGetIndexedResource(u32 index) { s32 result=0; if (g_texTable.entries[index].texture!=NULL) result=1; return result; }
}
