/* NON_MATCHING: 93 lines: retail loads the final 1.0f speed into s18 at entry (saving d9) and reads the phase before
 * the limit, which renumbers the phase-branch registers; layout, offsets and calls match. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {


/* The party panel's work area (only the fields used here). */
typedef struct PartyPopup {
    /* 0x0000 */ u8 unk0000[0xAC];
    /* 0x00AC */ UiSpriteState overlay; /* its speed drives the overlay's second part */
    /* 0x0138 */ u8 unk0138[0x1298];
    /* 0x13D0 */ UiSpriteState slide;
    /* 0x145C */ u8 unk145c[0x2D44];
    /* 0x41A0 */ s32 x;
    /* 0x41A4 */ s32 y;
    /* 0x41A8 */ u8 unk41a8[0x958];
    /* 0x4B00 */ u8 unk4b00[0xF];
    /* 0x4B0F */ s8 active;
    /* 0x4B10 */ s32 phase;
    /* 0x4B14 */ s16 textureId;
    /* 0x4B16 */ u8 unk4b16[0x12];
    /* 0x4B28 */ s32 mode;
} PartyPopup;
typedef char PartyPopupOffsets[offsetof(PartyPopup, slide) == 0x13D0 && offsetof(PartyPopup, x) == 0x41A0 &&
                              offsetof(PartyPopup, mode) == 0x4B28 ? 1 : -1];

extern u8 *g_renderCtx;

void efctSetSpeed(f32 speed);
void texDrawCompositeSprite(u32 a, u32 b, u32 id, s32 x, s32 y, u32 tag);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Draws the party panel's pop-up: positions it from the phase (rising in, held with a texture
 * preview, then sliding out), draws its frame and the clipped texture preview, then the two
 * overlay parts at the speed the phase gives. */
void FUN_0034ea70(PartyPopup *popup)
{
    if (popup->active == 0) {
        return;
    }
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(13, 0x1DE);
    s32 x = popup->x;
    s32 y = popup->y;
    s32 limit = popup->mode == 1 ? 14 : 11;
    f32 speed;

    if (popup->phase < 7) {
        speed = 0.0f;
        y += frame->placement->height;
    } else if (popup->phase < limit) {
        if (popup->mode != 1) {
            s32 height = frame->placement->height;

            speed = (f32)(popup->phase - 7) * 0.25f;
            y += (height / 4) * (7 - popup->phase) + height;
        } else {
            s32 step;
            s32 width;

            if (devilIsTextureLoaded(popup->textureId, 1) == 0) {
                return;
            }
            step = popup->phase - 5;
            if (step > 7) {
                step = 7;
            }
            width = frame->placement->width / 2;
            speed = (f32)step * (1.0f / 7.0f);
            x += width - (width / 7) * step;
        }
    } else {
        x += vec2GetXInt(&popup->slide);
        speed = vec2GetSpeed(&popup->slide);
    }
    efctSetSpeed(speed);
    texDrawTableEntryAtStoredOrigin(2, 13, 0x1E0, x, y, 0x51);
    TextureTableEntryIV *window = asdTMTexTableEntryAt(13, 0x1DD);

    renderStackSet((RenderStateStack *)(g_renderCtx + 0x1318), 3);
    gxSetMirroredClippedScissor(window->x + x, window->y + y, window->placement->width, window->placement->height + y, 1);
    devilDispatchTextureResource(popup->textureId, frame->x + x, frame->y + y, 0x15, 1);
    renderStackSet((RenderStateStack *)(g_renderCtx + 0x1318), 0);
    texDrawCompositeSprite(2, 13, 13, x, y, 0x56);
    if (speed > 0.0f) {
        efctSetSpeed(vec2GetSpeed(&popup->overlay));
    }
    texDrawCompositeSprite(2, 13, 14, x, y, 0x56);
    efctSetSpeed(1.0f);
}

}
