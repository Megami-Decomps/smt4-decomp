#include "camp/CampCec/CampCecEdit.h"

extern "C" {

extern CampCecEdit *g_campCecEdit;
void linkHolderApplyFlag(u32 holder, s32 flag);

// Run the CEC edit screen's current state handler, then switch to the queued state or close.
u32 campCecEditRunState(void)
{
    CampCecEdit *edit = g_campCecEdit;
    if (edit->stateHandlers[edit->state] != NULL) {
        s32 result = edit->stateHandlers[edit->state](edit);
        if (result == 2) {
            if (edit->nextState != -1) {
                edit->prevState = edit->state;
                edit->state = edit->nextState;
                edit->nextState = -1;
                if (edit->state == 8) {
                    edit->unk48 = 0;
                    edit->unk4C = 0;
                    edit->unk5C = 0;
                    edit->unk60 = 0;
                    edit->unk70 = 0;
                    edit->unk74 = 0;
                    edit->unk20 = 0;
                    edit->unk24 = 0;
                    edit->unk34 = 0;
                    edit->unk38 = 0;
                }
            }
        } else if (result == 1) {
            linkHolderApplyFlag(edit->linkHolder, 0);
            edit->unk125 = 1;
        }
    }
    return 0;
}

} /* extern "C" */
