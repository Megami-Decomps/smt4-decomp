#include "util/MathFunctions.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
#include "code/Code002a.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "camp/RenderCtxTitle.h"

/* The fields of the selection panel's work area this draw function reads (IV layout). */
struct SelectionPanelWorkIV {
    /* 0x0000 */ u8 unk0000[0xAC];
    /* 0x00AC */ u8 fadeObject[0x20];     /* vec2 object whose speed is the fade (vec2GetSpeed reads +0x20) */
    /* 0x00CC */ u8 unk00CC[0x12B8 - 0xCC];
    /* 0x12B8 */ u8 position[0x20];       /* vec2 object: draw position and opacity (speed) */
    /* 0x12D8 */ u8 unk12D8[0x305C - 0x12D8];
    /* 0x305C */ s32 selected;            /* highlighted entry; the panel draws while it is 3 or less */
    /* 0x3060 */ u8 unk3060[0x3084 - 0x3060];
    /* 0x3084 */ s8 hidden;
    /* 0x3085 */ u8 unk3085[0x33A8 - 0x3085];
    /* 0x33A8 */ u8 slotObject[0x345C - 0x33A8];
    /* 0x345C */ u8 slotShown[4];         /* per-slot draw flags */
};
typedef char SelectionPanelWorkIVOffsetsCheck[
    offsetof(SelectionPanelWorkIV, fadeObject) == 0xAC &&
    offsetof(SelectionPanelWorkIV, position) == 0x12B8 &&
    offsetof(SelectionPanelWorkIV, selected) == 0x305C &&
    offsetof(SelectionPanelWorkIV, hidden) == 0x3084 &&
    offsetof(SelectionPanelWorkIV, slotObject) == 0x33A8 &&
    offsetof(SelectionPanelWorkIV, slotShown) == 0x345C ? 1 : -1];

extern "C" {

void efctSetSpeed(float speed);
f32 vec2GetSpeed(const void *position);
s32 vec2GetYInt(const void *object);
s32 objectPartRunUnlessLocked(void *object);


/* Draws the selection panel's frame, then either every shown slot's marker or only the chosen slot's. */
void selectionPanelDrawMarkers(SelectionPanelWorkIV *work, int drawAll)
{
    if (work->hidden == 0 && work->selected <= 3) {
        s32 baseX = vec2GetXInt(work->position);
        s32 baseY = vec2GetYInt(work->position);
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x15, work->selected + 0x5a);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, 0x15, 0x56, frame->x + baseX, frame->y + baseY, 0x29);
        texDrawTableEntryAtStoredOrigin(2, 0x15, 0x57, frame->x + baseX, frame->y + baseY, 0x29);
        texDrawTableEntryAtStoredOrigin(2, 0x15, 0x58, frame->x + baseX, frame->y + baseY, 0x29);
        texDrawTableEntryAtStoredOrigin(2, 0x15, 0x59, frame->x + baseX, frame->y + baseY, 0x29);
        RenderCtx *context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
        efctSetSpeed(vec2GetSpeed(work->fadeObject));
        if (drawAll != 0) {
            s32 slot = 0;
            do {
                if (work->slotShown[slot] != 0) {
                    TextureTableEntryIV *marker = asdTMTexTableEntryAt(0x15, slot + 0x52);
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                    efctSetSpeed(1.0f);
                    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x1cb, marker->x + baseX, marker->y + baseY, 0x2e);
                    efctSetSpeed(vec2GetSpeed(work->fadeObject));
                    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4b, marker->x + baseX, marker->y + baseY, 0x2e);
                    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4a, marker->x + baseX, marker->y + baseY, 0x2e);
                    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4c, marker->x + baseX, marker->y + baseY, 0x2e);
                    texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4d, marker->x + baseX, marker->y + baseY, 0x2e);
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                }
                slot = slot + 1;
            } while (slot < 4);
        } else {
            TextureTableEntryIV *marker = asdTMTexTableEntryAt(0x15, objectPartRunUnlessLocked(work->slotObject) + 0x52);
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
            efctSetSpeed(1.0f);
            texDrawTableEntryAtStoredOrigin(2, 0x15, 0x1cb, marker->x + baseX, marker->y + baseY, 0x2e);
            efctSetSpeed(vec2GetSpeed(work->fadeObject));
            texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4b, marker->x + baseX, marker->y + baseY, 0x2e);
            texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4a, marker->x + baseX, marker->y + baseY, 0x2e);
            texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4c, marker->x + baseX, marker->y + baseY, 0x2e);
            texDrawTableEntryAtStoredOrigin(2, 0x15, 0x4d, marker->x + baseX, marker->y + baseY, 0x2e);
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        }
        efctSetSpeed(1.0f);
    }
}

} /* extern "C" */
