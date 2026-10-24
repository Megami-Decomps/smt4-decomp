/* NON_MATCHING: identical control flow and rectangle arithmetic; retail loads the last two stack arguments with one ldrd and keeps the draw-request pointer in r6 (this build uses ldm pairs and r4), so the stores are scheduled differently. */
#include "common.h"

/* Texture description: the pixel size sits at +0x14. */
struct TextureSize {
    /* 0x00 */ u16 width;
    /* 0x02 */ u16 height;
};
struct TextureInfo {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ TextureSize size;
};
struct TextureLink3 {
    /* 0x00 */ TextureInfo *info;
};
struct TextureLink2 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TextureLink3 *next;
};
struct TextureLink1 {
    /* 0x00 */ TextureLink2 *next;
};
struct TextureLink0 {
    /* 0x00 */ TextureLink1 *next;
};
struct TextureFileRef {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TextureLink0 *texture;
};

struct Extent {
    s32 width;
    s32 height;
};

/* The draw request: flags, then the source/destination rectangle at +0x14. */
struct SpriteDrawRequest {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ Extent source;
    /* 0x1C */ s32 top;
    /* 0x20 */ s32 bottom;
    /* 0x24 */ s32 left;
    /* 0x28 */ s32 right;
    /* 0x2C */ u8 unk2C[0x10];
};

extern "C" {

TextureFileRef *FUN_001b2ca4(void *package, u32 kind, void *name);
void *asdTMTexTableGetNode(s32 table, void *name);
void FUN_001ab8e0(SpriteDrawRequest *request, u32 a, s32 b, s32 c, u32 d);
void FUN_0019b770(TextureSize *size, SpriteDrawRequest *request, void *node, u32 flags);

void FUN_00471a04(void *package, u32 p2, u32 a, void *name, s32 x0, s32 y0, u32 scale, s32 x1, s32 y1, Extent extent)
{
    TextureFileRef *ref = FUN_001b2ca4(package, 23, name);
    TextureLink0 *texture = NULL;
    if (ref != NULL) {
        texture = ref->texture;
    }
    void *node = asdTMTexTableGetNode(15, name);
    SpriteDrawRequest request;
    FUN_001ab8e0(&request, a, x1, y1, scale);
    request.flags |= 0x28000;
    TextureSize *size = &texture->next->next->next->info->size;
    request.left = size->width + (x1 - x0);
    request.right = request.left + extent.width;
    request.top = size->height + (y1 - y0);
    request.bottom = request.top + extent.height;
    request.source = extent;
    FUN_0019b770(size, &request, node, 0);
}

} /* extern "C" */
