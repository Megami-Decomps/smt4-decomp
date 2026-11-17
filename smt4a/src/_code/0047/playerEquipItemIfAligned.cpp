#include "common.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 playerAlignmentClass(void);

/* Equips the item in its slot when the player's alignment class allows it. */
void playerEquipItemIfAligned(u32 id)
{
    s32 alignment = playerAlignmentClass();
    EquipmentRecordA *item = dataTable08Sub2GetRecord(id);
    PlayerDataA *equipment;

    if (item == NULL) {
        return;
    }
    if (((item->alignments & 1) && alignment == 4) || ((item->alignments & 4) && alignment == 5)
        || ((item->alignments & 2) && alignment == 1)) {
        equipment = gameGetPlayerData();
        switch (dataTable08Sub2GetRecord(id)->slot) {
        case 2:
            equipment->equipped.weapon = id;
            break;
        case 3:
            equipment->equipped.gun = id;
            break;
        case 4:
            equipment->equipped.head = id;
            break;
        case 5:
            equipment->equipped.body = id;
            break;
        case 6:
            equipment->equipped.legs = id;
            break;
        case 7:
            equipment->equipped.accessory = id;
            break;
        case 8:
            equipment->equipped.bullets = id;
            break;
        }
    }
}

} /* extern "C" */
