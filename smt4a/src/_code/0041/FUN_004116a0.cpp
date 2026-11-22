/* NON_MATCHING: only the candidate store in partyPickRandomId's loop differs: retail loads the id into r0 and addresses the slot through r1, the build swaps the two. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "common.h"
#include "gamedata/PartyPick.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "event/2dEvent/EventEffect.h"
#include "code/Code0018.h"
#include "script/scrScriptProcess.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlUiOpening.h"


/* The object that owns a script process and a message block. */
struct ScriptOwner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ void *messages;
    /* 0x28 */ ScriptProcess *scriptProcess;
};

extern "C" {
extern u32 g_btlAux;

void asdMemFree(void *block);
void FUN_004f85c8(u32 aux, s32 value);
void FUN_003f1b3c(BtlMainStateA *battle, u32 voice, s32 kind, u32 *text, u32 *colorSet);
void FUN_0047f4cc(u32 handle, f32 red, f32 green, f32 blue);
void uiNavigatorStart(s32 id, s32 a, s32 b, s32 c, s32 d);
void infoWinSetTimer(s32 frames);
void btlReflectCreateTint(s32 a, s32 b, s32 c, f32 red, f32 green, f32 blue);
u32 btlReflectQueueDepthOverlays(s32 actor, u32 options, u32 value, const BattleRosterRecordA *source);

/* Starts the "victory pose" presentation: picks a random party member that can speak (or the
 * selected save slot's), shows their line in the info window, and dims the field except the
 * flagged roster records. */
void FUN_004116a0(ScriptOwner *owner)
{
    if (owner->scriptProcess != 0) {
        scrScriptProcessDestroy(owner->scriptProcess);
        owner->scriptProcess = 0;
    }
    if (owner->messages != NULL) {
        asdMemFree(owner->messages);
        owner->messages = NULL;
    }
    FUN_004f85c8(g_btlAux, 1);
    FUN_004abe2c(g_btlUiBlock, 1, 0, 0, 0, 1);

    u16 pick = partyPickRandomId();

    BtlMainStateExtA *battle = btlGetMainStateExt();
    u32 voice = unitMapIdToCategory(pick, 1);
    u32 text;
    u32 colorSet;
    FUN_003f1b3c(battle, voice, 2, &text, &colorSet);
    FUN_0047f4cc(colorSet, 1.0f, 0.707f, 0.707f);
    infoWinSetText(reinterpret_cast<const char *>(battle->infoWindow), (u16)text);
    uiNavigatorStart(pick, 1, 1, 0, 0);
    infoWinSetTimer(0x708);
    btlReflectCreateTint(0, 0, 5, 0.4f, 0.4f, 0.4f);
    for (s32 i = 4; i < 54; i++) {
        BattleRosterRecordA *record = &battle->roster[i];
        if (record != NULL && (record->liveFlags.unk50 & 1) && (record->liveFlags.unk50 & 2))
            btlReflectQueueDepthOverlays(0, 0, 5, record);
    }
    g_btlCamera->flags |= 0x4000;
}

} /* extern "C" */
