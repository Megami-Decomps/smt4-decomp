/* NON_MATCHING: twin of smt4 FUN_0033c1bc; everything up to the setDrawState inlines matches retail, which keeps the ring pointer through a temporary (ldr r1,[g_renderCtx]; add r4,r1,...) and loads the dirty flag / flush callback into r2/r1 instead of r0. */
#include "camp/RenderCtxA.h"
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "shard/W6_W6Match6_PartyPanel.h"

struct UnitStatus {
    u8 unk00[0x60];
    u16 ailments;           // 0x60
};

extern "C" {


UnitStatus* btlMainGetUnk14(void);
void effectDispatchSelector(s16 icon, s32 x, s32 y, s32 kind, f32 alpha);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 w, s32 h, s32 arg);

static void setDrawState(s32 value)
{
    renderStackSet(g_renderCtx->stacks + RENDER_STACK_SCISSOR, value);
}

// Draws the status ailment icons of a member; with two or more it also draws the
// icon that follows the highlighted one, offset by the scroll position.
void partyPanelWidgetDrawAilments(PartyPanelWidget* strip, s32 x, s32 y)
{
    u32 slot = 0x12;
    if (strip->largeCard != 0) slot = 0x50;
    TextureTableEntryIV* layout = asdTMTexTableEntryAt(0x11, slot);
    s32 count, n, current, following;
    u32 ailments;
    following = current = n = count = ailments = 0;
    if (strip->slot == -1) {
        ailments = gameGetPlayerData()->ailments;
    } else if (strip->slot == -2) {
        UnitStatus* unit = btlMainGetUnk14();
        if (unit != NULL) ailments = unit->ailments;
    } else if (strip->slot >= 0) {
        ailments = gameGetSlotRecord(strip->slot)->ailments;
    }
    for (s32 bit = 1; bit <= 13; bit++) {
        if (bit != 2 && (ailments & (1 << bit)) != 0) {
            if (strip->ailmentCursor == count) current = bit;
            count++;
        }
    }
    if (count == 1) {
        effectDispatchSelector(current, layout->x + x, layout->y + y, 0x7e, 1.0f);
        return;
    }
    if (count > 1) {
        if (strip->ailmentScroll < 0x14) {
            effectDispatchSelector(current, layout->x + x, layout->y + y, 0x7e, 1.0f);
            return;
        }
        for (s32 bit = 1; bit <= 13; bit++) {
            if (bit != 2 && (ailments & (1 << bit)) != 0) {
                if ((strip->ailmentCursor + 1) % count == n) following = bit;
                n++;
            }
        }
        setDrawState(3);
        gxSetMirroredClippedScissor(strip->origin.x + layout->x, strip->origin.y + layout->y, layout->placement->width, layout->placement->height, 1);
        s32 shift = (strip->ailmentScroll - 0x14) * -3;
        effectDispatchSelector(current, layout->x + shift + x, layout->y + y, 0x7e, 1.0f);
        effectDispatchSelector(following, layout->x + x + shift + 0xd, layout->y + y, 0x7e, 1.0f);
        setDrawState(0);
    }
}

} /* extern "C" */
