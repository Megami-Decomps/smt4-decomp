#include "common.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 padGetStickHorizontalDirection(void);

/* Stores record `id` in the player's slot for its kind when the stick direction matches the record's allowed directions. */
void FUN_00394e08(u32 id)
{
    s32 direction = padGetStickHorizontalDirection();
    EquipmentRecord *record = itemTableGetEquipmentRecord(id);
    PlayerDataIV *player;

    if (record != NULL) {
        u8 directions = record->alignments;

        if (((directions & 1) != 0 && direction == 4) || ((directions & 4) != 0 && direction == 5) ||
            ((directions & 2) != 0 && direction == 1)) {
            player = gameGetPlayerData();
            switch (itemTableGetEquipmentRecord(id)->slot) {
            case 2:
                player->equipment[0] = id;
                break;
            case 3:
                player->equipment[1] = id;
                break;
            case 4:
                player->equipment[3] = id;
                break;
            case 5:
                player->equipment[4] = id;
                break;
            case 6:
                player->equipment[5] = id;
                break;
            case 7:
                player->equipment[6] = id;
                break;
            case 8:
                player->equipment[2] = id;
                break;
            }
        }
    }
}

} /* extern "C" */
