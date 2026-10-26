/* NON_MATCHING: header word schedules differently (retail ORs the second-field shift before loading `first`, one scratch register fewer). */
#include "common.h"

struct PackedSettingData {
    u8 unk00[0x7c];
    u32 payload;
};

struct PackedSetting {
    u8 enabled;
    u8 first;
    u8 second;
    u8 unk03;
    PackedSettingData* data;
};

struct CommandPair { u32 header, id; };

extern "C" u32* gxEmitFramebufferAccessMasks(u32* data, u32* output, s32 count);

extern "C" u32* FUN_00500ee4(const PackedSetting* setting, u32* output, s32 includeData)
{
    CommandPair pair;
    pair.header = (setting->enabled != 0) | (setting->second << 4) | (setting->first << 8);
    pair.id = 0x30104;
    *(CommandPair*)output = pair;
    output += 2;
    if (includeData) {
        return gxEmitFramebufferAccessMasks(&setting->data->payload, output, 1);
    }
    return output;
}
