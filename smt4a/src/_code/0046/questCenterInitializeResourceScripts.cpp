#include "map/PickObjectResources.h"
#include "code/Code0013.h"
#include "script/scrScriptProcess.h"
#include "code/Code003c_Smt4a.h"
#include "gamedata/GameDataAccess_VariantG.h"

extern "C" {
void messageSetMode(s32);
void sysPlaySe(s32);
void pickObjStart(PickObjectResources *, const char *);
void titleSetSlotValueState2(s32, s32);

/* Wait for both resource pairs, instantiate them, then select the initial state. */
void questCenterInitializeResourceScripts(PickObjectResources *work)
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
            bool alternateMode = work->mode == 1 || work->mode == 2;
            if (alternateMode) {
                work->state = 16;
                work->phase = 0;
            } else {
                work->state = 3;
                work->phase = 0;
            }
            if (!alternateMode) {
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
} /* extern "C" */
