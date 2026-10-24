/* NON_MATCHING: case 1's closing stores are tail-merged with case 3's (strne/strne then b), retail keeps all three stores in place */
#include "gamedata/DataTable.h"
#include "ui/SpriteWindow.h"

extern "C" {

extern SpriteWindow *g_sWin; /* 0x57f57c */
s32 FUN_0028520c(s16 id);
s32 FUN_001517b4(s32 first, s32 second);
s32 FUN_00163fd4(s32 id);
s32 FUN_00163aa4(ByteStateWork *sprite, f32 speed);
void uiSpriteSetImageKeyframe(ByteStateWork *sprite, s32 keyframe, s32 frame);
void FUN_0019e330(ByteStateWork *sprite, s32 keyframe, s32 frame);
void workSetStateByte(ByteStateWork *work, u8 state);
void asdTMTexTableReleaseNode(s32 table, s32 index);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 FUN_002321f8(const void *key, const void *record);

struct TextureIndexMapping {
    u16 id;
    s16 resource;
};

/* Releases the downloadable texture resource mapped to a window texture id, if it has one. */
static __inline void releaseMappedTexture(s32 id)
{
    void *table = dataTableGet(0x47, 0);
    const void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    u16 key = (u16)id;
    const TextureIndexMapping *mapping = static_cast<const TextureIndexMapping *>(
        libc_bsearch(&key, entries, count, sizeof(TextureIndexMapping), FUN_002321f8));

    if (mapping != NULL && mapping->resource >= 0) {
        asdTMTexTableReleaseNode(52, mapping->resource);
    }
}

/* Per-frame update of the sprite window: plays the open animation, waits for the texture, then closes and releases it. */
s32 FUN_003d0958(void)
{
    SpriteWindow *window = g_sWin;

    switch (window->state) {
    case 0:
    case 2:
        break;
    case 1:
        if (FUN_0028520c((s16)window->textureId)) {
            if (window->phase == 0) {
                if (FUN_001517b4(9, 2) != 0 || FUN_00163fd4(6) != 0) {
                    workSetStateByte(&window->sprite, 1);
                } else {
                    uiSpriteSetImageKeyframe(&window->sprite, 0, 0);
                    FUN_0019e330(&window->sprite, 0, 0);
                }
                window->phase = 1;
            }
            if (FUN_00163aa4(&window->sprite, 1.0f)) {
                window->phase = 0;
                window->state = 2;
                window->frames = 0;
            }
        }
        break;
    case 3:
        if (FUN_0028520c((s16)window->textureId) && FUN_00163aa4(&window->sprite, 1.0f)) {
            releaseMappedTexture(window->textureId);
            window->state = 0;
            window->phase = 0;
            window->frames = 0;
        }
        break;
    case 4:
        if (FUN_0028520c((s16)window->textureId) && ++window->holdTimer >= window->holdLimit) {
            releaseMappedTexture(window->holdTextureId);
            window->phase = 0;
            window->state = 2;
            window->frames = 0;
            window->holdTimer = 0;
            window->holdTextureId = 0;
        }
        break;
    }
    window->frames++;
    return 0;
}

} /* extern "C" */
