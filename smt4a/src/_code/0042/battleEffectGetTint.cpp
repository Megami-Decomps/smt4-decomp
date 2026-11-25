/* NON_MATCHING: the colour arithmetic and pack match. The health percentage, flag-mask loads,
 * and temporary registers for the initial colour reads still differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"

struct BattleTintOwner {
    u32 unk00;
    BtlMainStateA *battle;
};

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;
s32 mathTriangleWaveBlend(s32 first, s32 second, s32 period, s32 time, s32 invert);

/* Computes the pulsing low-health or status tint for the combatant in this cell. */
u32 battleEffectGetTint(BattleTintOwner *owner, s32 index)
{
    BtlMainStateA *battle = owner->battle;
    BattleEffectSetup *effect = &battle->roster[index].render;
    BtlCombatantEntryA *combatant = btlMainFindEntryByListedId(battle, effect->group);
    if (effect->flags & 8) {
        s32 healthPercent = (combatant->data.hp * 100) / combatant->data.maxHp;
        if (healthPercent < 20) {
            return (u32)mathTriangleWaveBlend(0, 255, 30, owner->battle->drawCounters.markerTimer, 0) << 24;
        }
        u32 intensity = mathTriangleWaveBlend(0, 128, 30, owner->battle->drawCounters.markerTimer, 0);
        return (intensity << 24) | (intensity << 16) | (intensity << 8);
    }
    if (combatant != NULL && (combatant->flags & g_battleEffectSettings.flashMask) != 0 && (combatant->data.statusFlags & 0x10) != 0) {
        const u8 paletteRed = g_battleEffectSettings.red;
        const u8 paletteGreen = g_battleEffectSettings.green;
        const u8 paletteBlue = g_battleEffectSettings.blue;
        const f32 depth = g_battleEffectSettings.scale;
        u8 scaledRed = (u8)((f32)paletteRed * depth);
        u8 scaledGreen = (u8)((f32)paletteGreen * depth);
        u8 scaledBlue = (u8)((f32)paletteBlue * depth);
        u8 red = mathTriangleWaveBlend(scaledRed, g_battleEffectSettings.red, g_battleEffectSettings.pulsePeriod, effect->pulseTime, 0);
        u8 green = mathTriangleWaveBlend(scaledGreen, g_battleEffectSettings.green, g_battleEffectSettings.pulsePeriod, effect->pulseTime, 0);
        u8 blue = mathTriangleWaveBlend(scaledBlue, g_battleEffectSettings.blue, g_battleEffectSettings.pulsePeriod, effect->pulseTime, 0);
        u32 rgb = ((u32)red << 24) | ((u32)green << 16) | ((u32)blue << 8);
        return rgb | g_battleEffectSettings.alpha;
    }
    return 0;
}
} /* extern "C" */
