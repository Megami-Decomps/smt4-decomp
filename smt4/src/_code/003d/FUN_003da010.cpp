/* NON_MATCHING: slot address i * 0x8c is built in r0 throughout; retail puts the i * 35 step in r1 */
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "battle/BtlMainAccess.h"

extern "C" {

s32 FUN_00293230(void);
u8 keyedRecordRegisterName(u8 *work);
u8 FUN_00249e54(u8 state, u8 *name);
void FUN_003dbc1c(BattleVersionResources *resources);
void btlEffectLoadVersionedResources(BattleVersionResources *resources);
void btlEffectLoadSecondaryResources(BattleVersionResources *resources);
void battleLoadVersionEffectResources(BattleVersionResources *resources);
void FUN_0024679c(void);

/* Registers every "VER"-named resource slot, then loads the battle's versioned effect resources. */
void FUN_003da010(BattleVersionResources *resources)
{
    s32 i;

    btlGetMainState();
    if (FUN_00293230() != 0) {
        return;
    }
    for (i = 0; i < 11; i++) {
        BattleVersionResourceSlot *slot = &resources->slots[i];
        u8 *name = slot->data;

        if (name[0] == 'V' && name[1] == 'E' && name[2] == 'R') {
            slot->state = keyedRecordRegisterName(slot->work);
            slot->state = FUN_00249e54(slot->state, name);
        }
    }
    FUN_003dbc1c(resources);
    btlEffectLoadVersionedResources(resources);
    btlEffectLoadSecondaryResources(resources);
    battleLoadVersionEffectResources(resources);
    FUN_0024679c();
}

} /* extern "C" */
