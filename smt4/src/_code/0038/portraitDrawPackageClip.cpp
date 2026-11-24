/* NON_MATCHING: retail initializes the nullable texture link before the conditional load and
 * schedules the horizontal offset and width load differently. */
#include "util/BitsAndBytes.h"

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
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
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

TextureFileRef *packageFindFileRefByName(void *package, u32 kind, void *name);
void *asdTMTexTableCallFileB(s32 table, void *name);
void requestParamsInitialize(SpriteDrawRequest *request, u32 a, s32 b, s32 c, u32 d);
void FUN_002a8ac4(TextureSize *size, SpriteDrawRequest *request, void *node);

void portraitDrawPackageClip(void *package, u32 p2, u32 a, void *name, s32 x0, s32 y0, u32 scale, s32 x1, s32 y1, s32 width, s32 height)
{
    TextureFileRef *ref = packageFindFileRefByName(package, 23, name);
    TextureLink0 *texture = ref != NULL ? ref->texture : NULL;
    void *node = asdTMTexTableCallFileB(23, name);
    SpriteDrawRequest request;
    requestParamsInitialize(&request, a, x1, y1, scale);
    TextureSize *size = &texture->next->next->next->info->size;
    flagsSetBits(&request.flags, 0x28000);
    request.left = size->width + (x1 - x0);
    request.right = request.left + width;
    request.top = size->height + (y1 - y0);
    request.bottom = request.top + height;
    request.source.width = width;
    request.source.height = height;
    FUN_002a8ac4(size, &request, node);
}

} /* extern "C" */
