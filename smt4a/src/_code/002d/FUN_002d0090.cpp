#include "shard/W5_W5Match5_BattleViewState.h"
#include <stddef.h>

typedef char CheckViewStateSize[sizeof(BattleViewState) == 0xd4 ? 1 : -1];
typedef char CheckViewChildrenOffset[offsetof(BattleViewState, children) == 0xc8 ? 1 : -1];
typedef char CheckViewPrimaryOffset[offsetof(BattleViewState, attachments.primary) == 0xc ? 1 : -1];

extern "C" {
extern BattleViewState g_battleViewState;
extern void *g_handleRegistry;
s32 gameFlagIsSet(u32 flag);
s32 FUN_0040ab8c(BattleViewOwner *owner);
void FUN_0040ab7c(BattleViewOwner *owner, s32 mode);
void FUN_0040aad4(BattleViewOwner *owner, BattleViewObject *parent);
void FUN_003fd7b4(BattleViewObject *object, f32 x, f32 y, f32 z);
void FUN_003fe86c(BattleViewObject *object, s32 first, s32 second, f32 x, f32 y);
void handleRegistryRegisterObject(void *registry, BattleViewObject *object);
}

static inline void activateBattleView(BattleViewOwner **slot)
{
    FUN_0040aad4(*slot, NULL);
    BattleViewObject *object = (*slot)->object;
    FUN_003fd7b4(object, 0.0f, 0.0f, 0.0f);
    FUN_003fe86c(object, 0, 2, 0.0f, 0.0f);
    handleRegistryRegisterObject(g_handleRegistry, object);
    object->flags |= 1;
}

static inline void attachBattleView(BattleViewOwner **slot)
{
    FUN_0040ab7c(*slot, 2);
    FUN_0040aad4(*slot, g_battleViewState.attachments.primary[0]->object);
    handleRegistryRegisterObject(g_handleRegistry, (*slot)->object);
}

// Attach all six battle-view objects once their resources are ready.
extern "C" s32 FUN_002d0090()
{
    if (!gameFlagIsSet(0x4d0))
        return 1;
    BattleViewState *state = &g_battleViewState;
    if (!FUN_0040ab8c(state->attachments.primary[0]) ||
        !FUN_0040ab8c(state->attachments.primary[1]) ||
        !FUN_0040ab8c(state->attachments.primary[2]) ||
        !FUN_0040ab8c(state->children[0]) ||
        !FUN_0040ab8c(state->children[1]) ||
        !FUN_0040ab8c(state->children[2]))
        return 0;
    FUN_0040ab7c(state->attachments.primary[0], 2);
    activateBattleView(&state->attachments.primary[0]);
    activateBattleView(&state->attachments.primary[1]);
    activateBattleView(&state->attachments.primary[2]);
    attachBattleView(&state->children[0]);
    attachBattleView(&state->children[1]);
    attachBattleView(&state->children[2]);
    state->attachments.attached = 1;
    return 1;
}
