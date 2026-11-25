#include "ui/UiSpriteApi.h"
#include "code/Code002b_Smt4a.h"
#include "script/scrScriptProcess.h"
#include "shop/ShopItemDescription.h"
#include "shard/W6_W6Match3_NameFormStateA.h"

extern "C" {
u32 FUN_00318dc4(void);
u32 messageMainIsIdle(void);
void scrScriptProcessStartEntry(u32 process, u32 entry);
void buttonHelpTeardownSlots(void);

/* Runs the name confirmation script and restores the original name if the player declines. */
void nameFormUpdateConfirmation(NameFormStateA *form)
{
    enum { RESTORE_NAME = 2, CONFIRM_NAME_EXIT = 8, NAME_TARGET_SPECIAL = 4 };

    if (form->scriptStarted == 0) {
        if (messageMainIsIdle() != 0) {
            scrScriptProcessStartEntry((u32)form->script, form->mode == NAME_TARGET_SPECIAL ? 2 : 3);
            form->scriptStarted = 1;
        }
        return;
    }
    if (FUN_00318dc4() != 0) {
        buttonHelpSetPanelState(0);
    }
    if (scrRunOpcodesStub(form->script) == 2) {
        if (messageGetChoiceResult() != 0) {
            if (form->mode != NAME_TARGET_SPECIAL) {
                form->names.edited = form->names.original;
            } else {
                form->kindListFocused = 0;
                uiSpriteSetImageKeyframe(&form->animation, 0, 1);
                buttonHelpTeardownSlots();
                stateSetterEnterState(form, CONFIRM_NAME_EXIT);
                return;
            }
        }
        stateSetterEnterState(form, RESTORE_NAME);
    }
}

} /* extern "C" */
