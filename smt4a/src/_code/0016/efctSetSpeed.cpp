#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

namespace { struct Effects { u8 padding[0x38]; float first; u8 gap1[12]; float second; u8 gap2[12]; float third; u8 gap3[12]; float fourth; u8 gap4[0x11]; u8 changed; u8 gap5[6]; float speed; }; union Speed { float value; s32 bits; }; }

extern "C" {
extern Effects DAT_006306f8;
void efctSetSpeed(float speed)
{
    Speed clamped;
    clamped.value = speed;
    if (clamped.bits > 0x3f800000) { clamped.value = 1.0f; }
    if (clamped.value < 0.0f) { clamped.value = 0.0f; }
    DAT_006306f8.speed = clamped.value;
    DAT_006306f8.first = clamped.value;
    DAT_006306f8.second = clamped.value;
    DAT_006306f8.third = clamped.value;
    DAT_006306f8.fourth = clamped.value;
    DAT_006306f8.changed = 1;
}
}
