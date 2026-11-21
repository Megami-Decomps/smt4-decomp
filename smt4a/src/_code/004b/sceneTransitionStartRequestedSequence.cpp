/* NON_MATCHING: written as smt4 FUN_003b92b4 (a payload per request); the hoisted constants and the game-state base
 * take other callee-saved registers (retail: zero r9, -1 r8, g_gameState r6), so the ending's stores are not an stm. */
#include "common.h"
#include "shard/W6_W6Match5_SequencePacket.h"
#include <string.h>
#include "game/GameStateA.h"
#include "quest_center/QuestRecordA.h"
#include "code/Code001b.h"

extern "C" {

/* The scene record the work area points at (only the fields read here). */
typedef struct SceneRecord {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 id40;
    /* 0x44 */ char name[0x10];
    /* 0x54 */ u16 id;
} SceneRecord;

/* The scene transition work area (only the fields used here). */
typedef struct SceneWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 flags;
    /* 0x024 */ u8 done;
    /* 0x025 */ u8 unk025[3];
    /* 0x028 */ u32 state;
    /* 0x02C */ u32 unk02c;
    /* 0x030 */ u8 unk030[0x18];
    /* 0x048 */ u8 requestEvent8;
    /* 0x049 */ u8 requestEvent6;
    /* 0x04A */ u8 requestCounter;
    /* 0x04B */ u8 requestEnding;
    /* 0x04C */ u8 unk04c[0x50];
    /* 0x09C */ u8 sprites[0x1080];
    /* 0x111C */ SceneRecord *record;
    /* 0x1120 */ u8 unk1120[0x48];
    /* 0x1168 */ s8 returnToMap;  /* s8: retail addresses it through a literal offset register */
} SceneWork;

extern s32 g_mapSelection;

s32 menu4CReleaseSlots(void *sprites);
void asdSequenceRequest(u32 kind, void *payload, u32 size);
void titleSetSlotValueState2(s32 a, s32 b);
void gameDataCopySaveToWork(void);
char *libc_strcpy(char *destination, const char *source);
void bgmReleaseStopped(void);
void soundChannelStopAll(s32 channel);
void *rosterGetLeaderId(void);
SceneRecord *menu4CGetCurrentEntry(void *sprites);
void FUN_004b7a08(SceneWork *work);
void FUN_00270c58(u32 id);
void obj04Finish(void);

/* Starts the sequence the scene transition asked for, from its request flags, then closes the
 * message window and marks the transition done. */
void sceneTransitionStartRequestedSequence(SceneWork *work)
{
    if (menu4CReleaseSlots(work->sprites) == 0) {
        return;
    }
    u32 flags = work->flags;

    if ((flags & 0x1000000) != 0) {
        u32 payload = work->record->id;
        asdSequenceRequest(10, &payload, sizeof(payload));
    } else if ((flags & 0x2000000) != 0) {
        u32 payload = work->record->id + 100;
        asdSequenceRequest(10, &payload, sizeof(payload));
    } else if ((flags & 0x8000000) != 0) {
        u16 payload = work->record->id;
        asdSequenceRequest(0x12, &payload, sizeof(payload));
        titleSetSlotValueState2(0, 10);
        titleSetSlotValueState2(1, 10);
    } else if ((flags & 0x4000000) != 0) {
        ScriptSequencePacket payload(work->record->id, 0, 0);
        asdSequenceRequest(16, &payload, sizeof(payload));
    } else if ((flags & 0x200000) != 0) {
        gameDataCopySaveToWork();
        NamedSceneSequence payload;
        payload.id = work->record->id40;
        payload.slot = -1;
        libc_strcpy(payload.name, work->record->name);
        asdSequenceRequest(4, &payload, sizeof(payload));
    } else if ((flags & 0x40000) != 0) {
        gameDataCopySaveToWork();
        NamedSceneSequence payload;
        payload.id = g_gameState.entryValue;
        payload.slot = -1;
        libc_strcpy(payload.name, g_gameState.entryText);
        asdSequenceRequest(4, &payload, sizeof(payload));
    } else if ((flags & 0x800000) != 0) {
        u32 payload = work->record->id;
        asdSequenceRequest(13, &payload, sizeof(payload));
    } else if ((flags & 0x20000000) != 0) {
        u32 payload = 0;
        asdSequenceRequest(20, &payload, sizeof(payload));
    } else if (work->requestEvent6 != 0) {
        asdSequenceRequest(6, NULL, 0);
    } else if (work->requestEvent8 != 0) {
        asdSequenceRequest(8, NULL, 0);
    } else if (work->requestCounter != 0) {
        u32 payload = g_mapSelection - 200;
        asdSequenceRequest(14, &payload, sizeof(payload));
    } else if (work->returnToMap != 0) {
        void *entry = rosterGetLeaderId();

        if (entry != NULL && table1bOr1cGetRecordValue(reinterpret_cast<u32>(entry)) == 6) {
            work->record = menu4CGetCurrentEntry(work->sprites);
            FUN_004b7a08(work);
            FUN_00270c58(questDataGetRecord(reinterpret_cast<u32>(entry))->event.package);
        }
    } else if (work->requestEnding != 0) {
        bgmReleaseStopped();
        soundChannelStopAll(15);
        g_gameState.retainCampResources = 1;
        NamedSceneSequence payload;
        payload.id = 1;
        payload.slot = -1;
        strcpy(payload.name, "e001_000");
        asdSequenceRequest(4, &payload, sizeof(payload));
    }
    if ((work->flags & 0x40) != 0) {
        work->flags &= ~0x40;
        obj04Finish();
    }
    work->done = 1;
    work->state = 0x12;
    work->unk02c = 0;
}

}
