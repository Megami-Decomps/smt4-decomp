/* NON_MATCHING: resource setup register reuse, adjacent pointer loads, and mode dispatch lowering differ. */
#include "map/PickObjectResources.h"

extern "C" {
PickObjectResource *FUN_00275bc8(void *, void *);
s32 gameFlagIsSet(u32);
void FUN_003c1060(void);
void messageSetMode(s32);
void FUN_003c3e14(void);
void sysPlaySe(s32);
void pickObjStart(PickObjectResources *, const char *);
s32 FUN_0013def0(u32);
void FUN_003d54f8(s32, s32);

/* Wait for both resource pairs, instantiate them, then select the initial state. */
void FUN_00468574(PickObjectResources *work)
{
    if (work->primaryData != NULL && work->primaryInfo != NULL &&
        work->secondaryData != NULL && work->secondaryInfo != NULL) {
        work->primary = FUN_00275bc8(work->primaryData, work->primaryInfo);
        work->primary->state = 2;
        work->secondary = FUN_00275bc8(work->secondaryData, work->secondaryInfo);
        work->secondary->state = 2;
        if (gameFlagIsSet(0x467)) {
            FUN_003c1060();
            messageSetMode(1);
            FUN_003c3e14();
            sysPlaySe(0x92);
            pickObjStart(work, "qc_startEvent");
            work->state = 15;
            work->phase = 0;
        } else {
            work->state = (work->mode == 1 || work->mode == 2) ? 16 : 3;
            work->phase = 0;
            if (work->mode != 1 && work->mode != 2) {
                if (FUN_0013def0(0) == 3) {
                    FUN_003d54f8(0, 10);
                }
                if (FUN_0013def0(1) == 3) {
                    FUN_003d54f8(1, 10);
                }
            }
        }
    }
}
}
