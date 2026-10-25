/* NON_MATCHING: steps the battle summon effect load/spawn (state 0 finds or loads the effect resource, state 1 waits for it and creates the effect objects); written from the decompilation, the descending free-slot searches and branch layout not compared with retail */
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "battle/BattleUnitSlot.h"

#define SUMMON_CACHE_SLOTS 0x2A
#define SUMMON_STATE_LOAD 0
#define SUMMON_STATE_SPAWN 1
#define SUMMON_NO_EFFECT -1
#define SUMMON_RESOURCE_PARSED 1
#define SUMMON_RESOURCE_READY 2
#define SUMMON_OBJECT_STRIDE 0x288
#define SUMMON_EFFECT_STRIDE 0x114
#define SUMMON_FIRST_EFFECT 3
#define SUMMON_LAST_SLOT 0x35

struct SummonObject {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u16 effectId;
    /* 0x00A */ u8 unk00A[0xCE];
    /* 0x0D8 */ s32 summonId;
    /* 0x0DC */ u8 unk0DC[0x1AC];
};

struct SummonEffect {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ f32 height;
    /* 0x18 */ u8 unk18[0x28];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u8 unk44[0xC];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u16 flags58;
    /* 0x5A */ u16 unk5A;
    /* 0x5C */ u8 unk5C[4];
    /* 0x60 */ s16 objectIndex;
    /* 0x62 */ u16 id;
    /* 0x64 */ u32 scaleX;
    /* 0x68 */ u32 scaleY;
    /* 0x6C */ u32 scaleZ;
    /* 0x70 */ u8 unk70[0xA4];
};

struct SummonResource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 id;
};

struct SummonRequest {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ s16 summonId;
};

struct SummonSlot {
    u32 flags;
    s32 id;
};

struct BtlSummonState {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ u8 *effects;
    /* 0x1E9C */ u8 unk1E9C[0x124];
    /* 0x1FC0 */ u8 *objects;
    /* 0x1FC4 */ u8 unk1FC4[0x20];
    /* 0x1FE4 */ SummonSlot slots[SUMMON_CACHE_SLOTS];   /* slots[0] also holds the current effect's flags and id */
    /* 0x2134 */ SummonResource *cache[SUMMON_CACHE_SLOTS];
    /* 0x21DC */ u8 unk21DC[0x2274];
    /* 0x4450 */ s8 state;
    /* 0x4451 */ u8 unk4451[3];
    /* 0x4454 */ s32 spawned;
    /* 0x4458 */ u32 resource;
};

struct BtlMainFlags {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 flags;
};

struct BtlMainEffectState {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ u8 *effects;
};

extern "C" {
extern u32 g_btlScriptUnit;
extern BtlMainFlags *g_btlMain;
extern BattleVersionResources *DAT_00435d18;
extern BtlMainEffectState *g_btlMainState;
extern u32 DAT_00439a24, DAT_00439a28, DAT_00439a38, DAT_00439cf8;

void dataTable00FindById(u32 id);
u32 FUN_0027d9e8(BtlSummonState *state, s32 id);
s32 nkdwHeaderParse(u32 resource);
void aocHandleButtons(u32 resource, s32 mode);
s32 FUN_00294fe0(u32 resource);
void modelAnimationEnsureData(u32 resource);
SummonResource *FUN_00294090(s32 id, s32 flag);
void FUN_0024057c(BtlSummonState *state, SummonEffect *effect, s32 flag);
void FUN_002451c4(s32 a, u32 unit, SummonEffect *effect, s32 b, s32 c, s32 d);
void btlReflectInitKind9(s32 a, u32 unit, SummonEffect *effect, u32 b, s32 c);
void FUN_003c1964(s32 flag);
void FUN_00240614(BattleVersionResources *resources);

/* Returns 1 once the summon has been spawned. */
u32 FUN_00337360(BtlSummonState *state, u32 request)
{
    if (state->spawned != SUMMON_NO_EFFECT)
        return 1;

    u32 summon = request & 0xFFFF;
    dataTable00FindById(summon);
    SummonRequest *source = reinterpret_cast<SummonRequest *>(request);

    if (state->state == SUMMON_STATE_LOAD) {
        for (s32 i = 0; i < SUMMON_CACHE_SLOTS; i++) {
            state->slots[i].flags = 0;
            state->slots[i].id = -1;
        }
        state->resource = 0;
        s32 id = source->summonId;
        s32 cached = 0;
        for (s32 i = 0; i < SUMMON_CACHE_SLOTS; i++) {
            SummonResource *held = state->cache[i];
            if (held != NULL && held->id == id) {
                cached = 1;
                break;
            }
        }
        if (cached != 0) {
            state->slots[0].id = id;
            state->slots[0].flags |= SUMMON_RESOURCE_PARSED | SUMMON_RESOURCE_READY;
        } else {
            SummonResource *loaded = FUN_00294090(id, 1);
            SummonResource **table = state->cache;
            for (s32 i = 0; i < SUMMON_CACHE_SLOTS; i++) {
                if (table[i] == NULL) {
                    table[i] = loaded;
                    break;
                }
            }
            state->slots[0].id = source->summonId;
        }
        g_btlMain->flags |= 0x4000;
        if ((*reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(DAT_00435d18) + 0x3028) & 0x400) != 0)
            FUN_00240614(DAT_00435d18);
        state->state = SUMMON_STATE_SPAWN;
        return 0;
    }
    if (state->state != SUMMON_STATE_SPAWN)
        return 0;

    u32 resource = FUN_0027d9e8(state, state->slots[0].id);
    if ((state->slots[0].flags & SUMMON_RESOURCE_PARSED) == 0) {
        if (nkdwHeaderParse(resource) == 0)
            return 0;
        state->slots[0].flags |= SUMMON_RESOURCE_PARSED;
        aocHandleButtons(resource, 7);
    }
    if ((state->slots[0].flags & SUMMON_RESOURCE_READY) == 0) {
        if (FUN_00294fe0(resource) == 0)
            return 0;
        modelAnimationEnsureData(resource);
        state->slots[0].flags |= SUMMON_RESOURCE_READY;
        state->resource = resource;
    }

    s32 objectIndex = SUMMON_LAST_SLOT;
    while (objectIndex != -1 && (*reinterpret_cast<u32 *>(state->objects + objectIndex * SUMMON_OBJECT_STRIDE) & 1) != 0)
        objectIndex--;
    SummonObject *object = reinterpret_cast<SummonObject *>(state->objects + objectIndex * SUMMON_OBJECT_STRIDE);
    object->flags = 0x200001;
    object->unk004 = 0;

    s32 effectIndex = SUMMON_LAST_SLOT;
    while (effectIndex != SUMMON_FIRST_EFFECT
           && (*reinterpret_cast<u32 *>(state->effects + effectIndex * SUMMON_EFFECT_STRIDE + 0x50) & 1) != 0)
        effectIndex--;
    SummonEffect *effect = reinterpret_cast<SummonEffect *>(g_btlMainState->effects + effectIndex * SUMMON_EFFECT_STRIDE);
    effect->flags = 0x20483;
    effect->objectIndex = (s16)objectIndex;
    effect->unk0C = 0;
    effect->unk10 = 0;
    effect->height = 15.0f;
    effect->unk5A = 0;
    effect->scaleX = DAT_00439cf8;
    effect->scaleY = DAT_00439cf8;
    effect->scaleZ = DAT_00439cf8;
    FUN_003c1964(1);
    effect->unk40 = 0;
    effect->flags58 |= 0x800;
    object->summonId = source->summonId;
    object->effectId = effect->id;
    state->spawned = effectIndex;
    state->state = SUMMON_STATE_LOAD;

    s16 offsetA = (s16)DAT_00439a24;
    s16 offsetB = (s16)DAT_00439a38;
    s16 offsetC = (s16)DAT_00439a28;
    FUN_0024057c(state, effect, 0);
    FUN_002451c4(offsetB + offsetA, reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit))), effect, 0xFF, offsetC, 0);
    u32 reflectKind = (effect->flags & 0x10) != 0 ? 7 : 6;
    btlReflectInitKind9(offsetB, reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit))), effect, reflectKind, 0xD);
    return 1;
}

} /* extern "C" */
