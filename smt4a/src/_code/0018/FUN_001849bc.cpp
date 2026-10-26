/* NON_MATCHING: stack frame and member-wise rectangle copy now match retail; only the scheduling/registers of the id % 1000 frame lookup differ. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gfx/SpriteTextureRect.h"

struct TexturedRectangle { s32 left, right, top, bottom; };
struct TexturedRectangleFrame { SpriteTextureRect rectangle; u32 unk10; };
struct TexturedRectangleRequest {
    u32 flags, color;
    u64 payload;
    u32 unk10;
    s32 height, width;
    TexturedRectangle rectangle;
    u16 columns, rows;
    u8 unk30[8];
};
extern "C" {
void FUN_00184efc(TexNode *texture, const TexturedRectangleFrame *frame, const TexturedRectangleRequest *request, u32 flags);

// Resolve the sprite frame and optionally override its rectangle before issuing the textured draw.
void FUN_001849bc(u32 flags, u32 group, s32 id, u32 color, u64 payload, const TexturedRectangle *rectangle)
{
    TexNode *texture = asdTMTexTableCallFileC(group, id);
    const TexturedRectangleFrame *frames = *(const TexturedRectangleFrame **)texture->set;
    const TexturedRectangleFrame *frame = &frames[id % 1000];
    TexturedRectangleRequest request;
    request.flags = flags;
    request.color = color;
    request.payload = payload;
    request.unk10 = 0;
    request.height = 0;
    request.width = 0;
    request.columns = 1;
    request.rows = 1;
    if (rectangle) {
        request.flags |= 0x28000;
        request.rectangle.left = rectangle->left;
        request.rectangle.right = rectangle->right;
        request.rectangle.top = rectangle->top;
        request.rectangle.bottom = rectangle->bottom;
        request.height = request.rectangle.bottom - request.rectangle.top;
        request.width = request.rectangle.right - request.rectangle.left;
    }
    FUN_00184efc(texture, frame, &request, 0);
}
}
