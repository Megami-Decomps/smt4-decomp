#include "battle/btlUnit.h"
#include "gamedata/PlayerInitialization.h"
#include "battle/UnitInitialization.h"

extern "C" {
u16 playerDataValueAt(u32 index);
s16 FUN_00257e40(u32 index);
s32 padGetStickHorizontalDirection();

void btlInitializePlayerUnitData(u32, BtlUnitData *data, const PlayerInitialRecordIV *player)
{
    BtlUnitInitializationIV *unit = reinterpret_cast<BtlUnitInitializationIV *>(data);
    unit->active = 1;
    unit->selection[2] = -1;
    unit->status = 0;
    unit->selection[0] = -1;
    unit->selection[1] = -1;
    unit->statMode = 0;
    unit->current.hp = player->hp;
    unit->current.maximumHp = player->maximumHp;
    unit->current.mp = player->mp;
    unit->current.maximumMp = player->maximumMp;
    for (s32 index = 0; index < 5; ++index)
        unit->current.stats[index] = player->stats[index];
    unit->initial = unit->current;
    unit->points = player->advancement.points;
    unit->pending[0] = 0;
    unit->pending[1] = 0;
    unit->enabled = player->enabled;
    unit->counter = 0;
    for (s32 index = 0; index < 14; ++index)
        unit->effects[index] = 0;
    for (s32 index = 0; index < 18; ++index) {
        unit->encoded[index].value = playerDataValueAt((u8)index);
        unit->encoded[index].kind = FUN_00257e40((u8)index);
        unit->initialEncoded[index].value = playerDataValueAt((u8)index);
        unit->initialEncoded[index].kind = FUN_00257e40((u8)index);
    }
    unit->percentage = 100;
    s32 direction = padGetStickHorizontalDirection();
    if (direction == 1)
        unit->direction = 1;
    else if (direction == 4)
        unit->direction = 0;
    else if (direction == 5)
        unit->direction = 2;
}
}
