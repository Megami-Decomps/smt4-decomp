/* NON_MATCHING: retail retains an identity cap/refetch/second store after its wrapping byte increment; failure-path layout and scratch registers also differ. */
#include "battle/btlMain.h"
#include "battle/btlEvent.h"
#include "shard/W4_Match6_BtlScript.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "shard/FUN_00229a3c.h"

struct BattleAction;
struct BattleRetreatOwner { BtlScript *script; };
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
extern BtlMain *g_btlMain;
extern BattleVersionResources *DAT_00435d18;
extern BtlEvent *g_btlEvent;
bool FUN_00256940(BtlMain *, const BtlScript *, s32);
void btlReflectQueueKind34(s16, u32);
BattleAction *FUN_00256898(s32, u32);
u32 FUN_0026beb4(u32, u32, u32, u32, u32);
s32 FUN_003bf1e4();
u32 randRange(s32);
void gameCounterAddSaturating(s32, u32);
u32 FUN_0027e3b8(BtlEvent *);
u32 btlEventSelectTrigger(BtlEvent *, u32, s32, u32);
void FUN_0027e38c(BtlEvent *);

void battleResolveEscapeAttempt(BattleRetreatOwner *owner, BattleRetreatAction *action)
{
    action->result = 0;
    BtlScript *script = owner->script;
    BattleRetreatScriptFields *fields = reinterpret_cast<BattleRetreatScriptFields *>(script);
    if (!(script->flags & 0x40000) && (fields->initialFlags & 0x40000)) {
        FUN_00229a3c(0, reinterpret_cast<u32>(action), 0, 5, 0);
        return;
    }
    BtlMain *main = g_btlMain;
    if (reinterpret_cast<BattleRetreatMainFields *>(main)->active >= 0 &&
        FUN_00256940(main, script, 1))
        btlReflectQueueKind34(0, 0);
    FUN_00256898(1, 0);
    FUN_0026beb4(0, reinterpret_cast<u32>(action), 15, action->argument, 1);
    s32 chance = FUN_003bf1e4();
    s32 roll = randRange(99);
    bool success = roll < chance;

    ++reinterpret_cast<BattleRetreatScriptFields *>(owner->script)->attempts;
    BattleVersionResources *resources = DAT_00435d18;
    if (reinterpret_cast<BattleRetreatResourceFields *>(resources)->flags & 0x400)
        FUN_00240614(resources);

    script = owner->script;
    fields = reinterpret_cast<BattleRetreatScriptFields *>(script);
    if (fields->formation == 3)
        success = true;
    if (script->flags & 0x40000)
        success = true;
    if (fields->result == 4 || success) {
        gameCounterAddSaturating(4, 1);
        reinterpret_cast<BattleRetreatScriptFields *>(owner->script)->result = 4;
        if (FUN_0027e3b8(g_btlEvent))
            return;
        if (btlEventSelectTrigger(g_btlEvent, 6, -1, 0)) {
            FUN_0027e38c(g_btlEvent);
            return;
        }
    } else {
        gameCounterAddSaturating(5, 1);
        reinterpret_cast<BattleRetreatScriptFields *>(owner->script)->result = 0;
        owner->script->flags |= 0x2000;
    }
    FUN_00229a3c(0, reinterpret_cast<u32>(action), 0, 1, 0);
}
}
