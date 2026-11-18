/* NON_MATCHING: 170 vs 171 rows: same control flow as retail; the shared zero temporary lands in r0 (retail r1, with the member loaded into r0) and the tail's flush-callback registers differ. */
#include "common.h"
#include "ui/UiControl.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
#include "status/StatusStrip.h"

extern "C" {

void gxSetMirroredClippedScissor(s32 x, s32 y, s32 w, s32 h, s32 arg);

static void setDrawState(s32 value)
{
    renderStackSet(&g_titleScene->scissor, value);
}

// Draws the status ailment icons of a member; with two or more it also draws the
// icon that follows the highlighted one, offset by the scroll position.
void statusStripDrawAilments(StatusStrip* strip, s32 x, s32 y)
{
    u32 slot = 0x12;
    if (strip->isPlayerVariant != 0) slot = 0x50;
    TextureTableEntryIV* layout = asdTMTexTableEntryAt(0x19, slot);
    s32 count, n, current, following;
    count = n = current = following = 0;
    u32 ailments;
    if (strip->member < 0) {
        ailments = gameGetPlayerData()->ailments;
    } else {
        ailments = gameGetUnitRecord(strip->member)->ailments;
    }
    for (s32 bit = 1; bit <= 10; bit++) {
        if ((ailments & (1 << bit)) != 0) {
            if (strip->cursor == count) current = bit;
            count++;
        }
    }
    if (count == 1) {
        messageKindForward((s16)current, layout->x + x, layout->y + y, 0x7e);
        return;
    }
    if (count > 1) {
        if (strip->scroll < 0x14) {
            messageKindForward((s16)current, layout->x + x, layout->y + y, 0x7e);
            return;
        }
        for (s32 bit = 1; bit <= 10; bit++) {
            if ((ailments & (1 << bit)) != 0) {
                if ((strip->cursor + 1) % count == n) following = bit;
                n++;
            }
        }
        setDrawState(3);
        gxSetMirroredClippedScissor(strip->originX + layout->x, strip->originY + layout->y, layout->placement->width, layout->placement->height, 1);
        s32 shift = (strip->scroll - 0x14) * -3;
        messageKindForward((s16)current, layout->x + shift + x, layout->y + y, 0x7e);
        messageKindForward((s16)following, layout->x + x + shift + 0xd, layout->y + y, 0x7e);
        setDrawState(0);
    }
}

} /* extern "C" */
