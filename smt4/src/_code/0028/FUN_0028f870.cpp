#include "camp/CampState.h"
#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "code/Code0029.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 ifTouchGetSelectionModeForRegion(s32 region);
s32 FUN_0029ee54(u32 list);
s32 resourceRunOperationIfUnblocked(u32 list);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Draws the scroll bar of a camp list: arrows, track and the thumb scaled to the visible share. */
void FUN_0028f870(u32 list, s32 x, s32 y, s32 wide)
{
    CampState *camp = g_camp;
    s32 previousHeld = ifTouchGetSelectionModeForRegion(camp->touch.scrollRegions[1]);
    s32 nextHeld = ifTouchGetSelectionModeForRegion(camp->touch.scrollRegions[2]);
    s32 thumbHeld = ifTouchGetSelectionModeForRegion(camp->touch.scrollRegions[0]);
    s32 previousSprite;
    s32 nextSprite;
    if (wide != 0) {
        if (FUN_0029ee54(list) <= 11) {
            return;
        }
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x41c, x, y, 0x6f);
        previousSprite = 0x418;
        if (previousHeld != 0) {
            previousSprite = 0x41a;
        }
        nextSprite = 0x419;
        if (nextHeld != 0) {
            nextSprite = 0x41b;
        }
    } else {
        if (FUN_0029ee54(list) <= 9) {
            return;
        }
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x423, x, y, 0x6f);
        previousSprite = 0x41f;
        if (previousHeld != 0) {
            previousSprite = 0x421;
        }
        nextSprite = 0x420;
        if (nextHeld != 0) {
            nextSprite = 0x422;
        }
    }
    texDrawTableEntryAtStoredOrigin(2, 0x1d, previousSprite, x, y, 0x6f);
    texDrawTableEntryAtStoredOrigin(2, 0x1d, nextSprite, x, y, 0x6f);
    TextureTableEntryIV *track;
    if (wide != 0) {
        track = asdTMTexTableEntryAt(0x1d, 0x41d);
    } else {
        track = asdTMTexTableEntryAt(0x1d, 0x424);
    }
    s32 thumbHeight = ((track->placement->height << 12) / FUN_0029ee54(list)) * (s32)FUN_0029d644((const void *)(list)) >> 12;
    if (thumbHeight < 1) {
        thumbHeight = 1;
    }
    s32 thumbOffset = ((track->placement->height << 12) / FUN_0029ee54(list)) * resourceRunOperationIfUnblocked(list) >> 12;
    renderStackSet(&g_titleScene->scissor, 3);
    gxSetMirroredClippedScissor(x + track->x, track->y + y + thumbOffset, track->placement->width, thumbHeight, 1);
    s32 thumbSprite;
    if (wide != 0) {
        thumbSprite = 0x41d;
        if (thumbHeld != 0) {
            thumbSprite = 0x41e;
        }
    } else {
        thumbSprite = 0x424;
        if (thumbHeld != 0) {
            thumbSprite = 0x425;
        }
    }
    texDrawTableEntryAtStoredOrigin(2, 0x1d, thumbSprite, x, y, 0x74);
    renderStackSet(&g_titleScene->scissor, 0);
}

} /* extern "C" */
