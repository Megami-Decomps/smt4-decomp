/* NON_MATCHING: only the destination search loop differs: retail keeps the record table in r3 and the index in r2, the build swaps them. */
#include "gamedata/DestinationConnections.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

namespace {
enum {
    OUTFIT_HEAD,
    OUTFIT_BODY,
    OUTFIT_LEGS,
    MODEL_GROUP_KEY_STRIDE = 1000,
};
}

extern "C" {
extern DestinationConnectionGroups DAT_00588358;
extern DestinationConnection DAT_005882a4[15];

/* Chooses the alternate outfit model when its connection table allows the adjoining equipment. */
u32 connectionTableFindVariant(u32 unused, s32 kind, s32 modelGroup, s32 model, u32 current)
{
    if (current == 0) {
        const PlayerDataA *player = gameGetPlayerData();
        current = kind == OUTFIT_BODY ? player->equipped.head : player->equipped.body;
    }
    const EquipmentRecordA *source = itemTableGetEquipmentRecord(current);
    s32 count = 1;
    const DestinationConnection *connection = NULL;
    const DestinationConnection *records = DAT_00588358.records;
    if (kind == OUTFIT_LEGS) {
        ++records;
        count = sizeof(DAT_00588358.records) / sizeof(*records) - 1;
    } else if (kind == OUTFIT_HEAD) {
        records = DAT_005882a4;
        count = sizeof(DAT_005882a4) / sizeof(*records);
    }
    u16 destination = model + modelGroup * MODEL_GROUP_KEY_STRIDE;
    for (s32 index = 0; index < count; ++index) {
        if (records[index].destination == destination) {
            connection = &records[index];
            break;
        }
    }
    u16 sourceId = source->model + source->modelGroup * MODEL_GROUP_KEY_STRIDE;
    if (connection != NULL) {
        for (s32 index = 0; index < connection->count; ++index) {
            if (connection->sources[index] == sourceId) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
