/* NON_MATCHING: the unit loop's clamps match (unitSetHpClamped, and playerSetHpClamped for the player, as in
 * partyApplyPercentHealthDamage); remaining: the group lives in r5 instead of r4 (and the player's damage product in
 * r4), the player division is scheduled before the HP load, and the unit loop's registers differ. */
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/GameDataAccess_Smt4.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

/* Sets a unit's HP, clamped to 1..maxHp (does nothing without a unit). */
static __inline void unitSetHpClamped(StatBlock *unit, s16 hp)
{
    if (unit != NULL) {
        s16 maximum = unit->maxHp;
        if (hp > maximum)
            hp = maximum;
        else if (hp < 1)
            hp = 1;
        unit->hp = hp;
    }
}

/* Sets the player's HP, clamped to 1..maxHp. */
static __inline void playerSetHpClamped(s16 hp)
{
    PlayerDataIV *player = gameGetPlayerData();
    s16 maximum = player->maxHp;
    if (hp > maximum)
        hp = maximum;
    else if (hp < 1)
        hp = 1;
    player->hp = hp;
}

/* Applies nonlethal percentage damage to the party members (player included for groups 0, 2 and 3) that have the
 * selected ailment and are not dead (bit 1) or protected (bits 10 and 2). */
void partyApplyNonlethalAilmentDamage(u32 group, u32 ailment, s32 percentage)
{
    if (percentage <= 0)
        return;
    u32 mask = 1 << ailment;
    if ((group == 0 || group == 2 || group == 3)
        && (gameGetPlayerData()->ailments & 2) == 0
        && (gameGetPlayerData()->ailments & 0x400) == 0
        && (gameGetPlayerData()->ailments & mask) != 0) {
        s32 damage = gameGetPlayerData()->maxHp * percentage;
        s32 hp = gameGetPlayerData()->hp;
        damage /= 100;
        if (damage <= 0)
            damage = 1;
        hp -= damage;
        if (hp <= 0)
            hp = 1;
        playerSetHpClamped(hp);
    }

    s32 count;
    s8 *slots;
    switch (group) {
    case 0:
    case 1:
        count = gameCountUnits();
        slots = gameGetSlotTable()->stock;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->active;
        break;
    default:
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        if (slots[index] < 0)
            continue;
        StatBlock *unit = gameGetUnitRecord(slots[index]);
        if (unit->ailments & 2)
            continue;
        if (unit->ailments & 0x400)
            continue;
        if (unit->ailments & 4)
            continue;
        if ((unit->ailments & mask) == 0)
            continue;
        s16 maximum = unit->maxHp;
        s32 damage = maximum * percentage / 100;
        if (damage <= 0)
            damage = 1;
        s32 hp = unit->hp - damage;
        if (hp <= 0)
            hp = 1;
        unitSetHpClamped(unit, hp);
    }
}
}
