#include "common.h"
#include "battle/BattleHelpers_VariantA.h"
#include "gamedata/UnitRecordAccess.h"

/* Item effect record (accessed fields). */
struct ItemEffect {
    u8 unk00[0x23];
    u8 kind;            // 0x23
    u8 unk24[0xB];
    u8 target;          // 0x2F
    u8 unk30[5];
    u8 flags;           // 0x35
    u16 healAmount;     // 0x36
    u32 statusCure;     // 0x38
};

/* Unit data fields used by the usability test (the player block keeps its status mask at 0x72, units at 0x44). */
struct UnitHpView {
    u8 unk00[0x2A];
    s16 hp;             // 0x2A
};

enum {
    NEED_HEAL = 1,
    NEED_CURE = 4,
    NEED_RESERVE = 0x1000000,
    NEED_REVIVE = 0x2000000,
    NEED_DEAD = 0x4000000
};

extern "C" {
void FUN_0023dc38(u16 *mask, u32 status);
s32 btlSourceGetMaxHp(s32 unit);
s32 btlLinkGetMaxHp(s32 unit);
s32 saveResolvePartySlot(void);
s32 gameGetPlayerData(void);
s32 FUN_0033fc50(void);

/* The status bits a cure event clears (FUN_0023dc38 adds them to an empty mask). */
static __inline u16 cureMask(u32 event)
{
    u16 mask = 0;
    FUN_0023dc38(&mask, event);
    return mask;
}

/* Returns 0 when the item has an effect on the target, otherwise 3. */
u32 itemEffectCheckApplicable(s32 owner, s32 fromSave, ItemEffect *effect)
{
    u32 result = 0;
    u32 applicable = 0;
    u32 needs = 0;
    if ((effect->healAmount & 0xFFF) != 0)
        needs = 1;
    if ((effect->statusCure & 0x7F) != 0)
        needs |= NEED_CURE;
    if ((effect->flags & 8) != 0)
        needs |= NEED_REVIVE;
    else if (effect->kind == 7 || effect->kind == 9)
        needs |= NEED_RESERVE;
    if (effect->target == 4)
        needs |= NEED_DEAD;
    if (owner < 0) {
        s32 unit = gameGetPlayerData();
        if ((needs & NEED_HEAL) != 0 && (*reinterpret_cast<u16 *>(unit + 0x72) & 2) == 0 && btlSourceGetMaxHp(unit) != reinterpret_cast<UnitHpView *>(unit)->hp)
            applicable = NEED_HEAL;
        if ((needs & NEED_CURE) != 0) {
            u16 cure = 0;
            FUN_0023dc38(&cure, effect->statusCure & 0x7F);
            if ((cure & *reinterpret_cast<u16 *>(unit + 0x72)) != 0)
                applicable |= NEED_CURE;
            if ((applicable & NEED_CURE) != 0) {
                if ((needs & NEED_HEAL) != 0)
                    applicable |= NEED_HEAL;
            } else if ((applicable & NEED_HEAL) != 0) {
                if ((cureMask(effect->statusCure & 0x7F) & 2) == 0)
                    applicable |= NEED_CURE;
                if ((applicable & NEED_HEAL) != 0 && (effect->statusCure & 0x7F) == 0x11)
                    applicable |= NEED_CURE;
            }
        }
        if ((needs & NEED_DEAD) != 0 && *reinterpret_cast<u16 *>(unit + 0x72) == 0)
            applicable |= NEED_DEAD;
    } else {
        s32 unit = fromSave == 0 ? reinterpret_cast<s32>(gameGetUnitRecord(owner)) : saveResolvePartySlot();
        if (unit == 0)
            return 3;
        if ((needs & NEED_HEAL) != 0 && (*reinterpret_cast<u16 *>(unit + 0x44) & 0x406) == 0 && btlLinkGetMaxHp(unit) != reinterpret_cast<UnitHpView *>(unit)->hp)
            applicable = NEED_HEAL;
        if ((needs & NEED_CURE) != 0) {
            u16 cure = 0;
            FUN_0023dc38(&cure, effect->statusCure & 0x7F);
            if ((cure & *reinterpret_cast<u16 *>(unit + 0x44)) != 0)
                applicable |= NEED_CURE;
            if ((applicable & NEED_CURE) != 0) {
                if ((needs & NEED_HEAL) != 0)
                    applicable |= NEED_HEAL;
            } else if ((applicable & NEED_HEAL) != 0) {
                if ((cureMask(effect->statusCure & 0x7F) & 2) == 0)
                    applicable |= NEED_CURE;
                if ((applicable & NEED_HEAL) != 0 && (effect->statusCure & 0x7F) == 0x11)
                    applicable |= NEED_CURE;
            }
        }
        if ((needs & NEED_DEAD) != 0 && *reinterpret_cast<u16 *>(unit + 0x44) == 0)
            applicable |= NEED_DEAD;
    }
    if ((needs & NEED_RESERVE) != 0 && btlHasReserveReplacement(0) != 0)
        applicable |= NEED_RESERVE;
    if ((needs & NEED_REVIVE) != 0 && FUN_0033fc50() != 0)
        applicable |= NEED_REVIVE;
    if (needs != applicable)
        result = 3;
    return result;
}
}
