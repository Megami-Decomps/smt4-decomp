#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

struct TextureSlot { u32 table, index; u8 unk08[8]; };
extern TextureSlot DAT_0057f43c[4];

s32 eventTextureSlotIsLoaded(u32 index)
{
    if (index >= 4) {
        return 0;
    }
    TextureSlot *slot = &DAT_0057f43c[index];
    return asdTMTexTableNodeIsLoaded(slot->table, slot->index);
}

} /* extern "C" */
