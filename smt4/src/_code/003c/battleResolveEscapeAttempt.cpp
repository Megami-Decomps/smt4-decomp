/* NON_MATCHING: retail retains an identity cap/refetch/second store after its wrapping byte increment; failure-path layout and scratch registers also differ. */
#include "battle/btlMain.h"
#include "battle/btlEvent.h"
#include "shard/W4_Match6_BtlScript.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "battle/btlHelp.h"
#include "battle/btlEditor.h"
#include "battle/BtlGlobals.h"

struct BattleAction;
struct BattleRetreatOwner { BtlMainState *script; };
struct BattleRetreatScriptFields {
    u8 unk0000[0x88];
    u32 result;
    u8 unk008c[0x54];
    u32 initialFlags;
    u8 unk00e4[0x2178];
    s32 formation;
    u8 unk2260[0x2256];
    u8 attempts;
};
struct BattleRetreatAction {
    u8 unk000[0x24];
    u32 argument;
    u8 unk028[0x544];
    u32 result;
};
struct BattleRetreatMainFields {
    u8 unk000[0x760];
    s32 active;
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
u32 randRange(s32);
void gameCounterAddSaturating(s32, u32);
u32 isEntryUsable(BtlEvent *); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "BtlEvent *" is incompatible with parameter of type "int *")
u32 btlEventSelectTrigger(BtlEvent *, u32, s32, u32);
void FUN_0027e38c(BtlEvent *);

void battleResolveEscapeAttempt(BattleRetreatOwner *owner, BattleRetreatAction *action)
{
    action->result = 0;
    BtlMainState *script = owner->script;
    BattleRetreatScriptFields *fields = reinterpret_cast<BattleRetreatScriptFields *>(script);
    if (!(script->battleFlags & 0x40000) && (fields->initialFlags & 0x40000)) {
        FUN_00229a3c(0, reinterpret_cast<u32>(action), 0, 5, 0);
        return;
    }
    BtlCamera *main = g_btlMain;
    if (reinterpret_cast<BattleRetreatMainFields *>(main)->active >= 0 &&
        FUN_00256940(main, script, 1))
        btlReflectQueueKind34(0, 0);
    FUN_00256898(1, 0);
    btlMenuCursorStepReflectAction(0, reinterpret_cast<u32>(action), 15, action->argument, 1);
    s32 chance = FUN_003bf1e4();
    s32 roll = randRange(99);
    bool success = roll < chance;

    ++reinterpret_cast<BattleRetreatScriptFields *>(owner->script)->attempts;
    BattleVersionResources *resources = g_btlAux;
    if (reinterpret_cast<BattleRetreatResourceFields *>(resources)->flags & 0x400)
        FUN_00240614(resources);

    script = owner->script;
    fields = reinterpret_cast<BattleRetreatScriptFields *>(script);
    if (fields->formation == 3)
        success = true;
    if (script->battleFlags & 0x40000)
        success = true;
    if (fields->result == 4 || success) {
        gameCounterAddSaturating(4, 1);
        reinterpret_cast<BattleRetreatScriptFields *>(owner->script)->result = 4;
        if (isEntryUsable(g_btlEvent))
            return;
        if (btlEventSelectTrigger(g_btlEvent, 6, -1, 0)) {
            FUN_0027e38c(g_btlEvent);
            return;
        }
    } else {
        gameCounterAddSaturating(5, 1);
        reinterpret_cast<BattleRetreatScriptFields *>(owner->script)->result = 0;
        owner->script->battleFlags |= 0x2000;
    }
    FUN_00229a3c(0, reinterpret_cast<u32>(action), 0, 1, 0);
}
}
