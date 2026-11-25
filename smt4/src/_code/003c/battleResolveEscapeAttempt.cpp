#include "battle/btlMain.h"
#include "util/Random.h"
#include "battle/btlEvent.h"
#include "shard/W4_Match6_BtlScript.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "battle/btlHelp.h"
#include "battle/btlEditor.h"
#include "battle/BtlGlobals.h"

enum {
    BTL_ESCAPE_RESTRICTED = 0x40000,
    BTL_ESCAPE_FAILED = 0x2000,
    BTL_RESULT_ESCAPED = 4,
    BTL_EVENT_ESCAPE = 6,
    BTL_COUNTER_ESCAPE = 4,
    BTL_COUNTER_ESCAPE_FAILED = 5
};

struct BattleRetreatOwner { BtlMainState *script; };
struct BattleRetreatAction {
    u8 unk000[0x24];
    u32 argument;
    u8 unk028[0x544];
    u32 result;
};
struct BattleRetreatResourceFields {
    u8 unk0000[0x3028];
    u32 flags;
};

extern "C" {
extern BattleVersionResources *g_btlAux;
extern BtlEvent *g_btlEvent;
bool FUN_00256940(BtlCamera *, const BtlMainState *, s32);
void btlReflectQueueKind34(s16, u32);
u32 btlMenuCursorStepReflectAction(u32, u32, u32, u32, u32);
s32 FUN_003bf1e4();
void gameCounterAddSaturating(s32, u32);
u32 isEntryUsable(BtlEvent *); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "BtlEvent *" is incompatible with parameter of type "int *")
u32 btlEventSelectTrigger(BtlEvent *, u32, s32, u32);
void FUN_0027e38c(BtlEvent *);

/* Records an escape attempt and resolves its outcome through the battle event queue. */
void battleResolveEscapeAttempt(BattleRetreatOwner *owner, BattleRetreatAction *action)
{
    action->result = 0;
    BtlMainState *script = owner->script;
    if (!(script->battleMask & BTL_ESCAPE_RESTRICTED) && (script->encounter.flags & BTL_ESCAPE_RESTRICTED)) {
        FUN_00229a3c(0, (u32)action, 0, 5, 0);
        return;
    }
    BtlCamera *main = g_btlMain;
    if (main->unk760 >= 0 &&
        FUN_00256940(main, script, 1))
        btlReflectQueueKind34(0, 0);
    FUN_00256898(1, 0);
    btlMenuCursorStepReflectAction(0, (u32)action, 15, action->argument, 1);
    s32 chance = FUN_003bf1e4();
    s32 roll = randRange(99);
    bool success = roll < chance;

    /* Increment the stored byte; retail applies the upper-bound check after this narrowing. */
    u32 attempts = ++owner->script->encounterControl.difficulty;
    owner->script->encounterControl.difficulty = attempts < 255 ? attempts : 255;
    BattleVersionResources *resources = g_btlAux;
    if (((BattleRetreatResourceFields *)resources)->flags & 0x400)
        nameEntriesRegisterVerNames(resources);

    script = owner->script;
    if (script->commandEvent.mode == 3)
        success = true;
    if (script->battleMask & BTL_ESCAPE_RESTRICTED)
        success = true;
    if (script->core.result == BTL_RESULT_ESCAPED || success) {
        gameCounterAddSaturating(BTL_COUNTER_ESCAPE, 1);
        owner->script->core.result = BTL_RESULT_ESCAPED;
        if (isEntryUsable(g_btlEvent))
            return;
        if (btlEventSelectTrigger(g_btlEvent, BTL_EVENT_ESCAPE, -1, 0)) {
            FUN_0027e38c(g_btlEvent);
            return;
        }
        FUN_00229a3c(0, (u32)action, 0, 1, 0);
    } else {
        gameCounterAddSaturating(BTL_COUNTER_ESCAPE_FAILED, 1);
        owner->script->core.result = 0;
        owner->script->battleMask |= BTL_ESCAPE_FAILED;
        FUN_00229a3c(0, (u32)action, 0, 1, 0);
    }
}
} /* extern "C" */
