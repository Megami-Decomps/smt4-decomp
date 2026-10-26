/* NON_MATCHING: ailment tests combine into a mask and HP-clamp register allocation differs from retail. */
#include "shard/PadState.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {
PartyDamageUnitIV *gameGetUnitRecord(s32 slot);

// Apply nonlethal percentage damage to party members with the selected ailment.
void partyApplyNonlethalAilmentDamage(u32 group, u32 ailment, s32 percentage)
{
    if (percentage <= 0)
        return;
    u32 mask = 1 << ailment;
    if ((group == 0 || group == 2 || group == 3)
        && (reinterpret_cast<PadState *>(gameGetPlayerData())->unk72 & 2) == 0
        && (reinterpret_cast<PadState *>(gameGetPlayerData())->unk72 & 0x400) == 0
        && (reinterpret_cast<PadState *>(gameGetPlayerData())->unk72 & mask) != 0) {
        s32 damage = reinterpret_cast<PadState *>(gameGetPlayerData())->unk1C * percentage;
        s32 hp = reinterpret_cast<PadState *>(gameGetPlayerData())->unk2A;
        damage /= 100;
        if (damage <= 0)
            damage = 1;
        hp -= damage;
        if (hp <= 0)
            hp = 1;
        s16 remaining = hp;
        PadState *player = reinterpret_cast<PadState *>(gameGetPlayerData());
        if (remaining > player->unk1C)
            remaining = player->unk1C;
        else if (remaining < 1)
            remaining = 1;
        player->unk2A = remaining;
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
        if (slots[index] >= 0) {
            PartyDamageUnitIV *unit = gameGetUnitRecord(slots[index]);
            u16 ailments = unit->ailments;
            if ((ailments & 2) == 0 && (ailments & 0x400) == 0
                && (ailments & 4) == 0 && (ailments & mask) != 0) {
                s16 maximum = unit->maximumHp;
                s32 damage = percentage * maximum / 100;
                if (damage <= 0)
                    damage = 1;
                s32 hp = unit->currentHp - damage;
                if (hp <= 0)
                    hp = 1;
                s16 remaining = hp;
                if (unit != NULL) {
                    if (remaining > maximum)
                        remaining = maximum;
                    else if (remaining < 1)
                        remaining = 1;
                    unit->currentHp = remaining;
                }
            }
        }
    }
}
}
