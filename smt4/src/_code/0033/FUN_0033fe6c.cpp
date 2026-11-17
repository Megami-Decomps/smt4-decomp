/* NON_MATCHING: HP/MP coupling matches the retail guards; effect/target saved registers and the shared party-unit lookup exit still differ. */
#include "common.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

/* The item or skill effect being tested (only the fields read here). */
struct RecoveryEffect {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u16 hpAmount;
    /* 0x66 */ u16 mpAmount;
    /* 0x68 */ u8 hpPercent;
    /* 0x69 */ u8 mpPercent;
    /* 0x6A */ u8 statusKind; /* low 7 bits: the status cured */
};

#define RECOVER_HP 1
#define RECOVER_MP 2
#define CURE_STATUS 4

extern "C" {
StatBlock *saveResolvePartySlot(s32 index);
s32 btlSourceGetMaxHp(const PlayerDataIV *player);
s32 btlLinkGetMaxHp(const StatBlock *unit);
void FUN_0023dc38(u16 *mask, s32 kind);

/* Tells whether the effect would change the target: 0 when it would, 3 when it would do nothing. */
u32 FUN_0033fe6c(s32 index, s32 fromParty, const RecoveryEffect *effect, u32 useAmounts)
{
    u32 result = 0;
    u32 wanted = 0;
    u32 changes = 0;
    if (useAmounts != 0) {
        if (effect->hpAmount != 0)
            wanted = RECOVER_HP;
        if (effect->hpPercent != 0)
            wanted |= RECOVER_HP;
        if (effect->mpAmount != 0)
            wanted |= RECOVER_MP;
        if (effect->mpPercent != 0)
            wanted |= RECOVER_MP;
        if ((effect->statusKind & 0x7F) != 0)
            wanted |= CURE_STATUS;
    }
    if ((effect->statusKind & 0x7F) == 1)
        wanted |= CURE_STATUS;
    if (index < 0) {
        PlayerDataIV *player = gameGetPlayerData();
        if ((wanted & RECOVER_HP) && (player->ailments & 2) == 0 && btlSourceGetMaxHp(player) != player->hp)
            changes = RECOVER_HP;
        if ((wanted & RECOVER_MP) && (player->ailments & 2) == 0 && player->mp != player->maxMp)
            changes |= RECOVER_MP;
        if ((wanted & RECOVER_HP) && (wanted & RECOVER_MP)) {
            if ((changes & RECOVER_HP) != 0 && (changes & RECOVER_MP) == 0)
                changes |= RECOVER_MP;
            if ((changes & RECOVER_HP) == 0 && (changes & RECOVER_MP) != 0)
                changes |= RECOVER_HP;
        }
        if ((wanted & CURE_STATUS) != 0) {
            u16 cureMask = 0;
            FUN_0023dc38(&cureMask, effect->statusKind & 0x7F);
            if ((cureMask & player->ailments) != 0)
                changes |= CURE_STATUS;
        }
    } else {
        StatBlock *unit = fromParty != 0 ? saveResolvePartySlot(index) : gameGetUnitRecord(index);
        if (unit == NULL)
            return 3;
        if ((wanted & RECOVER_HP) && (unit->ailments & 0x406) == 0 && btlLinkGetMaxHp(unit) != unit->hp)
            changes = RECOVER_HP;
        if ((wanted & RECOVER_MP) && (unit->ailments & 0x406) == 0 && unit->mp != unit->maxMp)
            changes |= RECOVER_MP;
        if ((wanted & RECOVER_HP) && (wanted & RECOVER_MP)) {
            if ((changes & RECOVER_HP) != 0 && (changes & RECOVER_MP) == 0)
                changes |= RECOVER_MP;
            if ((changes & RECOVER_HP) == 0 && (changes & RECOVER_MP) != 0)
                changes |= RECOVER_HP;
        }
        if ((wanted & CURE_STATUS) != 0) {
            u16 cureMask = 0;
            FUN_0023dc38(&cureMask, effect->statusKind & 0x7F);
            if ((cureMask & unit->ailments) != 0)
                changes |= CURE_STATUS;
        }
    }
    if (wanted != changes)
        result = 3;
    return result;
}
}
