/* NON_MATCHING: 282 lines, about 40 once stack offsets are ignored (589 rows each). Retail's frame is 52 bytes where built needs 60: retail keeps every temporary point in one slot at sp+0 (shared with the outgoing-argument words), the first and last scroll values in one slot, and gives the stick, touch and rectangle values their own slots; built keeps two point slots and two value slots, so most stack offsets differ and the rectangle is reloaded with ldm. Retail also reads alternateNaviMap through the g_gameState+0x400 base it still holds (it keeps the compared map in r8, built in r7), stores the drag flag through r1, and finishes the released-touch flag store before loading stillFrames. */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/NavigationFadeWork.h"
#include "map/lmapMain.h"
#include "map/mapDepart.h"
#include "camp/ScriptPanelResources.h"
#include "gfx/RenderStateStack.h"
#include "shard/NaviMain_GetCurrentMap.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"

extern "C" {
u32 padGetNormalizedAnalogStick(f32 *outX, f32 *outY, u32 index);
u32 padButtonIsPressed(u32 button);
s32 inputIsQuestCancelPressed(void);
s32 inputIsQuestMenuPressed(void);
s32 inputConfirmPressed(void);
f32 naviMainGetValue(void *scene);
NavigationPoint *sub68OwnerGetBlock60(void *scene);
void naviMainSetValuePair(void *scene, const NavigationPoint *value); // declcheck: local (takes the scene and the work's NavigationPoint, as in the proven sibling FUN_0048a4c0; the shared header's u32/NaviValuePair form needs a cast at every call)
u32 naviMainGetRequestedMap(void *scene);
u32 naviGetActiveStateValue(void *scene); // declcheck: local (its header also declares the other naviMainSetValuePair form)
void naviRequestSelectedMap(void);
s32 listGetAdjacentEntryId(NavigationFadeWork *work, s32 direction);
void naviSelectRequestedCategory(NavigationFadeWork *work, u32 category);
void FUN_003a35a4(void);
u32 FUN_004d040c(s32 x, s32 y, u32 width, u32 height);
void FUN_004d03c8(s32 *x, s32 *y);
s32 FUN_00167c0c(s32 *x, s32 *y);
}

extern "C" {

/* The navigation map's input step: scrolls with the circle pad, handles the confirm, cancel, zoom,
 * category and menu buttons, then drags the map with the touch screen and lets it slide on after
 * the touch is released. */
void naviMapHandleInput(NavigationFadeWork *work)
{
    MapSaveBlockA *save = gameFlagsGetBlock();

    if (g_gameState.paused) {
        f32 stickX;
        f32 stickY;
        padGetNormalizedAnalogStick(&stickX, &stickY, 0);
        f32 scale = naviMainGetValue(work->scene);
        NavigationPoint value = *sub68OwnerGetBlock60(work->scene);
        stickX *= 13.0f;
        stickY *= 13.0f;
        stickX = -stickX;
        stickY = -stickY;
        value.x = stickX / scale + value.x;
        value.y = value.y - stickY / scale;
        naviMainSetValuePair(work->scene, &value);
        work->flag7B91 = 1;

        if (inputIsQuestConfirmPressed()) {
            sysPlayVoice(0x1000229);
            if (g_gameState.naviMapPending) {
                if (naviMainGetRequestedMap(work->scene) == naviGetActiveStateValue(work->scene)) {
                    NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                    point.x = 0.0f;
                    point.y = 0.0f;
                    naviMainSetValuePair(work->scene, &point);
                    work->interpolation.drag.selection = work->cursorMode;
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                }
                naviRequestSelectedMap();
            } else {
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x = 0.0f;
                point.y = 0.0f;
                naviMainSetValuePair(work->scene, &point);
                work->interpolation.drag.selection = work->cursorMode;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
            }
            work->interpolation.drag.cancelTimer = 0;
            work->interpolation.drag.confirmTimer = 5;
        } else if (inputIsQuestCancelPressed()) {
            sysPlayVoice(0x1000229);
            if (g_gameState.naviMapPending) {
                work->interpolation.flags &= ~0x30000;
                naviSelectRequestedCategory(work, FUN_00492c84(work->scene));
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x = 0.0f;
                point.y = 0.0f;
                naviMainSetValuePair(work->scene, &point);
            } else {
                if (save->naviRefresh != 0)
                    save->naviRefresh = 0;
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x = 0.0f;
                point.y = 0.0f;
                naviMainSetValuePair(work->scene, &point);
                work->interpolation.drag.valueOrigin.x = point.x;
                work->interpolation.drag.valueOrigin.y = point.y;
                FUN_003a35a4();
            }
            work->interpolation.drag.confirmTimer = 0;
            work->interpolation.drag.cancelTimer = 5;
            work->flag7B90 = 1;
            work->flag7B91 = 1;
        } else if (inputConfirmPressed()) {
            if (g_gameState.naviMapPending && !FUN_00384cf4())
                return;
            sysPlayVoice(0x100020e);
            if (save->layout == 6) {
                work->interpolation.flags = (work->interpolation.flags & ~0x30000) | 0x2000000;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x *= 2.0f;
                point.y *= 2.0f;
                naviMainSetValuePair(work->scene, &point);
                save->layout = 12;
                work->interpolation.drag.zoomOutTimer = 5;
                work->interpolation.drag.zoomInTimer = 0;
            } else if (save->layout == 12) {
                work->interpolation.flags = (work->interpolation.flags & ~0x30000) | 0x2000000;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x *= 0.5f;
                point.y *= 0.5f;
                naviMainSetValuePair(work->scene, &point);
                save->layout = 6;
                work->interpolation.drag.zoomOutTimer = 0;
                work->interpolation.drag.zoomInTimer = 5;
            }
        } else if (padButtonIsPressed(5)) {
            if (g_gameState.naviMapPending && !FUN_00384cf4())
                return;
            if (listGetAdjacentEntryId(work, 1)) {
                sysPlayVoice(0x100020d);
                work->interpolation.flags |= 0x2000000;
                s32 entry = listGetAdjacentEntryId(work, 1);
                if (entry != 0)
                    work->interpolation.drag.selection = entry;
                work->interpolation.drag.nextTimer = 5;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
            }
        } else if (padButtonIsPressed(6)) {
            if (g_gameState.naviMapPending && !FUN_00384cf4())
                return;
            if (listGetAdjacentEntryId(work, -1)) {
                work->interpolation.flags |= 0x2000000;
                sysPlayVoice(0x100020d);
                s32 entry = listGetAdjacentEntryId(work, -1);
                if (entry != 0)
                    work->interpolation.drag.selection = entry;
                work->interpolation.drag.previousTimer = 5;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
            }
        } else if (inputIsQuestMenuPressed()) {
            sysPlayVoice(0x100020f);
            if (g_gameState.naviMapPending &&
                naviGetActiveStateValue(work->scene) != NaviMain_GetCurrentMap((int)work->scene) &&
                !g_gameState.alternateNaviMap) {
                naviRequestSelectedMap();
                for (s32 i = 0; i < 6; i++)
                    uiSpriteSetKeyframe(&work->sprites[i], 7, 0);
                work->mapChangeRequested = 1;
            } else {
                if (naviMainGetRequestedMap(work->scene) == naviGetActiveStateValue(work->scene)) {
                    NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                    point.x = 0.0f;
                    point.y = 0.0f;
                    naviMainSetValuePair(work->scene, &point);
                    work->interpolation.drag.selection = work->cursorMode;
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                }
                if (naviGetActiveStateValue(work->scene) == NaviMain_GetCurrentMap((int)work->scene))
                    g_gameState.naviMapPending = 0;
                work->interpolation.progress.step = 14;
                work->interpolation.progress.substep = 0;
                for (s32 i = 0; i < 6; i++)
                    uiSpriteSetKeyframe(&work->sprites[i], 7, 0);
            }
        }
    }

    if (!(work->interpolation.flags & 0x2000000)) {
        s32 x;
        s32 y;
        u32 width;
        u32 height;
        rectRecRead(0x13, 0xfa4, &x, &y, &width, &height);
        if (FUN_004d040c(x, y, width, height) && !g_gameState.inputBlocked) {
            s32 touchX;
            s32 touchY;
            FUN_004d03c8(&touchX, &touchY);
            work->interpolation.flags |= 0x20000;
            work->interpolation.drag.touch.x = (f32)touchX;
            work->interpolation.drag.touch.y = (f32)touchY;
            work->interpolation.drag.previousTouch.x = (f32)touchX;
            work->interpolation.drag.previousTouch.y = (f32)touchY;
            NavigationPoint value = *sub68OwnerGetBlock60(work->scene);
            work->interpolation.drag.touchOrigin.x = (f32)touchX;
            work->interpolation.drag.touchOrigin.y = (f32)touchY;
            work->interpolation.drag.valueOrigin.x = value.x;
            work->interpolation.drag.valueOrigin.y = value.y;
            work->interpolation.drag.velocity.x = 0.0f;
            work->interpolation.drag.velocity.y = 0.0f;
            work->interpolation.drag.stillFrames = 0;
            work->interpolation.drag.heldFrames = 0;
        }
    }

    if (work->interpolation.flags & 0x20000) {
        s32 touchX;
        s32 touchY;
        if (FUN_00167c0c(&touchX, &touchY) && !g_gameState.inputBlocked) {
            f32 scale = naviMainGetValue(work->scene);
            NavigationPoint point;
            point.x = ((f32)touchX - work->interpolation.drag.touchOrigin.x) / scale +
                work->interpolation.drag.valueOrigin.x;
            point.y = ((f32)touchY - work->interpolation.drag.touchOrigin.y) / scale +
                work->interpolation.drag.valueOrigin.y;
            naviMainSetValuePair(work->scene, &point);
            if (work->interpolation.drag.touch.x == (f32)touchX &&
                work->interpolation.drag.touch.y == (f32)touchY) {
                if (work->interpolation.drag.stillFrames < 99)
                    work->interpolation.drag.stillFrames++;
            } else {
                work->interpolation.drag.stillFrames = 0;
                work->interpolation.drag.previousTouch.x = work->interpolation.drag.touch.x;
                work->interpolation.drag.previousTouch.y = work->interpolation.drag.touch.y;
                work->interpolation.drag.touch.x = (f32)touchX;
                work->interpolation.drag.touch.y = (f32)touchY;
            }
            work->flag7B91 = 1;
        } else {
            // Released: keep sliding by the last movement unless the touch had come to rest.
            work->interpolation.flags &= ~0x30000;
            if (work->interpolation.drag.stillFrames > 2) {
                work->interpolation.drag.velocity.x = 0.0f;
                work->interpolation.drag.velocity.y = 0.0f;
            } else {
                work->interpolation.drag.velocity.x =
                    work->interpolation.drag.touch.x - work->interpolation.drag.previousTouch.x;
                work->interpolation.drag.velocity.y =
                    work->interpolation.drag.touch.y - work->interpolation.drag.previousTouch.y;
            }
        }
        if (work->interpolation.flags & 0x20000)
            return;
    }

    if (__fabsf(work->interpolation.drag.velocity.x) <= 0.5f &&
        __fabsf(work->interpolation.drag.velocity.y) <= 0.5f) {
        work->interpolation.drag.velocity.x = 0.0f;
        work->interpolation.drag.velocity.y = 0.0f;
        return;
    }
    work->interpolation.drag.velocity.x *= g_uiTextFontSettings.dragFriction;
    work->interpolation.drag.velocity.y *= g_uiTextFontSettings.dragFriction;
    f32 scale = naviMainGetValue(work->scene);
    NavigationPoint value = *sub68OwnerGetBlock60(work->scene);
    value.x = work->interpolation.drag.velocity.x / scale + value.x;
    value.y = work->interpolation.drag.velocity.y / scale + value.y;
    naviMainSetValuePair(work->scene, &value);
    work->flag7B91 = 1;
}

} /* extern "C" */
