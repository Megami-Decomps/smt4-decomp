/* NON_MATCHING: 160 lines (134 by shape), complete: retail's 615 rows, frame size and case order. What differs:
 * - retail keeps the save block's pointer at sp+32 (the confirm button's points share the slot), the build at sp+40;
 * - in the confirm button's "list open" arm retail places the "no map pending" block and the refresh after the
 *   whole "list closed" arm (20 rows moved);
 * - a few scratch registers: the feedback toggle reuses the loaded value's register (`movne r1, #0; moveq r1, #1`),
 *   and the zoom buttons finish the flag update before they load the 1 they store. */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/NavigationFadeWork.h"
#include "map/lmapMain.h"
#include "map/mapDepart.h"
#include "gfx/RenderStateStack.h"

extern "C" {
NavigationPoint *sub68OwnerGetBlock60(void *scene);
void naviMainSetValuePair(void *scene, const NavigationPoint *value); // declcheck: local (takes the scene and the work's NavigationPoint, as in the sibling naviMapHandleInput)
u32 naviMainGetRequestedMap(void *scene);
u32 naviGetActiveStateValue(void *scene); // declcheck: local (its header also declares the other naviMainSetValuePair form)
void naviRequestSelectedMap(void);
s32 listGetAdjacentEntryId(NavigationFadeWork *work, s32 direction);
void naviSelectRequestedCategory(NavigationFadeWork *work, u32 category);
void FUN_003a35a4(void);
u32 FUN_004d040c(s32 x, s32 y, u32 width, u32 height);
u8 FUN_00325064(void);
void buttonHelpTeardownSlots(void);
void sysPlaySe(u32 id);
}

/* The touch buttons of the navigation map's lower screen, in the order of their rectangles (file 0x13, 0xFB5 on). */
enum {
    kButtonNext = 0,        /* the next category; the feedback toggle while the list is closed */
    kButtonZoomIn = 1,      /* zoom in; the feedback mode while the list is closed */
    kButtonConfirm = 2,
    kButtonZoomOut = 3,
    kButtonPrevious = 4,    /* the previous category; cancel while the list is closed */
    kButtonCancel = 5,
    kButtonCount = 6
};

enum {
    kFlagTouchHeld = 0x2000000, /* a button took the touch: nothing else reacts until it is released */
    kFlagDragMask = 0x30000,
    kLayoutNear = 6,
    kLayoutFar = 12,
    kHighlightFrames = 5
};

extern "C" {

/* The navigation map's touch buttons: finds the button under the touch and does what the pad button of
 * naviMapHandleInput does (confirm, cancel, zoom, the category before or after), with the button's highlight
 * timer. Returns 1 when a button took the touch. */
u32 naviMapHandleTouchButtons(NavigationFadeWork *work)
{
    MapSaveBlockA *save = gameFlagsGetBlock();
    s32 i;
    s32 x;
    s32 y;
    u32 width;
    u32 height;

    if ((work->interpolation.flags & kFlagTouchHeld) != 0) {
        if (setFullScreenRect() == 0 || g_gameState.inputBlocked != 0) {
            work->interpolation.flags &= ~kFlagTouchHeld;
        }
    }

    for (i = 0; i < kButtonCount; i++) {
        if (i == kButtonCancel) {
            if (FUN_00325064() != 0) {
                rectRecRead(0x13, 0x123E, &x, &y, &width, &height);
            } else {
                rectRecRead(0x13, 0x123C, &x, &y, &width, &height);
            }
        } else {
            rectRecRead(0x13, 0xFB5 + i, &x, &y, &width, &height);
        }
        if (work->interpolation.state.active == 0 && i == kButtonPrevious) {
            /* The cancel button in the previous-category button's place. */
            if (FUN_00325064() != 0) {
                rectRecRead(0x13, 0x1237, &x, &y, &width, &height);
            } else {
                rectRecRead(0x13, 0x1235, &x, &y, &width, &height);
            }
        }

        /* While a map change is pending the buttons it does not need are off. */
        if (work->interpolation.state.active != 0) {
            if (g_gameState.naviMapPending != 0 && FUN_00384cf4() == 0) {
                if (i == kButtonZoomIn || i == kButtonNext || i == kButtonZoomOut || i == kButtonPrevious) {
                    continue;
                }
            }
        } else if (g_gameState.naviMapPending != 0 && FUN_00384cf4() == 0) {
            if (i == kButtonZoomIn || i == kButtonNext) {
                continue;
            }
        }

        if (FUN_004d040c(x, y, width, height) == 0 || g_gameState.inputBlocked != 0 || g_gameState.paused == 0) {
            continue;
        }

        switch (i) {
        case kButtonNext:
            if (work->interpolation.state.active != 0) {
                if (listGetAdjacentEntryId(work, 1) != 0) {
                    sysPlayVoice(0x100020D);
                    work->interpolation.flags |= kFlagTouchHeld;
                    s32 entry = listGetAdjacentEntryId(work, 1);
                    if (entry != 0) {
                        work->interpolation.drag.selection = entry;
                    }
                    work->interpolation.drag.nextTimer = kHighlightFrames;
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                }
            } else if (save->naviFeedbackMode != 0) {
                sysPlayVoice(0x100020E);
                save->unk1510 = save->unk1510 == 0;
                work->interpolation.drag.nextTimer = kHighlightFrames;
                work->interpolation.drag.zoomInTimer = 0;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
            }
            break;
        case kButtonZoomIn:
            if (work->interpolation.state.active == 0) {
                work->interpolation.flags |= kFlagTouchHeld;
                if (FUN_004d040c(x, y, width, height) != 0) {
                    /* The button help's feedback: off, sound, sound and help. */
                    sysPlayVoice(0x100020E);
                    save->naviFeedbackMode++;
                    if (save->naviFeedbackMode > 2) {
                        save->naviFeedbackMode = 0;
                    }
                    if (save->naviFeedbackMode == 0) {
                        buttonHelpTeardownSlots();
                        sysPlaySe(0x10A);
                    } else if (save->naviFeedbackMode == 1) {
                        buttonHelpTeardownSlots();
                        sysPlaySe(0xF6);
                    }
                    work->interpolation.drag.zoomOutTimer = kHighlightFrames;
                    work->interpolation.drag.zoomInTimer = 0;
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                }
            } else if (save->layout == kLayoutNear) {
                sysPlayVoice(0x100020E);
                work->interpolation.flags = (work->interpolation.flags & ~kFlagDragMask) | kFlagTouchHeld;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x *= 2.0f;
                point.y *= 2.0f;
                naviMainSetValuePair(work->scene, &point);
                save->layout = kLayoutFar;
                work->interpolation.drag.zoomOutTimer = kHighlightFrames;
                work->interpolation.drag.zoomInTimer = 0;
            } else {
                continue;
            }
            break;
        case kButtonZoomOut: {
            if (save->layout == kLayoutNear) {
                continue;
            }
            sysPlayVoice(0x100020E);
            work->interpolation.flags = (work->interpolation.flags & ~kFlagDragMask) | kFlagTouchHeld;
            work->flag7B90 = 1;
            work->flag7B91 = 1;
            NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
            point.x *= 0.5f;
            point.y *= 0.5f;
            naviMainSetValuePair(work->scene, &point);
            save->layout = kLayoutNear;
            work->interpolation.drag.zoomInTimer = kHighlightFrames;
            work->interpolation.drag.zoomOutTimer = 0;
            break;
        }
        case kButtonConfirm:
            if (work->interpolation.state.active != 0) {
                work->interpolation.flags |= kFlagTouchHeld;
                if (FUN_004d040c(x, y, width, height) != 0) {
                    sysPlayVoice(0x1000229);
                    if (g_gameState.naviMapPending != 0) {
                        if (naviMainGetRequestedMap(work->scene) == naviGetActiveStateValue(work->scene)) {
                            work->interpolation.flags &= ~kFlagDragMask;
                            NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                            point.x = 0.0f;
                            point.y = 0.0f;
                            naviMainSetValuePair(work->scene, &point);
                            work->interpolation.drag.confirmTimer = kHighlightFrames;
                            work->interpolation.drag.selection = work->cursorMode;
                            work->flag7B90 = 1;
                            work->flag7B91 = 1;
                        }
                        work->interpolation.drag.confirmTimer = kHighlightFrames;
                        naviRequestSelectedMap();
                    } else {
                        work->interpolation.flags &= ~kFlagDragMask;
                        NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                        point.x = 0.0f;
                        point.y = 0.0f;
                        naviMainSetValuePair(work->scene, &point);
                        work->interpolation.drag.confirmTimer = kHighlightFrames;
                        work->interpolation.drag.selection = work->cursorMode;
                        work->flag7B90 = 1;
                        work->flag7B91 = 1;
                    }
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                }
            } else {
                work->interpolation.flags |= kFlagTouchHeld;
                if (FUN_004d040c(x, y, width, height) != 0) {
                    sysPlayVoice(0x1000229);
                    if (g_gameState.naviMapPending != 0) {
                        if (naviMainGetRequestedMap(work->scene) == naviGetActiveStateValue(work->scene)) {
                            work->interpolation.flags &= ~kFlagDragMask;
                            NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                            point.x = 0.0f;
                            point.y = 0.0f;
                            naviMainSetValuePair(work->scene, &point);
                            work->interpolation.drag.selection = work->cursorMode;
                            work->flag7B90 = 1;
                            work->flag7B91 = 1;
                        }
                        work->interpolation.drag.confirmTimer = kHighlightFrames;
                        naviRequestSelectedMap();
                    } else {
                        work->interpolation.flags &= ~kFlagDragMask;
                        NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                        point.x = 0.0f;
                        point.y = 0.0f;
                        naviMainSetValuePair(work->scene, &point);
                        work->interpolation.drag.confirmTimer = kHighlightFrames;
                        work->interpolation.drag.selection = work->cursorMode;
                        work->flag7B90 = 1;
                        work->flag7B91 = 1;
                    }
                }
            }
            break;
        case kButtonPrevious:
            if (work->interpolation.state.active != 0) {
                if (listGetAdjacentEntryId(work, -1) != 0) {
                    sysPlayVoice(0x100020D);
                    work->interpolation.flags |= kFlagTouchHeld;
                    s32 entry = listGetAdjacentEntryId(work, -1);
                    if (entry != 0) {
                        work->interpolation.drag.selection = entry;
                    }
                    work->interpolation.drag.previousTimer = kHighlightFrames;
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                }
            } else {
                work->interpolation.flags |= kFlagTouchHeld;
                if (FUN_004d040c(x, y, width, height) != 0) {
                    sysPlayVoice(0x1000229);
                    if (g_gameState.naviMapPending != 0) {
                        work->interpolation.flags &= ~kFlagDragMask;
                        naviSelectRequestedCategory(work, FUN_00492c84(work->scene));
                        NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                        point.x = 0.0f;
                        point.y = 0.0f;
                        naviMainSetValuePair(work->scene, &point);
                        work->flag7B90 = 1;
                        work->flag7B91 = 1;
                    } else {
                        if (save->naviRefresh != 0) {
                            save->naviRefresh = 0;
                        }
                        FUN_003a35a4();
                    }
                    work->interpolation.drag.cancelTimer = kHighlightFrames;
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                }
            }
            break;
        case kButtonCancel:
            work->interpolation.flags |= kFlagTouchHeld;
            if (FUN_004d040c(x, y, width, height) != 0) {
                sysPlayVoice(0x1000229);
                if (g_gameState.naviMapPending != 0) {
                    work->interpolation.flags &= ~kFlagDragMask;
                    naviSelectRequestedCategory(work, FUN_00492c84(work->scene));
                    NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                    point.x = 0.0f;
                    point.y = 0.0f;
                    naviMainSetValuePair(work->scene, &point);
                    work->flag7B90 = 1;
                    work->flag7B91 = 1;
                } else {
                    if (save->naviRefresh != 0) {
                        save->naviRefresh = 0;
                    }
                    NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                    point.x = 0.0f;
                    point.y = 0.0f;
                    naviMainSetValuePair(work->scene, &point);
                    work->interpolation.drag.valueOrigin.x = point.x;
                    work->interpolation.drag.valueOrigin.y = point.y;
                    FUN_003a35a4();
                }
                work->flag7B90 = 1;
                work->flag7B91 = 1;
                work->interpolation.drag.cancelTimer = kHighlightFrames;
            }
            break;
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
