#include "common.h"

struct CampTouchState {
    u8 unk000[0xdf0];
    s16 regionIds[0x25]; // 0xdf0: -1 marks an unused region
    u8 regionCount; // 0xe3a
};

extern "C" {
extern CampTouchState *g_camp;
void ifTouchRegionRemove(void);
void ifTouchResetSelection(void);

// Release the camp's registered touch regions and clear the current selection.
void campReleaseTouchRegions(void)
{
    CampTouchState *camp = g_camp;
    if (camp->regionCount != 0) {
        for (s32 index = 0; index < camp->regionCount; ++index) {
            ifTouchRegionRemove();
            camp->regionIds[index] = -1;
        }
        camp->regionCount = 0;
        ifTouchResetSelection();
    }
}
}
