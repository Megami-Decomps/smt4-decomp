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

/* Registers every "VER"-named resource slot: the body of nameEntriesRegisterVerNames, which retail inlines here. */
static __inline void registerVersionNames(BattleVersionResources *resources)
{
    for (s32 index = 0; index < 11; ++index) {
        BattleVersionResourceSlot *slot = &resources->slots[index];
        u8 *data = slot->data;
        if (data[0] == 'V' && data[1] == 'E' && data[2] == 'R') {
            u32 state = keyedRecordRegisterName((const char *)slot->work);
            slot->state = state;
            slot->state = FUN_00249e54(state, data);
        }
    }
}

/* Registers every "VER"-named resource slot, then loads the battle's versioned effect resources. */
void btlEffectLoadVersionedSet(BattleVersionResources *resources)
{
    btlGetMainState();
    if (btlScriptUnitIsIncapacitated() != 0) {
        return;
    }
    registerVersionNames(resources);
    btlEffectResolveNames(resources);
    btlEffectLoadVersionedResources(resources);
    btlEffectLoadSecondaryResources(resources);
    battleLoadVersionEffectResources(resources);
    textureCachePollReady();
}

} /* extern "C" */
