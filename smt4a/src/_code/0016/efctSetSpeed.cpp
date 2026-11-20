#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

namespace { struct Effects { u8 padding[0x38]; float first; u8 gap1[12]; float second; u8 gap2[12]; float third; u8 gap3[12]; float fourth; u8 gap4[0x11]; u8 changed; u8 gap5[6]; float speed; }; union Speed { float value; s32 bits; }; }

extern "C" {
extern Effects g_quadColorState;
void efctSetSpeed(float speed)
{
    Speed clamped;
    clamped.value = speed;
    if (clamped.bits > 0x3f800000) { clamped.value = 1.0f; }
    if (clamped.value < 0.0f) { clamped.value = 0.0f; }
    g_quadColorState.speed = clamped.value;
    g_quadColorState.first = clamped.value;
    g_quadColorState.second = clamped.value;
    g_quadColorState.third = clamped.value;
    g_quadColorState.fourth = clamped.value;
    g_quadColorState.changed = 1;
}
}
