#include "common.h"

extern "C" {

/* Departure progress block (module state at 0x00447518). */
typedef struct MapDepartProgress {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 step;
} MapDepartProgress;

void navigationFinishReadyField(void);
void mapGimicReset(void);
void mapDepartClearExtra(void);
s32 mapGimicIsIdle(void);
s32 mapModelsPollDeferredDestroy(void);

extern MapDepartProgress DAT_00447518;

/* Steps the map departure teardown; returns 1 once deferred model destruction has finished. */
s32 mapDepartStepTeardown(void)
{
    switch (DAT_00447518.step) {
    case 0:
        navigationFinishReadyField();
        mapGimicReset();
        DAT_00447518.step = 1;
        break;
    case 1:
        if (mapGimicIsIdle()) {
            DAT_00447518.step = 2;
        }
        break;
    case 2:
        mapDepartClearExtra();
        DAT_00447518.step = 3;
        break;
    case 3:
        if (mapModelsPollDeferredDestroy()) {
            DAT_00447518.step = 0;
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
