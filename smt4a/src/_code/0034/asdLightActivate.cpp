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
    g_asdLightCount[index].active = 1;
    g_asdLightCount[index].dirty = 0;
}

} /* extern "C" */
