/* NON_MATCHING: typed input/touch results recovered; control-flow and register allocation differ. */
#include "status/StatusCamera.h"
#include "shard/S1ListPanel.h"
#include "shard/buttonHelpHasEnabledEntryForId.h"
extern "C" {
const SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 sprite);
s32 uiPointerHitsRect(s32 x, s32 y, s32 width, s32 height, s32 mode);
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
void FUN_002bf810(u32 sound);
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
        u8 unk11C[0xB], showControls;
    };
    typedef char InputViewOffsetCheck[offsetof(InputView, nextMode) == 0x110 &&
        offsetof(InputView, showControls) == 0x127 ? 1 : -1];
    InputView *work = static_cast<InputView *>(base);
    u32 result = 0;
    bool shortTap = false;
    const SpriteInfo *button = asdTMTexTableEntryAt(0x39, 0x97);
    if (uiPointerHitsRect(button->x, button->y, button->size[0], button->size[1], 0)) {
        ++work->heldFrames;
    } else {
        if (uiPointerHitsRect(button->x, button->y, button->size[0], button->size[1], 3) &&
            work->heldFrames - 1u < 15)
            shortTap = true;
        work->heldFrames = 0;
    }
    if (padIsButtonPressed(0) || buttonHelpHasEnabledEntryForId(1)) {
        work->nextMode = 2;
        FUN_002bf810(0x100016D);
        buttonHelpSetPreset(0xE2);
        result = 2;
    } else if (padIsButtonPressed(1) || buttonHelpHasEnabledEntryForId(2)) {
        work->nextMode = 8;
        FUN_002bf810(0x100016E);
        result = 2;
    } else if (padIsButtonRepeat(10) || buttonHelpHasEnabledEntryForId(4)) {
        work->showControls = work->showControls == 0;
        work->frame = 0;
        work->sprite = 0x14A;
        FUN_002bf810(0x100016D);
    } else if (shortTap) {
        FUN_002bf810(0x100016D);
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
