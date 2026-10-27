#include "util/MathFunctions.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
#include "code/Code002a.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The fields of the selection panel's work area this draw function reads. */
struct SelectionPanelWork {
    /* 0x0000 */ u8 unk0000[0xAC];
    /* 0x00AC */ u8 fadeObject[0x20];     /* vec2 object whose speed is the fade (vec2GetSpeed reads +0x20) */
    /* 0x00CC */ u8 unk00CC[0x12B8 - 0xCC];
    /* 0x12B8 */ u8 position[0x20];       /* vec2 object: draw position and opacity (speed) */
    /* 0x12D8 */ u8 unk12D8[0x3890 - 0x12D8];
    /* 0x3890 */ s32 selected;            /* highlighted entry; the panel draws while it is 3 or less */
    /* 0x3894 */ u8 unk3894[0x38B9 - 0x3894];
    /* 0x38B9 */ s8 hidden;
    /* 0x38BA */ u8 unk38BA[0x3BDC - 0x38BA];
    /* 0x3BDC */ u8 slotObject[0x3C84 - 0x3BDC];
    /* 0x3C84 */ u8 slotShown[4];         /* per-slot draw flags */
};
typedef char SelectionPanelWorkOffsetsCheck[
    offsetof(SelectionPanelWork, fadeObject) == 0xAC &&
    offsetof(SelectionPanelWork, position) == 0x12B8 &&
    offsetof(SelectionPanelWork, selected) == 0x3890 &&
    offsetof(SelectionPanelWork, hidden) == 0x38B9 &&
    offsetof(SelectionPanelWork, slotObject) == 0x3BDC &&
    offsetof(SelectionPanelWork, slotShown) == 0x3C84 ? 1 : -1];

extern "C" {

void efctSetSpeed(float speed);
f32 vec2GetSpeed(const void *position);
s32 vec2GetYInt(const void *object);

extern RenderCtxA *g_renderCtx;

/* Draws the selection panel's frame, then either every shown slot's marker or only the chosen slot's. */
void selectionPanelDrawMarkers(SelectionPanelWork *work, int drawAll)
{
    if (work->hidden == 0 && work->selected <= 3) {
        s32 baseX = vec2GetXInt(work->position);
        s32 baseY = vec2GetYInt(work->position);
        const float opacity = vec2GetSpeed(work->position);
        efctSetSpeed(opacity);
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(0xd, work->selected + 0x5a);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        FUN_001835b4(2, 0xd, 0x56, frame->x + baseX, frame->y + baseY, 0x29);
        FUN_001835b4(2, 0xd, 0x57, frame->x + baseX, frame->y + baseY, 0x29);
        FUN_001835b4(2, 0xd, 0x58, frame->x + baseX, frame->y + baseY, 0x29);
        FUN_001835b4(2, 0xd, 0x59, frame->x + baseX, frame->y + baseY, 0x29);
        RenderCtxA *context = g_renderCtx;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
        efctSetSpeed(vec2GetSpeed(work->fadeObject) * opacity);
        if (drawAll != 0) {
            s32 slot = 0;
            do {
                if (work->slotShown[slot] != 0) {
                    TextureTableEntryIV *marker = asdTMTexTableEntryAt(0xd, slot + 0x52);
                    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
                    efctSetSpeed(opacity);
                    FUN_001835b4(2, 0xd, 0x1cb, marker->x + baseX, marker->y + baseY, 0x2e);
                    efctSetSpeed(vec2GetSpeed(work->fadeObject));
                    FUN_001835b4(2, 0xd, 0x4b, marker->x + baseX, marker->y + baseY, 0x2e);
                    FUN_001835b4(2, 0xd, 0x4a, marker->x + baseX, marker->y + baseY, 0x2e);
                    FUN_001835b4(2, 0xd, 0x4c, marker->x + baseX, marker->y + baseY, 0x2e);
                    FUN_001835b4(2, 0xd, 0x4d, marker->x + baseX, marker->y + baseY, 0x2e);
                    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
                }
                slot = slot + 1;
            } while (slot < 4);
        } else {
            s32 chosen = FUN_002a4878(work->slotObject);
            TextureTableEntryIV *marker = asdTMTexTableEntryAt(0xd, chosen + 0x52);
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
            efctSetSpeed(opacity);
            FUN_001835b4(2, 0xd, 0x1cb, marker->x + baseX, marker->y + baseY, 0x2e);
            efctSetSpeed(vec2GetSpeed(work->fadeObject));
            FUN_001835b4(2, 0xd, 0x4b, marker->x + baseX, marker->y + baseY, 0x2e);
            FUN_001835b4(2, 0xd, 0x4a, marker->x + baseX, marker->y + baseY, 0x2e);
            FUN_001835b4(2, 0xd, 0x4c, marker->x + baseX, marker->y + baseY, 0x2e);
            FUN_001835b4(2, 0xd, 0x4d, marker->x + baseX, marker->y + baseY, 0x2e);
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
        }
        efctSetSpeed(1.0f);
    }
}

} /* extern "C" */
