/* NON_MATCHING: table/count/model-ID scratch registers are exchanged; all 79 instructions and loop control flow otherwise agree. */
#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/PlayerDataBlock.h"

extern "C" {
extern const EquipmentModelCompatibility DAT_0044d35c[77];

// Select the alternate head/leg appearance for model combinations listed as compatible.
u32 FUN_0023cef0(void *, s32 part, s32 group, s32 variant, u16 bodyId)
{
    if (bodyId == 0)
        bodyId = reinterpret_cast<PlayerEquipmentAppearance *>(gameGetPlayerData())->body;
    RankedTableRecord *body = dataTable08Sub2GetRecord(bodyId);
    const EquipmentModelCompatibility *table = DAT_0044d35c;
    s32 count = 15;
    u16 modelId = static_cast<u16>(variant + group * 1000);
    if (part == 2) {
        table += 15;
        count = 62;
    }
    const EquipmentModelCompatibility *compatibility = NULL;
    for (s32 index = 0; index < count; ++index) {
        if (table[index].modelId == modelId) {
            compatibility = &table[index];
            break;
        }
    }
    u16 bodyModelId = static_cast<u16>(body->model.variant + body->model.group * 1000);
    if (compatibility) {
        for (s32 index = 0; index < compatibility->count; ++index) {
            if (compatibility->compatibleIds[index] == bodyModelId)
                return 1;
        }
    }
    return 0;
}
}
