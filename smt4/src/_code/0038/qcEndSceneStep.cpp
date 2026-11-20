#include "common.h"

extern "C" {

typedef struct Handle003849d0 {
    /* 0x00 */ u32 id;
} Handle003849d0;

typedef struct Scene003849d0 {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 state;
    /* 0x008 */ s32 step;
    /* 0x00c */ u8 unk00c[0x5b8];
    /* 0x5c4 */ Handle003849d0 *handle;
} Scene003849d0;

s32 scrScriptProcessStartMappedEntry(Scene003849d0 *scene, const char *name);
void buttonHelpSetPanelState(s32 value);
s32 buttonHelpResetSlots(void);
s32 msgWindowReset(void);
void slotSetRequest(s32 a, s32 b, s32 c);
void buttonHelpSetPreset(s32 preset);
s32 inputQueryButtonState(s32 value, s32 mode);
s32 scrRunOpcodesStub(u32 handle);
s32 buttonHelpStateIsNot3(void);
s32 screenFadeIsBusy(void);
s32 messageMainIsWindowActive(void);

/* "qc_end" scene step: step 0 starts it, step 1 waits for the handle to report 2 then fades, step 2 returns to state 0x10 once idle. */
void qcEndSceneStep(Scene003849d0 *scene)
{
    s32 step = scene->step;

    if (step == 0) {
        scrScriptProcessStartMappedEntry(scene, "qc_end");
        buttonHelpSetPreset(0x9e);
        scene->step = scene->step + 1;
        return;
    }
    if (step != 1) {
        if (step == 2 && screenFadeIsBusy() == 0 && buttonHelpStateIsNot3() != 0) {
            scene->state = 0x10;
            scene->step = 0;
        }
    } else {
        buttonHelpSetPanelState(0);
        if (scrRunOpcodesStub(scene->handle->id) == 2) {
            slotSetRequest(0, 10, 0xff);
            slotSetRequest(1, 10, 0xff);
            buttonHelpResetSlots();
            scene->step = scene->step + 1;
            return;
        }
        if (inputQueryButtonState(1, 1) != 0 && messageMainIsWindowActive() != 0) {
            msgWindowReset();
        }
    }
}

} /* extern "C" */
