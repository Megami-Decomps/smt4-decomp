/* NON_MATCHING: steps the battle summon effect load/spawn (smt4a twin of smt4 FUN_00337360) (state 0 finds or loads the effect resource, state 1 waits for it and creates the effect objects); written from the decompilation, the descending free-slot searches and branch layout not compared with retail */
#include "common.h"

#define SUMMON_CACHE_SLOTS 0x2A
#define SUMMON_STATE_LOAD 0
#define SUMMON_STATE_SPAWN 1
#define SUMMON_NO_EFFECT -1
#define SUMMON_RESOURCE_PARSED 1
#define SUMMON_RESOURCE_READY 2
#define SUMMON_OBJECT_STRIDE 0x408
#define SUMMON_EFFECT_STRIDE 0x1D0
#define SUMMON_FIRST_EFFECT 3
#define SUMMON_LAST_SLOT 0x35

/* A battle object slot (0x408 bytes, observed fields); the first two words are the in-use mask. */
struct SummonObject {
    /* 0x000 */ u32 flagsLow;
    /* 0x004 */ u32 flagsHigh;
    /* 0x008 */ u16 effectId;
    /* 0x00A */ u8 unk00A[0x166];
    /* 0x170 */ s32 summonId;
    /* 0x174 */ u8 unk174[0x294];
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
    /* 0x54 */ u8 unk54[0xC];
    /* 0x60 */ u16 flags60;
    /* 0x62 */ u16 unk62;
    /* 0x64 */ u8 unk64[4];
    /* 0x68 */ s16 objectIndex;
    /* 0x6A */ u16 id;
    /* 0x6C */ u32 scaleX;
    /* 0x70 */ u32 scaleY;
    /* 0x74 */ u32 scaleZ;
    /* 0x78 */ u8 unk78[0x158];
};

struct SummonResource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 id;
};

struct SummonRequest {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ s16 summonId;
};

struct SummonSlot {
    u32 flags;
    s32 id;
};

struct BtlSummonState {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ u8 *effects;
    /* 0x1ED8 */ u8 unk1ED8[0x124];
    /* 0x1FFC */ u8 *objects;
    /* 0x2000 */ u8 unk2000[0x1C];
    /* 0x201C */ SummonSlot slots[SUMMON_CACHE_SLOTS];   /* slots[0] also holds the current effect's flags and id */
    /* 0x216C */ SummonResource *cache[SUMMON_CACHE_SLOTS];
    /* 0x2214 */ u8 unk2214[0x233C];
    /* 0x4550 */ s8 state;
    /* 0x4551 */ u8 unk4551[3];
    /* 0x4554 */ s32 spawned;
    /* 0x4558 */ u32 resource;
};

struct BtlMainEffectState {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ u8 *effects;
};

struct BtlCameraFlags {
    /* 0x000 */ u8 unk000[0x64C];
    /* 0x64C */ u32 flags;
};

struct BtlAuxFlags {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags;
};

extern "C" {
extern u32 g_btlScriptUnit;
extern BtlCameraFlags *g_btlCamera;
extern BtlAuxFlags *g_btlAux;
extern BtlMainEffectState *g_btlMain;
extern u32 DAT_00573978, DAT_0057397c;     /* in-use mask of a battle object slot */
extern u32 DAT_005739b8, DAT_005739bc;     /* flags of a freshly claimed slot */
extern u32 DAT_0057a638, DAT_0057a63c, DAT_0057a64c;
extern u32 DAT_0057aa1c;

void dataTable00FindById(u32 id);
u32 stateEntryFindById(BtlSummonState *state, s32 id);
s32 nkdwLoaderParse(u32 resource);
void aocHandleButtons(u32 resource, s32 mode);
s32 FUN_003fce08(u32 resource, s32 flag);
void btlEnsureEnemyDrawResources(u32 resource, s32 flag);
SummonResource *FUN_00409fe8(s32 id, s32 flag);
void FUN_004cae0c(void *context, void *state, s32 pending, u32 target);
void FUN_004fd204(s32 a, u32 unit, SummonEffect *effect, s32 b, s32 c, s32 d);
u32 btlUnitGet(u32 unit);
void FUN_004fe764(s32 a, u32 unit, SummonEffect *effect, u32 b, s32 c);
void FUN_004cb90c(s32 flag);
void nameEntriesRegisterVerNames(void *work);

/* Returns 1 once the summon has been spawned. */
u32 FUN_003ea2b0(BtlSummonState *state, u32 request)
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
            state->slots[0].flags |= SUMMON_RESOURCE_PARSED | SUMMON_RESOURCE_READY;
            state->slots[0].id = id;
        } else {
            SummonResource *loaded = FUN_00409fe8(id, 1);
            for (s32 i = 0; i < SUMMON_CACHE_SLOTS; i++) {
                if (state->cache[i] == NULL) {
                    state->cache[i] = loaded;
                    break;
                }
            }
            state->slots[0].id = source->summonId;
        }
        g_btlCamera->flags |= 0x4000;
        if ((g_btlAux->flags & 0x400) != 0)
            nameEntriesRegisterVerNames(g_btlAux);
        state->state = SUMMON_STATE_SPAWN;
        return 0;
    }
    if (state->state != SUMMON_STATE_SPAWN)
        return 0;

    u32 resource = stateEntryFindById(state, state->slots[0].id);
    if ((state->slots[0].flags & SUMMON_RESOURCE_PARSED) == 0) {
        if (nkdwLoaderParse(resource) == 0)
            return 0;
        state->slots[0].flags |= SUMMON_RESOURCE_PARSED;
        aocHandleButtons(resource, 7);
    }
    if ((state->slots[0].flags & SUMMON_RESOURCE_READY) == 0) {
        if (FUN_003fce08(resource, 1) == 0)
            return 0;
        btlEnsureEnemyDrawResources(resource, 1);
        state->slots[0].flags |= SUMMON_RESOURCE_READY;
        state->resource = resource;
    }

    /* Claim the last free object slot, then the last free effect slot. */
    s32 objectIndex = SUMMON_LAST_SLOT;
    for (;;) {
        SummonObject *candidate = reinterpret_cast<SummonObject *>(state->objects + objectIndex * SUMMON_OBJECT_STRIDE);
        bool inUse = (candidate->flagsLow & DAT_00573978) != 0 || (candidate->flagsHigh & DAT_0057397c) != 0;
        if (!inUse || objectIndex == -1)
            break;
        objectIndex--;
    }
    SummonObject *object = reinterpret_cast<SummonObject *>(state->objects + objectIndex * SUMMON_OBJECT_STRIDE);
    object->flagsLow = DAT_00573978 | DAT_005739b8;
    object->flagsHigh = DAT_0057397c | DAT_005739bc;

    s32 effectIndex = SUMMON_LAST_SLOT;
    while (effectIndex != SUMMON_FIRST_EFFECT
           && (*reinterpret_cast<u32 *>(state->effects + effectIndex * SUMMON_EFFECT_STRIDE + 0x50) & 1) != 0)
        effectIndex--;
    SummonEffect *effect = reinterpret_cast<SummonEffect *>(g_btlMain->effects + effectIndex * SUMMON_EFFECT_STRIDE);
    effect->flags = 0x20483;
    effect->objectIndex = (s16)objectIndex;
    effect->unk0C = 0;
    effect->unk10 = 0;
    effect->height = 15.0f;
    effect->unk62 = 0;
    effect->scaleX = DAT_0057aa1c;
    effect->scaleY = DAT_0057aa1c;
    effect->scaleZ = DAT_0057aa1c;
    FUN_004cb90c(1);
    effect->unk40 = 0;
    effect->flags60 |= 0x800;
    object->summonId = source->summonId;
    object->effectId = effect->id;
    state->spawned = effectIndex;
    state->state = SUMMON_STATE_LOAD;

    s16 offsetA = (s16)DAT_0057a638;
    s16 offsetB = (s16)DAT_0057a64c;
    s16 offsetC = (s16)DAT_0057a63c;
    FUN_004cae0c(state, effect, 0, 0);
    FUN_004fd204(offsetB + offsetA, btlUnitGet(g_btlScriptUnit), effect, 0xFF, offsetC, 0);
    u32 reflectKind = (effect->flags & 0x10) != 0 ? 7 : 6;
    FUN_004fe764(offsetB, btlUnitGet(g_btlScriptUnit), effect, reflectKind, 0xD);
    return 1;
}

} /* extern "C" */
