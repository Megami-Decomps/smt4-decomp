/* NON_MATCHING: logic, stack layout and inlined FUN_00482b08 body match; armcc allocates the pool/slot/index registers one higher (pool r5, slot r4) than retail (pool r4, slot fp), same inversion as FUN_00482b08 */
#include "map/ControllerPool.h"
#include "shard/W5_W5Match7_SceneState.h"
#include <math.h>

/* One placed controller of the current map: where it stands and the flags that gate it. */
struct ControllerPlacement {
    /* 0x00 */ s8 kind;
    /* 0x01 */ s8 sub;
    /* 0x02 */ s16 x;
    /* 0x04 */ s16 y;
    /* 0x06 */ s16 z;
    /* 0x08 */ s16 heading;
    /* 0x0A */ u8 unk0A[6];
    /* 0x10 */ s16 sourceValue;
    /* 0x12 */ u16 modelId;
    /* 0x14 */ s16 requiredFlag;
    /* 0x16 */ s16 forbiddenFlag;
    /* 0x18 */ s16 param0;
    /* 0x1A */ s16 param1;
    /* 0x1C */ u32 param2;
    /* 0x20 */ s16 param3;
    /* 0x22 */ s16 param4;
};

struct ControllerParams95 {
    /* 0x00 */ u8 unk00[0xAC];
};

extern "C" {
s32 dataTableGetRecordFifty(void);
void gameFlagsGetBlock(void);
const ControllerPlacement *FUN_00379958(u32 index);
s32 FUN_003ded68(u16 id);
s32 gameFlagIsSetByBlockAt156c(s32 flag);
s32 gameFlagIsSet(s32 flag);
void callbackCreateControllerForKind(Controller *controller, u32 callback);
void stateSetterSetFlag8(Controller *controller);
void FUN_004824fc(Controller *controller, s32 context);
void FUN_00482414(Controller *controller, const MapVector *position);
void FUN_00482428(Controller *controller, const MapVector *size);
void FUN_0048269c(Controller *controller, const MapVector *rotation);
void FUN_0048286c(Controller *controller);
void params95Set(Controller *controller, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
}

/* FUN_00482b08 for the second controller kind, inlined by the compiler. */
static inline Controller *createSecondKindController(ControllerPool *pool, u32 callback)
{
    s32 slot;
    if (pool->count >= 16) {
        return NULL;
    }
    for (slot = 0; slot < 32; slot += 2) {
        if (pool->slots[slot] == NULL) {
            break;
        }
        if (pool->slots[slot + 1] == NULL) {
            slot++;
            break;
        }
    }
    pool->slots[slot] = new ControllerSecondKind();
    callbackCreateControllerForKind(pool->slots[slot], callback);
    pool->slots[slot]->vtable->start(pool->slots[slot]);
    pool->slots[slot]->child->vtable->start(pool->slots[slot]->child);
    pool->count++;
    return pool->slots[slot];
}

extern "C" {
/* Creates the controllers of the placements that belong to this pool's map area and are not yet taken. */
void FUN_00482fe8(ControllerPool *pool)
{
    s32 count = dataTableGetRecordFifty();
    gameFlagsGetBlock();
    for (s32 index = 0; index < count; index++) {
        const ControllerPlacement *placement = FUN_00379958(index);
        if (placement->kind == -1) {
            continue;
        }
        if (placement->kind < 100 || FUN_003ded68(placement->modelId) == 0 || placement->kind != pool->filterKind ||
            placement->sub != pool->filterSub || gameFlagIsSetByBlockAt156c((s16)index) != 0 ||
            (placement->requiredFlag != 0 && gameFlagIsSet(placement->requiredFlag) == 0) ||
            (placement->forbiddenFlag != 0 && gameFlagIsSet(placement->forbiddenFlag) != 0)) {
            continue;
        }
        Controller *controller = createSecondKindController(pool, 2);
        if (controller == NULL) {
            continue;
        }
        MapVector size;
        MapVector position;
        MapVector rotation;
        size.x = 50.0f;
        size.y = static_cast<f32>(placement->heading);
        size.z = 50.0f;
        rotation.x = 0.0f;
        rotation.y = 0.0f;
        rotation.z = 0.0f;
        position.x = static_cast<f32>(placement->x);
        position.y = static_cast<f32>(placement->y);
        position.z = static_cast<f32>(placement->z);
        const MapVector *player = &g_lmapScene->position;
        f32 dx = position.x - player->x;
        f32 dy = position.y - player->y;
        f32 dz = position.z - player->z;
        union {
            f32 asFloat;
            s32 asBits;
        } distance;
        distance.asFloat = sqrtf(dx * dx + dy * dy + dz * dz);
        if (distance.asBits < 0x43480000) {
            FUN_0048286c(controller);
        }
        stateSetterSetFlag8(controller);
        FUN_004824fc(controller, pool->context);
        FUN_00482414(controller, &position);
        FUN_00482428(controller, &size);
        FUN_0048269c(controller, &rotation);
        controller->sourceValue = placement->sourceValue;
        controller->unk64 = 0;
        params95Set(controller, index, placement->param0, placement->param1, placement->param2,
                    placement->param3, placement->param4);
    }
}
}
