/* NON_MATCHING: readable rebuild; retail keeps no VFP register live across the calls (the colour constants are reloaded per call) and zeroes the 12-entry candidate array as six stack words in a fixed order, which armcc here schedules differently. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "common.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "event/2dEvent/EventEffect.h"
#include "code/Code0018.h"

/* A party slot as the picker reads it. */
struct PartySlot {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
};


struct BattleCameraView {
    /* 0x000 */ u8 unk000[0x64C];
    /* 0x64C */ u32 flags;
};

/* The object that owns a script process and a message block. */
struct ScriptOwner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ void *messages;
    /* 0x28 */ u32 scriptProcess;
};

extern "C" {
extern u32 g_btlAux;
extern u32 g_btlUiBlock;
extern BattleCameraView *g_btlCamera;

void scrScriptProcessDestroy(u32 process);
void asdMemFree(void *block);
void FUN_004f85c8(u32 aux, s32 value);
void FUN_004abe2c(u32 ui, s32 a, s32 b, s32 c, s32 d, s32 e);
PartySlot *FUN_003e4d68(u32 index);
PartySlot *saveSlotFindSelected(void);
s32 lcgRandomRange(s32 limit);
void FUN_003f1b3c(BtlMainStateA *battle, u32 voice, s32 kind, u32 *text, u32 *colorSet);
void FUN_0047f4cc(u32 handle, f32 red, f32 green, f32 blue);
void uiNavigatorStart(s32 id, s32 a, s32 b, s32 c, s32 d);
void infoWinSetTimer(s32 frames);
void FUN_004fbdd4(s32 a, s32 b, s32 c, f32 red, f32 green, f32 blue);
void FUN_004fe618(s32 a, s32 b, s32 c, f32 red, f32 green, f32 blue);

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

    u16 candidates[12] = {};
    s32 count = 0;
    for (s32 i = 0; i < 12; i++) {
        PartySlot *slot = FUN_003e4d68((u16)i);
        if (FUN_00187168(slot)) {
            candidates[count] = slot->id;
            count++;
        }
    }
    u16 pick;
    if (count == 0) {
        PartySlot *selected = saveSlotFindSelected();
        if (selected == NULL) {
            pick = 0;
        } else {
            count = 1;
            candidates[0] = selected->id;
            pick = candidates[lcgRandomRange((u16)(count - 1))];
        }
    } else {
        pick = candidates[lcgRandomRange((u16)(count - 1))];
    }

    BtlMainStateExtA *battle = btlGetMainStateExt();
    u32 voice = FUN_0019acdc(pick, 1);
    u32 text;
    u32 colorSet;
    FUN_003f1b3c(battle, voice, 2, &text, &colorSet);
    FUN_0047f4cc(colorSet, 1.0f, 0.70710677f, 0.70710677f);
    infoWinSetText(reinterpret_cast<const char *>(battle->infoWindow), (u16)text);
    uiNavigatorStart(pick, 1, 1, 0, 0);
    infoWinSetTimer(0x708);
    FUN_004fbdd4(0, 0, 5, 0.4f, 0.4f, 0.4f);
    for (s32 i = 4; i < 54; i++) {
        BattleRosterRecordA *record = &battle->roster[i];
        if (record != NULL && (record->liveFlags.unk50 & 1) && (record->liveFlags.unk50 & 2))
            FUN_004fe618(0, 0, 5, 0.4f, 0.4f, 0.4f);
    }
    g_btlCamera->flags |= 0x4000;
}

} /* extern "C" */
