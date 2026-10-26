/* NON_MATCHING: draws the save list (selected slot first, then the other slots, then the optional extra rows and the footer); written from the decompilation, render-stack push scheduling not compared with retail */
#include "camp/RenderCtx.h"
#include "code/Code0018.h"

struct SaveRowSprite {
    /* 0x00 */ u8 data[0x8C];
};

struct SaveListWork {
    /* 0x000 */ u8 unk000[0xF18];
    /* 0xF18 */ SaveRowSprite rows[1];   /* row 0 is the selected slot, the rest follow */
};

struct SaveSlotEntry {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
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
extern RenderCtxA *g_renderCtx;

SaveSlotEntry *saveSlotFindSelected(void);
s32 FUN_001692ac(u32 a, u32 b);
void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);
SaveRowFrame *asdTMTexTableEntryAt(u32 table, u32 index);
SaveSlotEntry *FUN_00187068(s32 index);
s32 gameFlagIsSet(u32 flag);
s32 flagSelectVariant(void);
s32 vec2GetXInt(SaveRowSprite *sprite);
s32 vec2GetYInt(SaveRowSprite *sprite);
void FUN_0037e8a4(SaveListWork *work);
void FUN_003721b0(SaveListWork *work, SaveSlotEntry *entry, s32 row, s32 x, s32 y);
void FUN_002ca878(SaveListWork *work, s32 x, s32 y);
void FUN_0037eb64(SaveListWork *work, s32 x, s32 y);

void FUN_00335060(SaveListWork *work)
{
    RenderCtxA *context = g_renderCtx;
    renderStackPush(&context->stackA, FUN_001692ac(1, 0));
    FUN_00183bb0();
    FUN_0037e8a4(work);

    s32 row = 1;
    u32 selectedId = SAVE_ROW_NO_SELECTION;
    if (saveSlotFindSelected() != NULL)
        selectedId = saveSlotFindSelected()->id;

    for (s32 slot = 0; slot < SAVE_LIST_SLOT_COUNT; slot++) {
        SaveSlotEntry *entry = FUN_00187068(slot);
        if (FUN_00187168(entry) != 0) {
            SaveRowSprite *sprite = &work->rows[row];
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
        SaveRowSprite *sprite = &work->rows[row];
        s32 x = vec2GetXInt(sprite);
        s32 y = vec2GetYInt(sprite);
        FUN_002ca878(work, x, y + footerOffset + rowHeight + rowOffset + 1);
        row++;
    }

    SaveRowSprite *sprite = &work->rows[row];
    s32 x = vec2GetXInt(sprite);
    s32 y = vec2GetYInt(sprite);
    FUN_0037eb64(work, x, y);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
}

} /* extern "C" */
