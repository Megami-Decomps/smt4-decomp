/* NON_MATCHING: retail derives the four program addresses from one literal with `sub` (the blobs were defined in this source file); an extern object makes armcc load each address separately. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "shard/DrawPacketPreset.h"

extern "C" {

extern const u8 g_uiPacketPrograms[];
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
    paramsInit(&preset->packet, g_uiPacketPrograms, 0x114, DAT_005266c8, 0xcc,
               DAT_00526794, 0x54, 0, 0, DAT_005267e8, 0x94c);
}
}
