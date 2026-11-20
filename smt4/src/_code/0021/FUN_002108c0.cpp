/* NON_MATCHING: retail keeps the result 1 in r8 from entry (a `u32 result = 1;` status local gives that, 38 -> 23 lines,
 * but is not kept without other evidence), and the node clear at the end is asdTMTexTableReleaseNode's unsolved tail
 * (retail: str r9,[r5,#16]!; mov r0,#0; str r0,[r5,#12]). */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
TexSprite *texTableFindNode(TexTable *);
void asdMemFree(void *);
void asdTextureRelease(AsdTexture *);

/* Releases the transient texture payloads referenced by the table's first sprite. */
u32 FUN_002108c0(TexTable *table)
{
    TexSprite *sprite = texTableFindNode(table);
    if (sprite == NULL)
        return 0;
    for (s32 index = 0; index < sprite->frameCount; ++index) {
        u32 *frame = reinterpret_cast<u32 *>(sprite->frames) + index * 5;
        if (asdTMTexTableCallFileB((s32)table, *frame)->loaded.state & 4) {
            TexNode *node = asdTMTexTableCallFileB((s32)table, *frame);
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
