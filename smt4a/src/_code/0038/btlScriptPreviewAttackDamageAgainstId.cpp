/* NON_MATCHING: u64 mask hoisting causes different spills; retail also keeps an unused byte load and uses signed VFP conversion/constant preservation. */
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

union BattleAttackPreview {
    u32 words[13];
    struct {
        u16 unk00;
        u16 kind;
        u8 unk04[6];
        s16 modifier;
        u8 unk0c[0x14];
        s8 sign;
        u8 unk21[0x13];
    } data;
};

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 value);
void *dataTable00FindById(u16 id);
void FUN_003e8bb0(BattleAttackPreview *out, BattleMaskState *battle, BtlCombatantEntryA *attacker);
void kindIdStore(u32 kind, u32 *out);
s32 FUN_004c58e0(void *context, s32 variant, s32 attacker, s32 target,
    s32 modifier, s32 preview, s32 flags, f32 multiplier, f32 affinity);

u32 btlScriptPreviewAttackDamageAgainstId(void)
{
    s32 id = scrGetArg(0);
    s32 result = 9999;
    BattleMaskState *battle = btlGetMainState();
    if (dataTable00FindById(id) != NULL) {
        BtlCombatantEntryA *entries = reinterpret_cast<BtlCombatantEntryA *>(battle->entryMaskView.mask);
        for (s32 index = 4; index < 54; ++index) {
            BtlCombatantEntryA *entry = &entries[index];
            u64 flags = entry->flags;
            if ((flags & g_battleMaskPresets.eligibility.active) != 0 &&
                (flags & g_battleMaskPresets.eligibility.excluded) == 0 &&
                (flags & g_battleMaskPresets.eligibility.required) != 0 && entry->id == id) {
                if (entry != NULL) {
                    s16 oldKind = entries->attackSelection.kind;
                    s16 oldVariant = entries->attackSelection.variant;
                    entries->attackSelection.kind = 1;
                    entries->attackSelection.variant = 1;
                    BattleAttackPreview attack;
                    FUN_003e8bb0(&attack, battle, entries);
                    u32 statKind = 0;
                    kindIdStore(attack.data.kind, &statKind);
                    s32 sign = attack.data.sign;
                    f32 affinity = static_cast<f32>(static_cast<s32>(entry->encodedStats.values[statKind] & 0x3ff)) * 0.01f;
                    result = FUN_004c58e0(NULL, entries->attackSelection.variant,
                        entries->unitIndex, entry->unitIndex, attack.data.modifier, 1, 0,
                        1.0f, affinity) * sign;
                    entries->attackSelection.kind = oldKind;
                    entries->attackSelection.variant = oldVariant;
                }
                break;
            }
        }
    }
    scrSetResult(result);
    return 1;
}
}
