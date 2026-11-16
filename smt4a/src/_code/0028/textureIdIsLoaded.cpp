#include "gamedata/TextureIdTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

/* Reports whether the id's texture of table 0x34 is loaded (0 when it has none or the table is absent). */
extern "C" s32 textureIdIsLoaded(u32 id)
{
    const TextureIdRecord *entry = textureIdTableFind(id);
    if (entry == NULL || entry->textureIndex < 0) {
        return 0;
    }
    u32 textureIndex = entry->textureIndex;
    if (reinterpret_cast<void *>(textureGetIndexedResource(0x34)) == NULL) {
        return 0;
    }
    return asdTMTexTableNodeIsLoaded(0x34, textureIndex);
}
