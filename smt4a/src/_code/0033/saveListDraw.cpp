/* NON_MATCHING: 83 lines off: retail has a 36-byte frame (the first row's address at [sp, #28], 12 bytes here) and
 * keeps 1.0f in s17 from entry; the footer's offset sum is scheduled before the row address. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code0018.h"
#include "code/Code0037.h"
#include "ui/UiSpriteApi.h"
#include "gamedata/SaveSlotTable.h"

/* unit-local: the save list work's row sprites and the fade sprite whose opacity scales every row */
struct SaveListWork {
    union {
        struct {
            /* 0x0000 */ u8 unk0000[0xF18];
            /* 0x0F18 */ UiSpriteState rows[1]; /* row 0 is the selected slot, the rest follow */
        } list;
        struct {
            /* 0x0000 */ u8 unk0000[0x1634];
            /* 0x1634 */ UiSpriteState fade;
        } panel;
    };
};

struct SaveRowFrame {
    /* 0x00 */ u8 unk00[0xA];
    /* 0x0A */ s16 height;
    /* 0x0C */ struct SaveRowImage *image;
};

struct SaveRowImage {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 offset;
};

#define SAVE_LIST_SLOT_COUNT 12
#define SAVE_ROW_NO_SELECTION 0xFFFFFFFFu

extern "C" {
s32 renderCtxPackPassFlags(u32 a, u32 b);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
SaveRowFrame *asdTMTexTableEntryAt(u32 table, u32 index);
s32 gameFlagIsSet(u32 flag);
s32 flagSelectVariant(void);
void FUN_0037e8a4(SaveListWork *work, f32 alpha);
void FUN_003721b0(SaveListWork *work, f32 alpha, PartySlotA *entry, s32 row, s32 x, s32 y);
void FUN_002ca878(SaveListWork *work, s32 x, s32 y, f32 alpha);

/* Draws the save list: the panel, the selected slot in the first row and the other occupied slots after it, the
 * optional extra row and the footer, all at the fade sprite's opacity. */
void saveListDraw(SaveListWork *work)
{
    f32 alpha = vec2GetSpeed(&work->panel.fade);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    gxResetColorQuadToWhite();
    FUN_0037e8a4(work, alpha);

    s32 row = 1;
    u32 selectedId = SAVE_ROW_NO_SELECTION;
    if (saveSlotFindSelected() != NULL)
        selectedId = saveSlotFindSelected()->id;

    for (s32 slot = 0; slot < SAVE_LIST_SLOT_COUNT; slot++) {
        PartySlotA *entry = FUN_00187068(slot);
        if (partySlotIsOccupied(entry) != 0) {
            UiSpriteState *sprite = &work->list.rows[row];
            s32 x = vec2GetXInt(sprite);
            s32 y = vec2GetYInt(sprite);
            f32 rowAlpha = vec2GetSpeed(sprite);
            if (entry->id == selectedId) {
                x = vec2GetXInt(&work->list.rows[0]);
                y = vec2GetYInt(&work->list.rows[0]);
                rowAlpha = vec2GetSpeed(&work->list.rows[0]);
                FUN_003721b0(work, rowAlpha * alpha, entry, 0, x, y);
            } else {
                FUN_003721b0(work, rowAlpha * alpha, entry, row, x, y);
                row++;
            }
        }
    }

    if (gameFlagIsSet(0x4D0) != 0 || (flagSelectVariant() == 2 && gameFlagIsSet(0x4DB) != 0)) {
        SaveRowFrame *rowFrame = asdTMTexTableEntryAt(0x14, row + 0xBBA);
        SaveRowFrame *footerFrame = asdTMTexTableEntryAt(0x14, 0xC17);
        s32 offset = footerFrame->image->offset + rowFrame->height + rowFrame->image->offset + 1;
        UiSpriteState *sprite = &work->list.rows[row];
        s32 x = vec2GetXInt(sprite);
        s32 y = vec2GetYInt(sprite);
        FUN_002ca878(work, x, y + offset, vec2GetSpeed(sprite) * alpha);
        row++;
    }

    UiSpriteState *sprite = &work->list.rows[row];
    s32 x = vec2GetXInt(sprite);
    s32 y = vec2GetYInt(sprite);
    FUN_0037eb64((u32)work, x, y, alpha * vec2GetSpeed(sprite));
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}

} /* extern "C" */
