/* NON_MATCHING: compiler changes the packed-header store and input/bitfield register scheduling; O2 also differs. */
#include "common.h"

struct PackedSettingData {
    u8 unk00[0x7c]; // 0x00
    u32 payload;     // 0x7c
};

struct PackedSetting {
    u8 enabled;             // 0x00
    u8 first;               // 0x01
    u8 second;              // 0x02
    u8 unk03;               // 0x03
    PackedSettingData* data; // 0x04
};

extern "C" u32* gxEmitFramebufferAccessMasks(u32* data, u32* output, s32 count);

// Write the setting's command header and optionally append its data payload.
extern "C" u32* FUN_00500ee4(const PackedSetting* setting, u32* output, s32 includeData)
{
    *output++ = (setting->enabled != 0) | (setting->second << 4) | (setting->first << 8);
    *output++ = 0x30104;
    if (includeData) {
        return gxEmitFramebufferAccessMasks(&setting->data->payload, output, 1);
    }
    return output;
}
