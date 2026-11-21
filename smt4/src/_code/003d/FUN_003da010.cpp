/* NON_MATCHING: slot address i * 0x8c is built in r0 throughout; retail puts the i * 35 step in r1 */
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {

s32 btlScriptUnitIsIncapacitated(void);
u8 FUN_00249e54(u8 state, u8 *name);
void btlEffectResolveNames(BattleVersionResources *resources);
void btlEffectLoadVersionedResources(BattleVersionResources *resources);
void btlEffectLoadSecondaryResources(BattleVersionResources *resources);
void battleLoadVersionEffectResources(BattleVersionResources *resources);
void textureCachePollReady(void);

/* Registers every "VER"-named resource slot, then loads the battle's versioned effect resources. */
void FUN_003da010(BattleVersionResources *resources)
{
    s32 i;

    btlGetMainState();
    if (btlScriptUnitIsIncapacitated() != 0) {
        return;
    }
    for (i = 0; i < 11; i++) {
        BattleVersionResourceSlot *slot = &resources->slots[i];
        u8 *name = slot->data;

        if (name[0] == 'V' && name[1] == 'E' && name[2] == 'R') {
            slot->state = keyedRecordRegisterName((const char *)slot->work);
            slot->state = FUN_00249e54(slot->state, name);
        }
    }
    btlEffectResolveNames(resources);
    btlEffectLoadVersionedResources(resources);
    btlEffectLoadSecondaryResources(resources);
    battleLoadVersionEffectResources(resources);
    textureCachePollReady();
}

} /* extern "C" */
