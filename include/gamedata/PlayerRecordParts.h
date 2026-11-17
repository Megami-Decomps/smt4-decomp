/* The equipment block both games' player records start with (PlayerDataIV in gamedata/GameSaveData.h,
 * PlayerDataA in gamedata/GameSaveDataA.h). */
#ifndef GAMEDATA_PLAYERRECORDPARTS_H
#define GAMEDATA_PLAYERRECORDPARTS_H

#include "common.h"
#include <stddef.h>

/* The player's equipped item ids by slot (the item kinds 2-8 equip into them). */
typedef struct PlayerEquipment {
    /* 0x00 */ u16 weapon;     /* kind 2 */
    /* 0x02 */ u16 gun;        /* kind 3 */
    /* 0x04 */ u16 bullets;    /* kind 8 */
    /* 0x06 */ u16 head;       /* kind 4 */
    /* 0x08 */ u16 body;       /* kind 5 */
    /* 0x0A */ u16 legs;       /* kind 6 */
    /* 0x0C */ u16 accessory;  /* kind 7 */
} PlayerEquipment;

typedef char PlayerEquipmentOffsetCheck[offsetof(PlayerEquipment, head) == 0x6 && sizeof(PlayerEquipment) == 0xE ? 1 : -1];

#endif
