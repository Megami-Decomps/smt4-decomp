/* NON_MATCHING: 12 lines; the second render-stack set swaps r1/r2 for the previous state and entry address. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "camp/Unite/UniteWork.h"
#include "shard/TextureDrawCall.h"
#include "shard/Shard0032.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* A pair of screen coordinates (uniteDrawSkillInheritancePanel passes one by value). */
struct ScreenOffset {
    s32 x;
    s32 y;
};

extern "C" {
void FUN_003b6354(f32 scale, UniteWorkA *work, s32 row, s32 mode, s32 selectedRow, s32 offsetX, s32 offsetY, s32 *x,
                  s32 *y, s8 *shifted);
void skillScreenDrawSlotRow(UniteWorkA *work, s32 index, SlotRecordA *record, s32 count, s32 x, s32 y, f32 effect);
void skillScreenDrawSelectedSlotRow(UniteWorkA *work, SlotRecordA *record, s32 x, s32 y, f32 effect);
void efctSetSpeed(f32 speed);

/* Draws the eight slot icons of the skill inheritance screen: locked slots are blanked, unlocked ones get
   their frame, cursor flash and skill row, then the highlighted slot row is drawn over them. */
void skillScreenDrawSlots(UniteWorkA *work, SlotRecordA *record, s32 drawSelected, s32 mode, s32 selectedRow, f32 scale,
                  ScreenOffset offset)
{
    s8 shifted = 0;
    s32 unlocked = getUnlockedSlotCount(record);
    s32 x = offset.x;
    s32 y = offset.y;
    for (s32 slot = 0; slot < 8; slot++) {
        x = offset.x;
        y = offset.y;
        const TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1a, slot + 0x17d);
        if (slot >= unlocked) {
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x229, icon->x + x, icon->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x16f, icon->x + x, icon->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x170, icon->x + x, icon->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x26f, icon->x + x, icon->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x270, icon->x + x, icon->y + y, 0x65);
        } else {
            FUN_003b6354(scale, work, slot, mode, selectedRow, icon->x, icon->y, &x, &y, &shifted);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x16f, icon->x + x, icon->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x170, icon->x + x, icon->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x26f, icon->x + x, icon->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x270, icon->x + x, icon->y + y, 0x65);
            skillScreenDrawSlotRow(work, slot, record, selectedRow, icon->x + x, icon->y + y, scale);
            if (mode == 1 && (s32)work->transition.frame >= 5) {
                s32 candidateRow = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList) +
                    listCursorGetRowIfUnblocked(&work->inheritanceA.skillList);
                if (work->inheritanceA.slots[slot] == work->inheritanceA.skills[candidateRow]) {
                    efctSetSpeed(vec2GetSpeed(&work->sprites.highlight) * scale);
                    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
                    texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x173, icon->x + x, icon->y + y, 0x65);
                    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
                }
            }
            efctSetSpeed(scale);
        }
    }
    if (work->inheritanceA.accepted == 0 && drawSelected != 0) {
        skillScreenDrawSelectedSlotRow(work, record, x, y, scale);
    }
}

} /* extern "C" */
