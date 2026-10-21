/* NON_MATCHING: variant constants/registers and shared-store block placement differ; actor-table base loads and final render-flag update use different registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleEffects.h"

struct BattleEffectMainHeader {
    u8 unk000[0x113];
    s8 variant;
};

struct BattleEffectActorInfo {
    u8 unk00[0xa2];
    u8 variant;
};

struct BattleEffectGroup {
    u8 unk00[0xc];
    u32 handles[1];
};

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;
s32 FUN_003eebf4(BtlMainStateA *, s32 side);
BattleEffectActorInfo *dataTable00FindById(u16 id);
void FUN_004cb9d0(BattleEffectSetup *);
s32 idSetFindSubjectIndex(BtlMainStateA *, BattleEffectSetup *);
BattleEffectGroup *FUN_001568f8(BtlMainStateA *, s32 group);
u32 stateEntryFindById(BtlMainStateA *, u32 handle);
f32 asdAnimGetTrackLastFrame(u32 handle, s32 index);
u16 randRange(u16 maximum);

// Resolve the effect variant, reset its position/state and choose an initial animation frame.
void battleEffectInitializeVariant(BtlMainStateA *battle, BattleEffectSetup *effect)
{
    u32 flags = effect->flags | 2;
    effect->flags = flags;
    if (!(flags & 0x10)) {
        if (!(flags & 0x8000)) {
            if (g_battleEffectSettings.variant < 0) {
                s8 variant = reinterpret_cast<BattleEffectMainHeader *>(battle)->variant;
                if (variant >= 0) {
                    switch (variant) {
                    case 0: effect->variant = 1; break;
                    case 1: effect->variant = 0; break;
                    case 2: effect->variant = 2; break;
                    }
                } else if (FUN_003eebf4(battle, 1) < 0) {
                    effect->variant = 0;
                } else {
                    s32 index = FUN_003eebf4(battle, 1);
                    BattleEffectActorInfo *info = dataTable00FindById(battle->entries[index].id);
                    if (info->variant == 1 || info->variant == 3) {
                        effect->variant = 1;
                    } else {
                        effect->variant = 0;
                    }
                }
            } else if (g_battleEffectSettings.variant == 0) {
                effect->variant = 0;
            } else if (g_battleEffectSettings.variant == 1) {
                effect->variant = 1;
            } else if (g_battleEffectSettings.variant == 2) {
                effect->variant = 2;
            }
            effect->position[0] = 0.0f;
            effect->position[1] = 0.0f;
            effect->position[2] = 0.0f;
            FUN_004cb9d0(effect);
        }
        u32 initialValue = g_battleEffectSettings.defaultValue;
        effect->value6c = initialValue;
        effect->value70 = initialValue;
        s32 index = idSetFindSubjectIndex(battle, effect);
        if (index < 0) {
            index = 0;
        }
        BattleEffectGroup *group = FUN_001568f8(battle, effect->group);
        u32 handle = stateEntryFindById(battle, group->handles[index]);
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
