#include "classes/Obj5333c0.h"
#include "script/scrScriptProcess.h"
#include "code/Code0013.h"
#include "ui/UiControl.h"
#include "code/Code003c_Smt4a.h"

extern "C" {

void titleSetSlotValueState2(u32 slot, u32 value);

/* Advances the quest scene once its script finishes; the normal path also resets finished slots. */
void scenePartAdvanceState(Obj5333c0 *scene)
{
    enum { SCRIPT_FINISHED = 2, SLOT_FINISHED = 3, SLOT_RESET_FRAMES = 10,
           CONTINUE_SCENE = 3, CONTINUE_FROZEN_SCENE = 16 };

    if (scrRunOpcodesStub(*scene->script) == SCRIPT_FINISHED) {
        if (scene->frozen == 1 || scene->frozen == 2) {
            scene->startState(CONTINUE_FROZEN_SCENE);
        } else {
            scene->startState(CONTINUE_SCENE);
            if (pairedAvailabilityGetState(0) == SLOT_FINISHED) {
                titleSetSlotValueState2(0, SLOT_RESET_FRAMES);
            }
            if (pairedAvailabilityGetState(1) == SLOT_FINISHED) {
                titleSetSlotValueState2(1, SLOT_RESET_FRAMES);
            }
        }
        messageSetMode(0);
        messageMainRequestBanner();
    }
}

} /* extern "C" */
