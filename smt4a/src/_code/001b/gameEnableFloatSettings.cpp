#include "common.h"

struct FloatSettings {
    f32 value;       // 0x00
    f32 limit;       // 0x04
    u32 unk08;       // 0x08
    u8 enabled;      // 0x0C
    u8 unk0D;        // 0x0D
    u8 unk0E;        // 0x0E
};

extern "C" void gameEnableFloatSettings(FloatSettings* settings)
{
    settings->value = 0.0f;
    settings->limit = 6.25f;
    settings->unk08 = 0;
    settings->enabled = 1;
    settings->unk0D = 0;
    settings->unk0E = 0;
}
