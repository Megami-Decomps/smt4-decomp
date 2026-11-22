/* NON_MATCHING: 44 lines. The player's clamp is playerSetHpClamped (its s16 argument converted before the player
 * lookup, as in partyApplyNonlethalAilmentDamage), the units' and support's flag tests and clamps match; remaining:
 * the player's remaining/clamped HP swap r4/r5, the units' reduction lands in r3 (retail r1), the support's
 * reduction swaps r0/r1 and retail keeps the leader test's flag in r7 (zeroed before the reduction). */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/GameDataAccess_Smt4.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
StatBlock *gameGetSupportUnitData();
u16 rosterGetLeaderId();
s32 table1bOr1cGetRecordValue(u32 id);
}

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

static __inline s32 healthReduction(s32 maximum, s32 percentage)
{
    s32 reduction = maximum * percentage / 100;
    if (reduction <= 0)
        reduction = 1;
    return reduction;
}

/* Applies percentage damage to the eligible members, leaving ordinary members at least 1 HP. */
extern "C" void partyApplyPercentHealthDamage(s32 group, s32 percentage)
{
    if (percentage <= 0)
        return;
    if (group == 0 || group == 2 || group == 3) {
        if (!(gameGetPlayerData()->ailments & 2) && !(gameGetPlayerData()->ailments & 0x400)) {
            s32 maximum = gameGetPlayerData()->maxHp;
            s32 previous = gameGetPlayerData()->hp;
            s32 remaining = previous - healthReduction(maximum, percentage);
            if (remaining <= 0)
                remaining = 1;
            playerSetHpClamped(remaining);
            s32 amount = previous - remaining;
            if (amount > 0)
                gameCounterAddSaturating(23, amount);
        }
    }
    s32 count = 0;
    const s8 *slots = NULL;
    if (group == 0 || group == 1) {
        count = gameCountUnits();
        slots = gameGetSlotTable()->stock;
    } else if (group == 2 || group == 3) {
        count = 3;
        slots = gameGetSlotTable()->active;
    }
    for (s32 i = 0; i < count; ++i) {
        if (slots[i] < 0)
            continue;
        StatBlock *unit = gameGetUnitRecord(slots[i]);
        if (unit->ailments & 2)
            continue;
        if (unit->ailments & 0x400)
            continue;
        if (unit->ailments & 4)
            continue;
        s32 maximum = unit->maxHp;
        s32 previous = unit->hp;
        s32 remaining = previous - healthReduction(maximum, percentage);
        if (remaining <= 0)
            remaining = 1;
        unitSetHpClamped(unit, remaining);
        s32 amount = previous - remaining;
        if (amount > 0)
            gameCounterAddSaturating(23, amount);
    }
    if (group != 3 && group != 4)
        return;
    if (gameGetOptionProgressStatus() != 2)
        return;
    switch (gameGetOptionProgressStatus()) {
    case 0:
    case 1:
        break;
    case 2: {
        StatBlock *support = gameGetSupportUnitData();
        if ((support->ailments & 2) || support->hp == 0)
            return;
        break;
    }
    }
    StatBlock *support = gameGetSupportUnitData();
    s32 maximum = support->maxHp;
    s32 reduction = healthReduction(maximum, percentage);
    s32 remaining = support->hp - reduction;
    bool permitsZero = table1bOr1cGetRecordValue(rosterGetLeaderId()) == 4;
    if (remaining <= 0 && !permitsZero)
        remaining = 1;
    if (remaining > maximum)
        remaining = maximum;
    support->hp = static_cast<s16>(remaining);
    if (support->hp == 0)
        support->ailments |= 2;
}
