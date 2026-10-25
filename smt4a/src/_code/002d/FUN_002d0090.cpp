#include "battle/btlView.h"
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

static inline void attachBattleView(BattleViewState *state, BattleViewOwner **slot)
{
    FUN_0040ab7c(*slot, 2);
    FUN_0040aad4(*slot, state->attachments.primary[0]->object);
    handleRegistryRegisterObject(g_handleRegistry, (*slot)->object);
}

// Attach all six battle-view objects once their resources are ready.
extern "C" s32 FUN_002d0090()
{
    BattleViewState *state = gameFlagIsSet(0x4d0) ? &g_battleViewState : NULL;
    if (state == NULL)
        return 1;
    s32 ready = FUN_0040ab8c(state->attachments.primary[0]);
    if (!ready) return ready;
    ready = FUN_0040ab8c(state->attachments.primary[1]);
    if (!ready) return ready;
    ready = FUN_0040ab8c(state->attachments.primary[2]);
    if (!ready) return ready;
    ready = FUN_0040ab8c(state->children[0]);
    if (!ready) return ready;
    ready = FUN_0040ab8c(state->children[1]);
    if (!ready) return ready;
    ready = FUN_0040ab8c(state->children[2]);
    if (!ready) return ready;
    FUN_0040ab7c(state->attachments.primary[0], 2);
    activateBattleView(&state->attachments.primary[0]);
    activateBattleView(&state->attachments.primary[1]);
    activateBattleView(&state->attachments.primary[2]);
    attachBattleView(state, &state->children[0]);
    attachBattleView(state, &state->children[1]);
    attachBattleView(state, &state->children[2]);
    state->attachments.state = 1;
    return 1;
}
