/* NON_MATCHING: health multiply/phase argument scheduling, flag LDM versus LDRD, VFP channel allocation and final OR tree differ. O2 candidate. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

struct BattleTintOwner {
    u32 unk00;
    BtlMainStateA *battle;
};

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 group);
s32 FUN_001f3e80(s32 first, s32 second, s32 period, s32 time, s32 invert);

u32 battleEffectGetTint(BattleTintOwner *owner, s32 index)
{
    BtlMainStateA *battle = owner->battle;
    BattleEffectSetup *effect = &battle->roster[index].render;
    BtlCombatantEntryA *combatant = FUN_003f0e20(battle, effect->group);
    if (effect->flags & 8) {
        s32 healthPercent = (combatant->hp * 100) / combatant->maxHp;
        s32 time = owner->battle->drawCounters.markerTimer;
        if (healthPercent < 20) {
            return static_cast<u32>(FUN_001f3e80(0, 255, 30, time, 0)) << 24;
        }
        u32 intensity = FUN_001f3e80(0, 128, 30, time, 0);
        return (intensity << 24) | (intensity << 16) | (intensity << 8);
    }
    if (combatant != NULL && (g_battleEffectSettings.flashMask & combatant->flags) != 0 && (combatant->statusFlags & 0x10) != 0) {
        u8 scaledRed = static_cast<u32>(static_cast<f32>(static_cast<u32>(g_battleEffectSettings.red)) * g_battleEffectSettings.scale);
        u8 scaledGreen = static_cast<u32>(static_cast<f32>(static_cast<u32>(g_battleEffectSettings.green)) * g_battleEffectSettings.scale);
        u8 scaledBlue = static_cast<u32>(static_cast<f32>(static_cast<u32>(g_battleEffectSettings.blue)) * g_battleEffectSettings.scale);
        u32 red = FUN_001f3e80(scaledRed, g_battleEffectSettings.red, g_battleEffectSettings.pulsePeriod, effect->pulseTime, 0);
        u32 green = FUN_001f3e80(scaledGreen, g_battleEffectSettings.green, g_battleEffectSettings.pulsePeriod, effect->pulseTime, 0) & 0xff;
        u32 blue = FUN_001f3e80(scaledBlue, g_battleEffectSettings.blue, g_battleEffectSettings.pulsePeriod, effect->pulseTime, 0) & 0xff;
        return (red << 24) | (green << 16) | (blue << 8) | g_battleEffectSettings.alpha;
    }
    return 0;
}
}
