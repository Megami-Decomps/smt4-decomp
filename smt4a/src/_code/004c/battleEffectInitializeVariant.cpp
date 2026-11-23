/* NON_MATCHING: retail places the header-variant compare chain first and shares the three variant stores with the settings chain; the build lays the complex arm first and keeps hoisted constants in different registers. */
#include "battle/btlMain.h"
#include "util/Random.h"
#include "battle/BtlEntryLookup.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/BtlEntryLookup.h"

struct BattleEffectMainHeader {
    u8 unk000[0x113];
    s8 variant;
};

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;
s32 btlFindSelectionIndexByOrdinal(BtlMainStateA *, s32 side);
void battleEffectUpdateProjectionScale(BattleEffectSetup *);
s32 idSetFindSubjectIndex(BtlMainStateA *, BattleEffectSetup *);
u32 stateEntryFindById(BtlMainStateA *, u32 handle);
f32 asdAnimGetTrackLastFrame(u32 handle, s32 index);

// Resolve the effect variant, reset its position/state and choose an initial animation frame.
void battleEffectInitializeVariant(BtlMainStateA *battle, BattleEffectSetup *effect)
{
    u32 flags = effect->flags | 2;
    effect->flags = flags;
    if (!(flags & 0x10)) {
        if (!(flags & 0x8000)) {
            s32 forced = g_battleEffectSettings.variant;
            if (forced < 0) {
                s8 variant = reinterpret_cast<BattleEffectMainHeader *>(battle)->variant;
                if (variant < 0) {
                    if (btlFindSelectionIndexByOrdinal(battle, 1) < 0) {
                        effect->variant = 0;
                    } else {
                        s32 index = btlFindSelectionIndexByOrdinal(battle, 1);
                        NkmEnemyRecordA *info = nkmEnemyFindById(battle->entries[index].data.id);
                        if (info->bustUp == 1 || info->bustUp == 3) {
                            effect->variant = 1;
                        } else {
                            effect->variant = 0;
                        }
                    }
                } else {
                    switch (variant) {
                    case 0: effect->variant = 1; break;
                    case 1: effect->variant = 0; break;
                    case 2: effect->variant = 2; break;
                    }
                }
            } else if (forced == 0) {
                effect->variant = 0;
            } else if (forced == 1) {
                effect->variant = 1;
            } else if (forced == 2) {
                effect->variant = 2;
            }
            effect->position[0] = 0.0f;
            effect->position[1] = 0.0f;
            effect->position[2] = 0.0f;
            battleEffectUpdateProjectionScale(effect);
        }
        u32 initialValue = g_battleEffectSettings.defaultValue;
        effect->value6c = initialValue;
        effect->value70 = initialValue;
        s32 index = idSetFindSubjectIndex(battle, effect);
        if (index < 0) {
            index = 0;
        }
        BtlUnitDataA *group = btlFindEntryBlockByMemberId(battle, effect->group);
        u32 handle = stateEntryFindById(battle, group->parts[index]);
        f32 frames = asdAnimGetTrackLastFrame(handle, 0);
        effect->frame = randRange(static_cast<u16>(static_cast<s32>(frames) - 1));
    }
    effect->opacity = 0xff;
    u32 resetValue = g_battleEffectSettings.defaultValue;
    effect->value74 = resetValue;
    effect->value94 = resetValue;
    effect->value98 = resetValue;
    effect->renderFlags = (effect->renderFlags & ~2u) | 4;
}
}
