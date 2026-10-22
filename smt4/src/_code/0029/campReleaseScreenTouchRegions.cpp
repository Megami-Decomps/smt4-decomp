#include "common.h"

extern "C" {

typedef struct CampScreen {
    /* 0x000 */ u8 unk000[0xE02];
    /* 0xE02 */ s16 regionIds[5];
    /* 0xE0C */ s16 slotRegions[1];     /* one touch-region id per slot; -1 when unused */
} CampScreen;

extern CampScreen *g_camp;

int ifTouchRegionRemove(void);
s32 FUN_0029d644(u32 arg);

/* Removes the camp screen's touch regions: the fixed ones, each used slot's, and (when `keepExtra` is 0) two more. */
void campReleaseScreenTouchRegions(u32 arg, s32 keepExtra)
{
    CampScreen *camp = g_camp;
    s32 i;

    ifTouchRegionRemove();
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    camp->regionIds[0] = -1;
    camp->regionIds[1] = -1;
    camp->regionIds[2] = -1;
    camp->regionIds[3] = -1;
    camp->regionIds[4] = -1;
    for (i = 0; i < FUN_0029d644(arg); i++) {
        if (camp->slotRegions[i] >= 0) {
            ifTouchRegionRemove();
            camp->slotRegions[i] = -1;
        }
    }
    if (keepExtra == 0) {
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    }
}

} /* extern "C" */
