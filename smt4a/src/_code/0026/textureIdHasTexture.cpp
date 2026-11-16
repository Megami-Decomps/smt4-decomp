#include "gamedata/TextureIdTable.h"

extern "C" {

/* Returns whether `id` (1-63) has a texture in data table 0x47. */
u32 textureIdHasTexture(s32 id)
{
    if (id <= 0)
        return 0;
    if (id < 0x40) {
        const TextureIdRecord *record = textureIdTableFind(id);
        if (record != NULL && record->textureIndex >= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
