/* NON_MATCHING: control flow matches; remaining are register choices (the held-frame increment in r1, the 2/0x14A constants in sl/fp swapped). */
#include "status/StatusCamera.h"
#include "ui/UiControl.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
s32 uiPointerHitsRect(s32 x, s32 y, s32 width, s32 height, s32 mode);
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
void soundPlaySeUnpanned(u32 sound);
void buttonHelpSetPreset(s32 preset);
s32 FUN_0026f024(void *sprite, u32 id, s32 first, s32 second, u32 frame, s32 enabled);
void statusCameraHandleControls(StatusCameraWork *camera);
void FUN_002ebfbc(void *transition);

u32 FUN_00220d58(void *base)
{
    struct InputView {
        u32 job;
        StatusCameraWork *camera;
        u8 unk08[0x10];
        u32 sprite;
        u8 unk1C[4];
        u32 frame;
        u8 visible, unk25[0x53];
        u8 transition[0x98];
        u32 nextMode, unk114, heldFrames;
        s8 unk11C[0xB], showControls;
    };
    typedef char InputViewOffsetCheck[offsetof(InputView, nextMode) == 0x110 &&
        offsetof(InputView, showControls) == 0x127 ? 1 : -1];
    InputView *work = static_cast<InputView *>(base);
    u32 result = 0;
    bool shortTap = false;
    const TextureTableEntryIV *button = asdTMTexTableEntryAt(0x39, 0x97);
    if (uiPointerHitsRect(button->x, button->y, button->placement->width, button->placement->height, 0)) {
        ++work->heldFrames;
    } else {
        if (uiPointerHitsRect(button->x, button->y, button->placement->width, button->placement->height, 3) &&
            work->heldFrames - 1 <= 14) /* released after 1 to 15 frames */
            shortTap = true;
        work->heldFrames = 0;
    }
    if (padIsButtonPressed(0) || buttonHelpHasEnabledEntryForId(1)) {
        work->nextMode = 2;
        soundPlaySeUnpanned(0x100016D);
        buttonHelpSetPreset(0xE2);
        result = 2;
    } else if (padIsButtonPressed(1) || buttonHelpHasEnabledEntryForId(2)) {
        work->nextMode = 8;
        soundPlaySeUnpanned(0x100016E);
        result = 2;
    } else if (padIsButtonRepeat(10) || buttonHelpHasEnabledEntryForId(4)) {
        if (work->showControls != 0)
            work->showControls = 0;
        else
            work->showControls = 1;
        work->frame = 0;
        work->sprite = 0x14A;
        soundPlaySeUnpanned(0x100016D);
    } else if (shortTap) {
        soundPlaySeUnpanned(0x100016D);
        result = 2;
        work->nextMode = 2;
    }
    if (work->showControls) {
        if (FUN_0026f024(&work->sprite, 0x14A, 0, 4, work->frame, 1))
            work->visible = 1;
        ++work->frame;
    }
    statusCameraHandleControls(work->camera);
    FUN_002ebfbc(work->transition);
    return result;
}
}
