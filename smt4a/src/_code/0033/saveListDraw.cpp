/* NON_MATCHING: draws the save list (selected slot first, then the other slots, then the optional extra rows and the footer); written from the decompilation, render-stack push scheduling not compared with retail */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code0018.h"
#include "ui/UiSpriteApi.h"
#include "gamedata/SaveSlotTable.h"

struct SaveListWork {
    /* 0x000 */ u8 unk000[0xF18];
    /* 0xF18 */ UiSpriteState rows[1];   /* row 0 is the selected slot, the rest follow */
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
void FUN_0037e8a4(SaveListWork *work);
void FUN_003721b0(SaveListWork *work, PartySlotA *entry, s32 row, s32 x, s32 y);
void FUN_002ca878(SaveListWork *work, s32 x, s32 y);
void FUN_0037eb64(SaveListWork *work, s32 x, s32 y);

void saveListDraw(SaveListWork *work)
{
    RenderCtxA *context = g_renderCtx;
    renderStackPush(context->stacks + RENDER_STACK_A, renderCtxPackPassFlags(1, 0));
    gxResetColorQuadToWhite();
    FUN_0037e8a4(work);

    s32 row = 1;
    u32 selectedId = SAVE_ROW_NO_SELECTION;
    if (saveSlotFindSelected() != NULL)
        selectedId = saveSlotFindSelected()->id;

    for (s32 slot = 0; slot < SAVE_LIST_SLOT_COUNT; slot++) {
        PartySlotA *entry = FUN_00187068(slot);
        if (partySlotIsOccupied(entry) != 0) {
            UiSpriteState *sprite = &work->rows[row];
            s32 x = vec2GetXInt(sprite);
            s32 y = vec2GetYInt(sprite);
            if (entry->id == selectedId) {
                x = vec2GetXInt(&work->rows[0]);
                y = vec2GetYInt(&work->rows[0]);
                FUN_003721b0(work, entry, 0, x, y);
            } else {
                FUN_003721b0(work, entry, row, x, y);
                row++;
            }
        }
    }

    if (gameFlagIsSet(0x4D0) != 0 || (flagSelectVariant() == 2 && gameFlagIsSet(0x4DB) != 0)) {
        SaveRowFrame *rowFrame = asdTMTexTableEntryAt(0x14, row + 0xBBA);
        SaveRowFrame *footerFrame = asdTMTexTableEntryAt(0x14, 0xC17);
        s16 rowHeight = rowFrame->height;
        s16 footerOffset = footerFrame->image->offset;
        s16 rowOffset = rowFrame->image->offset;
        UiSpriteState *sprite = &work->rows[row];
        s32 x = vec2GetXInt(sprite);
        s32 y = vec2GetYInt(sprite);
        FUN_002ca878(work, x, y + footerOffset + rowHeight + rowOffset + 1);
        row++;
    }

    UiSpriteState *sprite = &work->rows[row];
    s32 x = vec2GetXInt(sprite);
    s32 y = vec2GetYInt(sprite);
    FUN_0037eb64(work, x, y);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}

} /* extern "C" */
