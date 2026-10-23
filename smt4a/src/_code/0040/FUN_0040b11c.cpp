/* NON_MATCHING: table/index/source-loop registers differ despite matching instruction row counts. */
#include "gamedata/DestinationConnections.h"

extern "C" {
extern DestinationConnectionGroups DAT_00588358;
extern DestinationConnection DAT_005882a4[15];
void *gameGetPlayerData();
const DestinationCoordinates *FUN_00192608(u32 id);

/* Check whether the selected destination accepts the player's current map point. */
u32 FUN_0040b11c(u32 unused, s32 kind, s32 area, s32 point, u32 current)
{
    struct PlayerLocations {
        u8 unk00[6];
        u16 first;
        u16 second;
    };
    if (current == 0) {
        const PlayerLocations *player = static_cast<PlayerLocations *>(gameGetPlayerData());
        current = kind == 1 ? player->first : player->second;
    }
    const DestinationCoordinates *source = FUN_00192608(current);
    const DestinationConnection *records = &DAT_00588358.single;
    s32 count = 1;
    const DestinationConnection *connection = NULL;
    if (kind == 2) {
        ++records;
        count = 59;
    } else if (kind == 0) {
        records = DAT_005882a4;
        count = 15;
    }
    u16 destination = point + area * 1000;
    for (s32 index = 0; index < count; ++index) {
        if (records[index].destination == destination) {
            connection = &records[index];
            break;
        }
    }
    u16 sourceId = source->point + source->area * 1000;
    if (connection != NULL) {
        for (s32 index = 0; index < connection->count; ++index) {
            if (connection->sources[index] == sourceId) {
                return 1;
            }
        }
    }
    return 0;
}
}
