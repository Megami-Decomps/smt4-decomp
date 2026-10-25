/* NON_MATCHING: readable rewrite from retail disassembly compiles (218 vs 210 rows); retail builds the translate/scale matrices with individual stores and a 16-word copy of the camera matrix, and keeps the scale-derived offsets in float registers */
#include "common.h"
#include "util/Vec2Fixed.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"

// Row-major 4x4 matrix.
struct Mtx44 {
    f32 m[16];
};

// Sprite placement record: x/y at +8/+10; the second record also carries a pointer to
// a widths table at +12.
struct SpriteRect {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0a
    s16* extra;             // 0x0c
};

// Item count badge: caption text, the item icon and the badge's pop-in animation.
struct ItemBadge {
    u8 unk00[0x18];
    s16 category;           // 0x018
    u8 unk1a[0x3c - 0x1a];
    u8 unk3c[0x20];
    f32 textAlpha;          // 0x05c
    u8 unk60[0x154 - 0x60];
    u8 anchor[0x8c];        // 0x154: position vector of the badge
    u8 unk1e0[0x204 - 0x1e0];
    f32 scale;              // 0x204
    u8 unk208[0x26c - 0x208];
    char caption[0x50];     // 0x26c
    s32 mode;               // 0x2bc
    u8 unk2c0[8];
    s32 count;              // 0x2c8
};

extern "C" {

extern u8* g_renderCtx;

s32 fontMeasureLineAdvance(const char* text, s32 font);
void FUN_00162790(s32 a, s32 color, const char* text, f32 x, f32 y, f32 scaleA, f32 scaleB, f32 alpha);
void skinObjectUpdateMatrices(u8* ctx);
SpriteRect* FUN_001834a4(s32 group, s32 index);
void FUN_00180310(s32 a, s32 x, s32 y, s32 b, s32 c, s32 d, const char* format, s32 value);
const Mtx44* _ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(Mtx44* dst, const Mtx44* src);
void FUN_0019a0fc(Mtx44* out, const Mtx44* a, const Mtx44* b);
void FUN_0019a0dc(Mtx44* out, u8* ctx);
void camSetMatrixA(u8* ctx, const Mtx44* matrix);

// Draws an item badge: the caption centred in `frame`, the category icon and the count
// (two digits once it reaches ten), the count part scaled around its anchor while it pops in.
void FUN_00165778(ItemBadge* badge, SpriteRect* frame)
{
    s32 captionWidth = fontMeasureLineAdvance(badge->caption, 4);
    s32 left = (*frame->extra - captionWidth) / 2;
    FUN_00162790(4, -1, badge->caption, (f32)left, 6.0f, 0.57f, 0.0f, badge->textAlpha);
    uiDrawItemCategoryIcon(badge->category, left - 13, 8, 121, 0);
    skinObjectUpdateMatrices(g_renderCtx);

    SpriteRect* rect = FUN_001834a4(8, 427);
    FUN_001835b4(2, 8, 424, rect->x + vec2GetXInt(badge->anchor), rect->y, 101);
    SpriteRect* countRect = FUN_001834a4(8, 426);
    if (badge->mode != 3) {
        FUN_00180310(6, rect->x + countRect->x + vec2GetXInt(badge->anchor), rect->y + countRect->y, 1, 2, 121, "%d", badge->count);
        return;
    }

    f32 scale = badge->scale;
    f32 offsetX;
    f32 offsetY;
    s32 digits;
    if (badge->count < 10) {
        countRect = FUN_001834a4(8, 425);
        digits = 1;
        offsetX = (8.0f - scale * 8.0f) * 0.5f;
        offsetY = (12.0f - scale * 12.0f) * 0.5f;
    } else {
        countRect = FUN_001834a4(8, 426);
        digits = 2;
        offsetX = (16.0f - scale * 16.0f) * 0.5f;
        offsetY = (12.0f - scale * 12.0f) * 0.5f;
    }

    Mtx44 saved;
    Mtx44 composed;
    Mtx44 factor;
    mtx44Copy(&saved, _ZN2nw4math5MTX448IdentityEv());
    mtx44Copy(&composed, _ZN2nw4math5MTX448IdentityEv());
    mtx44Copy(&factor, _ZN2nw4math5MTX448IdentityEv());
    factor.m[1] = 0.0f;
    factor.m[3] = (f32)(rect->x + countRect->x);
    factor.m[0] = 1.0f;
    factor.m[7] = (f32)(rect->y + countRect->y);
    factor.m[2] = 0.0f;
    factor.m[3] = factor.m[3] + offsetX;
    factor.m[7] = factor.m[7] + offsetY;
    factor.m[4] = 0.0f;
    factor.m[5] = 1.0f;
    factor.m[6] = 0.0f;
    factor.m[8] = 0.0f;
    factor.m[9] = 0.0f;
    factor.m[10] = 1.0f;
    factor.m[14] = 0.0f;
    factor.m[15] = 1.0f;
    factor.m[12] = 0.0f;
    factor.m[13] = 0.0f;
    factor.m[11] = 0.0f;
    FUN_0019a0fc(&composed, &composed, &factor);
    for (s32 i = 0; i < 16; i++) factor.m[i] = 0.0f;
    factor.m[15] = 1.0f;
    factor.m[0] = scale;
    factor.m[5] = scale;
    factor.m[10] = 1.0f;
    FUN_0019a0fc(&composed, &composed, &factor);
    Mtx44 current;
    FUN_0019a0dc(&current, g_renderCtx);
    saved = current;
    camSetMatrixA(g_renderCtx, &composed);
    FUN_00180310(6, 0, 0, 1, digits, 121, "%d", badge->count);
    camSetMatrixA(g_renderCtx, &saved);
}

} /* extern "C" */
