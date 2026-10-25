/* NON_MATCHING: adjacent program arrays need separate literal loads with the current declarations. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/DrawPacketPreset.h"

extern "C" {
void paramsClearPacket(UiResourceParameters *packet);

extern const u8 DAT_005265b4[];
extern const u8 DAT_005266c8[];
extern const u8 DAT_00526794[];
extern const u8 DAT_005267e8[];

void FUN_0015f258(DrawPacketPreset *preset)
{
    preset->unk000[0] = 0;
    preset->unk000[1] = 0;
    preset->unk000[2] = 0;
    preset->unk000[3] = 0;
    preset->unk000[4] = 0;
    preset->unk414 = 1;
    preset->unk415 = 1;
    preset->unk41c = 0;
    preset->unk418 = 0;
    paramsClearPacket(&preset->packet);
    paramsInit(&preset->packet, DAT_005265b4, 0x114, DAT_005266c8, 0xcc,
               DAT_00526794, 0x54, 0, 0, DAT_005267e8, 0x94c);
}
}
