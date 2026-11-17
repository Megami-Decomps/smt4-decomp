/* NON_MATCHING: explicit support-progress states and zero-health test now match; player clamps, unit-loop flag tests, and support reduction registers still differ. */
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

static __inline s32 healthReduction(s32 maximum, s32 percentage)
{
    s32 reduction = maximum * percentage / 100;
    if (reduction <= 0)
        reduction = 1;
    return reduction;
}

// Apply percentage damage to eligible members, preserving ordinary members' final hit point.
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
            s32 stored = static_cast<s16>(remaining);
            PlayerDataIV *player = gameGetPlayerData();
            if (stored > player->maxHp)
                stored = player->maxHp;
            else if (stored < 1)
                stored = 1;
            s32 amount = previous - remaining;
            player->hp = static_cast<s16>(stored);
            if (amount > 0)
                gameCounterAddSaturating(23, amount);
        }
    }
    s32 count;
    const s8 *slots = NULL;
    if (group == 0 || group == 1) {
        count = gameCountUnits();
        slots = gameGetSlotTable()->stock;
    } else if (group == 2 || group == 3) {
        count = 3;
        slots = gameGetSlotTable()->active;
    }
    if (slots) {
        for (s32 i = 0; i < count; ++i) {
            if (slots[i] < 0)
                continue;
            StatBlock *unit = gameGetUnitRecord(slots[i]);
            u16 flags = unit->ailments;
            if ((flags & 2) || (flags & 0x400) || (flags & 4))
                continue;
            s32 maximum = unit->maxHp;
            s32 previous = unit->hp;
            s32 remaining = previous - healthReduction(maximum, percentage);
            if (remaining <= 0)
                remaining = 1;
            s32 stored = static_cast<s16>(remaining);
            if (unit) {
                if (stored > maximum)
                    stored = maximum;
                else if (stored < 1)
                    stored = 1;
                unit->hp = static_cast<s16>(stored);
            }
            s32 amount = previous - remaining;
            if (amount > 0)
                gameCounterAddSaturating(23, amount);
        }
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
