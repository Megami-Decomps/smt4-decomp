/* NON_MATCHING: retail 45 vs built 43 rows; texture-release loop uses different saved registers and return-value handling. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
TexSprite *texTableFindNode(TexTable *);
TexNode *asdTMTexTableCallFileB(TexTable *, u32);
void asdMemFree(void *);
void asdTextureRelease(AsdTexture *);

// Release the transient texture payloads referenced by the table's first sprite.
u32 FUN_002108c0(TexTable *table)
{
    TexSprite *sprite = texTableFindNode(table);
    if (sprite == NULL)
        return 0;
    for (s32 index = 0; index < sprite->frameCount; ++index) {
        u32 *frame = reinterpret_cast<u32 *>(sprite->frames) + index * 5;
        if (asdTMTexTableCallFileB(table, *frame)->loaded.state & 4) {
            TexNode *node = asdTMTexTableCallFileB(table, *frame);
            if (node != NULL) {
                if (node->loaded.data != NULL) {
                    asdMemFree(node->loaded.data);
                    node->loaded.data = NULL;
                }
                if (node->loaded.texture != NULL) {
                    asdTextureRelease(node->loaded.texture);
                    node->loaded.texture = NULL;
                }
                node->loaded.state = 0;
                node->loaded.count = 0;
            }
        }
    }
    return 1;
}
}
