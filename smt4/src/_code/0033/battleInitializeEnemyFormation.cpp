/* NON_MATCHING: the 64-bit flag loop uses different unroll indexing, zero registers and store grouping; a formation-ID reload is coalesced and the larger saved-register set changes the frame. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "AsdSDK/AsdMemUtil.h"
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"

struct DevilDefinition;
struct BattleEnemyFormation {
    u32 ids[6];
    u8 unk18[0x18];
    f32 scaleX;
    f32 scaleY;
    u8 unk38[0x1e];
    u8 deferred;
    u8 unk57;
    u32 sequence;
    u8 sequenceParameters[0x18];
};
struct BattleEnemyFormationView {
    u8 unk00[0xc8];
    BattleEnemyFormation formation;
};
struct BattleUnitPayloadView {
    u8 unk000[0xcc];
    u8 data[0x18c];
};
struct BattleUnitFlagPrefix {
    u64 flags;
};
struct BattleEnemyRuntimeView {
    u8 unk0000[0x48bc];
    u8 data[0xa8];
    u32 count;
};

extern "C" {
void FUN_0027dc24(BtlMainState *state, BattleEnemyFormation *formation, s32 mode);
const DevilDefinition *dataTable00FindById(u16 id);
void FUN_0023ebc8(BtlMainState *state, u8 *payload, const DevilDefinition *definition);
void FUN_00255e38(BtlMainState *state, u8 *payload, s32 kind, s32 slot, s32 flags);
void sequenceRequestDeferEx(u32 sequence, const void *parameters);
}

static __inline BattleEnemyFormation *battleEnemyFormation(BtlMainState *state)
{
    return &reinterpret_cast<BattleEnemyFormationView *>(state)->formation;
}

static __inline u8 *battleUnitPayload(BtlEntry *unit)
{
    return reinterpret_cast<BattleUnitPayloadView *>(unit)->data;
}

static __inline void battleUnitClearFlags(BtlEntry *unit)
{
    reinterpret_cast<BattleUnitFlagPrefix *>(unit)->flags = 0;
}

extern "C" void battleInitializeEnemyFormation(BtlMainState *state)
{
    for (s32 index = 0; index < 50; ++index) {
        battleUnitClearFlags(&state->entries[index + 4]);
    }
    BattleEnemyFormation *formation = battleEnemyFormation(state);
    memClear(formation, sizeof(*formation));
    formation->ids[0] = 0;
    formation->ids[1] = 0;
    formation->ids[2] = 0;
    formation->ids[3] = 0;
    formation->ids[4] = 0;
    formation->ids[5] = 0;
    formation->scaleX = 1.0f;
    formation->scaleY = 1.0f;
    FUN_0027dc24(state, battleEnemyFormation(state), 1);
    if (g_btlMainState.enemyOverride > 0) {
        const DevilDefinition *definition = dataTable00FindById(g_btlMainState.enemyOverride);
        BtlEntry temporary;
        FUN_0023ebc8(state, battleUnitPayload(&temporary), definition);
        FUN_00255e38(state, battleUnitPayload(&temporary), 1, 4, 0);
    } else {
        for (u16 index = 0; index < 6; ++index) {
            if (battleEnemyFormation(state)->ids[index] != 0) {
                const DevilDefinition *definition = dataTable00FindById(battleEnemyFormation(state)->ids[index]);
                if (definition != NULL) {
                    BtlEntry temporary;
                    FUN_0023ebc8(state, battleUnitPayload(&temporary), definition);
                    FUN_00255e38(state, battleUnitPayload(&temporary), 1, index + 4, 0);
                }
            }
        }
    }
    if (battleEnemyFormation(state)->deferred == 1) {
        sequenceRequestDeferEx(battleEnemyFormation(state)->sequence, battleEnemyFormation(state)->sequenceParameters);
    }
    BattleEnemyRuntimeView *runtime = reinterpret_cast<BattleEnemyRuntimeView *>(state);
    runtime->count = 0;
    memClear(runtime->data, sizeof(runtime->data));
}
