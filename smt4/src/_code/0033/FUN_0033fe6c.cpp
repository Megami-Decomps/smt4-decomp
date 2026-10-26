/* NON_MATCHING: HP/MP coupling matches the retail guards; effect/target saved registers and the shared party-unit lookup exit still differ. */
#include "common.h"

/* The item or skill effect being tested (only the fields read here). */
struct RecoveryEffect {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u16 hpAmount;
    /* 0x66 */ u16 mpAmount;
    /* 0x68 */ u8 hpPercent;
    /* 0x69 */ u8 mpPercent;
    /* 0x6A */ u8 statusKind; /* low 7 bits: the status cured */
};

/* The player's record (the party's leader when the index is negative). */
struct PlayerRecord {
    /* 0x00 */ u8 unk00[0x1E];
    /* 0x1E */ s16 maxMp;
    /* 0x20 */ u8 unk20[0xA];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[0x44];
    /* 0x72 */ u16 status;
};

/* A party demon's record. */
struct UnitRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[0x16];
    /* 0x44 */ u16 status;
};

#define RECOVER_HP 1
#define RECOVER_MP 2
#define CURE_STATUS 4

extern "C" {
PlayerRecord *gameGetPlayerData(void);
UnitRecord *saveResolvePartySlot(s32 index);
UnitRecord *gameGetUnitRecord(s32 index);
s32 btlSourceGetMaxHp(const PlayerRecord *player);
s32 btlLinkGetMaxHp(const UnitRecord *unit);
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
        PlayerRecord *player = gameGetPlayerData();
        if ((wanted & RECOVER_HP) && (player->status & 2) == 0 && btlSourceGetMaxHp(player) != player->hp)
            changes = RECOVER_HP;
        if ((wanted & RECOVER_MP) && (player->status & 2) == 0 && player->mp != player->maxMp)
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
            if ((cureMask & player->status) != 0)
                changes |= CURE_STATUS;
        }
    } else {
        UnitRecord *unit = fromParty != 0 ? saveResolvePartySlot(index) : gameGetUnitRecord(index);
        if (unit == NULL)
            return 3;
        if ((wanted & RECOVER_HP) && (unit->status & 0x406) == 0 && btlLinkGetMaxHp(unit) != unit->hp)
            changes = RECOVER_HP;
        if ((wanted & RECOVER_MP) && (unit->status & 0x406) == 0 && unit->mp != unit->maxMp)
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
            if ((cureMask & unit->status) != 0)
                changes |= CURE_STATUS;
        }
    }
    if (wanted != changes)
        result = 3;
    return result;
}
}
