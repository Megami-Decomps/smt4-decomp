/* NON_MATCHING: health-clamp operand scheduling and unit-loop flag tests produce different register allocation and branches. */
#include "common.h"

struct DamagePlayer {
    u8 unk00[0x1c];
    s16 maximumHealth; // 0x1c
    u8 unk1e[0x0c];
    s16 currentHealth; // 0x2a
    u8 unk2c[0x46];
    u16 flags; // 0x72
};
struct DamageUnit {
    u8 unk00[0x0e];
    s16 maximumHealth; // 0x0e
    u8 unk10[0x1a];
    s16 currentHealth; // 0x2a
    u8 unk2c[0x18];
    u16 flags; // 0x44
};
struct DamageSlots {
    u8 unk0000[0x90f0];
    s8 active[24]; // 0x90f0
    s8 reserve[3]; // 0x9108
};
extern "C" {
DamagePlayer *gameGetPlayerData();
s32 gameCountUnits();
DamageSlots *gameGetSlotTable();
DamageUnit *gameGetUnitRecord(s32 slot);
s32 gameGetOptionProgressStatus();
DamageUnit *gameGetSupportUnitData();
void FUN_0029be5c(s32 event, s32 amount);
u16 FUN_002903f0();
s32 FUN_00287894(u32 id);
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
        if (!(gameGetPlayerData()->flags & 2) && !(gameGetPlayerData()->flags & 0x400)) {
            s32 maximum = gameGetPlayerData()->maximumHealth;
            s32 previous = gameGetPlayerData()->currentHealth;
            s32 remaining = previous - healthReduction(maximum, percentage);
            if (remaining <= 0)
                remaining = 1;
            s32 stored = static_cast<s16>(remaining);
            DamagePlayer *player = gameGetPlayerData();
            if (stored > player->maximumHealth)
                stored = player->maximumHealth;
            else if (stored < 1)
                stored = 1;
            s32 amount = previous - remaining;
            player->currentHealth = static_cast<s16>(stored);
            if (amount > 0)
                FUN_0029be5c(23, amount);
        }
    }
    s32 count;
    const s8 *slots = NULL;
    if (group == 0 || group == 1) {
        count = gameCountUnits();
        slots = gameGetSlotTable()->active;
    } else if (group == 2 || group == 3) {
        count = 3;
        slots = gameGetSlotTable()->reserve;
    }
    if (slots) {
        for (s32 i = 0; i < count; ++i) {
            if (slots[i] < 0)
                continue;
            DamageUnit *unit = gameGetUnitRecord(slots[i]);
            u16 flags = unit->flags;
            if ((flags & 2) || (flags & 0x400) || (flags & 4))
                continue;
            s32 maximum = unit->maximumHealth;
            s32 previous = unit->currentHealth;
            s32 remaining = previous - healthReduction(maximum, percentage);
            if (remaining <= 0)
                remaining = 1;
            s32 stored = static_cast<s16>(remaining);
            if (unit) {
                if (stored > maximum)
                    stored = maximum;
                else if (stored < 1)
                    stored = 1;
                unit->currentHealth = static_cast<s16>(stored);
            }
            s32 amount = previous - remaining;
            if (amount > 0)
                FUN_0029be5c(23, amount);
        }
    }
    if (group != 3 && group != 4)
        return;
    if (gameGetOptionProgressStatus() != 2)
        return;
    if (gameGetOptionProgressStatus() == 2) {
        DamageUnit *support = gameGetSupportUnitData();
        if ((support->flags & 2) || static_cast<u16>(support->currentHealth) == 0)
            return;
    }
    DamageUnit *support = gameGetSupportUnitData();
    s32 maximum = support->maximumHealth;
    s32 reduction = healthReduction(maximum, percentage);
    s32 remaining = support->currentHealth - reduction;
    bool permitsZero = FUN_00287894(FUN_002903f0()) == 4;
    if (remaining <= 0 && !permitsZero)
        remaining = 1;
    if (remaining > maximum)
        remaining = maximum;
    support->currentHealth = static_cast<s16>(remaining);
    if (support->currentHealth == 0)
        support->flags |= 2;
}
