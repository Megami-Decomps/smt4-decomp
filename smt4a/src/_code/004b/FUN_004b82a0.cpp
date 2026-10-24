/* NON_MATCHING: register assignment of the payload pointer and constants differs from retail (187 vs 188 rows); the request selection is the same as smt4 FUN_003b92b4. */
#include "common.h"

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
    /* 0x1168 */ u8 returnToMap;
} SceneWork;

/* The slice of the game state read and written here. */
typedef struct SceneGameState {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 endingRequested;
    /* 0x39 */ u8 unk39[0x23];
    /* 0x5C */ u32 saveId;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ char saveName[0x10];
} SceneGameState;

typedef struct EndingName {
    char text[9];
} EndingName;

extern SceneGameState g_gameState;
extern s32 g_mapSelection;

s32 menu4CReleaseSlots(void *sprites);
void asdSequenceRequest(u32 kind, void *payload, u32 size);
void FUN_003d54f8(s32 a, s32 b);
void gameDataCopySaveToWork(void);
char *libc_strcpy(char *destination, const char *source);
void bgmReleaseStopped(void);
void soundChannelStopAll(s32 channel);
void *FUN_004186e0(void);
s32 FUN_001bd118(void);
SceneRecord *menu4CGetCurrentEntry(void *sprites);
void FUN_004b7a08(SceneWork *work);
u8 *FUN_001ad9b4(void *entry);
void FUN_00270c58(u32 id);
void obj04Finish(void);

/* Starts the sequence the scene transition asked for, from its request flags, then closes the
 * message window and marks the transition done. */
void FUN_004b82a0(SceneWork *work)
{
    u32 payload[8];

    if (menu4CReleaseSlots(work->sprites) == 0) {
        return;
    }
    u32 flags = work->flags;

    if ((flags & 0x1000000) != 0) {
        payload[0] = work->record->id;
        asdSequenceRequest(10, payload, 4);
    } else if ((flags & 0x2000000) != 0) {
        payload[0] = work->record->id + 100;
        asdSequenceRequest(10, payload, 4);
    } else if ((flags & 0x8000000) != 0) {
        *(u16 *)payload = work->record->id;
        asdSequenceRequest(0x12, payload, 2);
        FUN_003d54f8(0, 10);
        FUN_003d54f8(1, 10);
    } else if ((flags & 0x4000000) != 0) {
        payload[0] = work->record->id;
        payload[1] = 0;
        payload[2] = 0;
        asdSequenceRequest(16, payload, 12);
    } else if ((flags & 0x200000) != 0) {
        gameDataCopySaveToWork();
        payload[0] = work->record->id40;
        payload[1] = -1;
        libc_strcpy((char *)&payload[2], work->record->name);
        asdSequenceRequest(4, payload, 32);
    } else if ((flags & 0x40000) != 0) {
        gameDataCopySaveToWork();
        payload[0] = g_gameState.saveId;
        payload[1] = -1;
        libc_strcpy((char *)&payload[2], g_gameState.saveName);
        asdSequenceRequest(4, payload, 32);
    } else if ((flags & 0x800000) != 0) {
        payload[0] = work->record->id;
        asdSequenceRequest(13, payload, 4);
    } else if ((flags & 0x20000000) != 0) {
        payload[0] = 0;
        asdSequenceRequest(20, payload, 4);
    } else if (work->requestEvent6 != 0) {
        asdSequenceRequest(6, NULL, 0);
    } else if (work->requestEvent8 != 0) {
        asdSequenceRequest(8, NULL, 0);
    } else if (work->requestCounter != 0) {
        payload[0] = g_mapSelection - 200;
        asdSequenceRequest(14, payload, 4);
    } else if (work->returnToMap != 0) {
        void *entry = FUN_004186e0();

        if (entry != NULL && FUN_001bd118() == 6) {
            work->record = menu4CGetCurrentEntry(work->sprites);
            FUN_004b7a08(work);
            FUN_00270c58(*(u16 *)(FUN_001ad9b4(entry) + 0xD4));
        }
    } else if (work->requestEnding != 0) {
        bgmReleaseStopped();
        soundChannelStopAll(15);
        g_gameState.endingRequested = 1;
        payload[0] = 1;
        payload[1] = -1;
        static const EndingName ending = {"e001_000"};

        *(EndingName *)&payload[2] = ending;
        asdSequenceRequest(4, payload, 32);
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
