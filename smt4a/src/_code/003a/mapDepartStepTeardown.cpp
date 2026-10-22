#include "common.h"

extern "C" {

/* Departure progress block (module state at 0x005806b4). */
typedef struct MapDepartProgress {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 step;
} MapDepartProgress;

void naviMainFinishRequest(void);
void FUN_003538d0(void);
void mapDepartExtraClear(void);
s32 mapGimicIsIdle(void);
s32 FUN_0033e1d4(void);

extern MapDepartProgress DAT_005806b4;

/* Steps the map departure teardown; returns 1 once deferred model destruction has finished. */
s32 mapDepartStepTeardown(void)
{
    switch (DAT_005806b4.step) {
    case 0:
        naviMainFinishRequest();
        FUN_003538d0();
        DAT_005806b4.step = 1;
        break;
    case 1:
        if (mapGimicIsIdle()) {
            DAT_005806b4.step = 2;
        }
        break;
    case 2:
        mapDepartExtraClear();
        DAT_005806b4.step = 3;
        break;
    case 3:
        if (FUN_0033e1d4()) {
            DAT_005806b4.step = 0;
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
