/* NON_MATCHING: retail loads the second resource pair with two ldr (here an add + ldm) and lowers the mode test to one cmp/cmpne with predicated moves feeding the later branch; the linker-inlined scriptProcessSetMode stores now match. */
#include "map/PickObjectResources.h"
#include "code/Code0013.h"
#include "script/scrScriptProcess.h"
#include "code/Code003c_Smt4a.h"

extern "C" {
s32 gameFlagIsSet(u32);
void messageSetMode(s32);
void sysPlaySe(s32);
void pickObjStart(PickObjectResources *, const char *);
void titleSetSlotValueState2(s32, s32);

/* Wait for both resource pairs, instantiate them, then select the initial state. */
void FUN_00468574(PickObjectResources *work)
{
    if (work->primaryData != NULL && work->primaryInfo != NULL &&
        work->secondaryData != NULL && work->secondaryInfo != NULL) {
        work->primary = scrScriptProcessCreate(work->primaryData, work->primaryInfo);
        scriptProcessSetMode(work->primary, 2);
        work->secondary = scrScriptProcessCreate(work->secondaryData, work->secondaryInfo);
        scriptProcessSetMode(work->secondary, 2);
        if (gameFlagIsSet(0x467)) {
            messageMainRequestBanner();
            messageSetMode(1);
            messageMainClearBannerRequest();
            sysPlaySe(0x92);
            pickObjStart(work, "qc_startEvent");
            work->state = 15;
            work->phase = 0;
        } else {
            work->state = (work->mode == 1 || work->mode == 2) ? 16 : 3;
            work->phase = 0;
            if (work->mode != 1 && work->mode != 2) {
                if (pairedAvailabilityGetState(0) == 3) {
                    titleSetSlotValueState2(0, 10);
                }
                if (pairedAvailabilityGetState(1) == 3) {
                    titleSetSlotValueState2(1, 10);
                }
            }
        }
    }
}
}
