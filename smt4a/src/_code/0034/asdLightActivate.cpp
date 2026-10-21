/* NON_MATCHING: retail uses `mov r3, #1` where armcc emits `mov r1, #1`. */
#include "common.h"

extern "C" {

struct LightState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 dirty;
    /* 0x06 */ u8 unk06[0x12];
};
extern LightState g_asdLightCount[];

void asdLightActivate(u32 index)
{
    LightState *light = &g_asdLightCount[index];
    light->active = 1;
    light->dirty = 0;
}

} /* extern "C" */
