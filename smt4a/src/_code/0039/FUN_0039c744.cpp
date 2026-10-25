#include "shard/W5_W5Match2_UniteWork.h"
#include "event/2dEvent/2dEventTex.h"

/* The pair of party slots remembered for fusion, with the demon IDs they held. */
struct UniteRememberedSlots {
    /* 0x0 */ s16 slots[2];
    /* 0x4 */ u16 ids[2];
};

struct UniteRememberedPair {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ UniteRememberedSlots remembered;
};

struct UniteSlotRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
};

extern "C" {

extern UniteWork *g_unite;
void soundChannelStopAll(s32 arg);
void soundChannelRequestIfEnabled(u32 channel, s32 arg, s32 fade);
UniteSlotRecord *gameGetSlotRecord(s32 slot);
u32 FUN_004dad8c(void *context);
void FUN_002a7b74(void);
void uniteStartOrQueueRequest(s32 request);
void FUN_0020b908(s32 id, s32 arg);
void *lmapSceneGetScript(void);
void FUN_003857b4(s32 arg);
void linkHolderClearFlag(void *holder);

// Leave fusion: restore the sound, forget remembered slots whose demon changed and queue request 0x12.
void FUN_0039c744(void)
{
    UniteWork *unite = g_unite;
    UniteRememberedSlots *remembered = &reinterpret_cast<UniteRememberedPair *>(FUN_0026140c())->remembered;
    soundChannelStopAll(0);
    soundChannelRequestIfEnabled(unite->returnState.soundChannel, 0, 60);
    if (remembered->slots[0] >= 0) {
        UniteSlotRecord *record = gameGetSlotRecord(remembered->slots[0]);
        if (record == NULL || record->id != remembered->ids[0]) {
            remembered->slots[0] = -1;
            remembered->ids[0] = 0;
        }
    }
    if (remembered->slots[1] >= 0) {
        UniteSlotRecord *record = gameGetSlotRecord(remembered->slots[1]);
        if (record == NULL || record->id != remembered->ids[1]) {
            remembered->slots[1] = -1;
            remembered->ids[1] = 0;
        }
    }
    unite->returnState.unk90A4 = FUN_004dad8c(unite->context);
    unite->returnState.unk91B0 = 0;
    FUN_002a7b74();
    uniteStartOrQueueRequest(0x12);
    FUN_0020b908(0x25, 1);
    void *script = lmapSceneGetScript();
    if (script != NULL) {
        FUN_003857b4(1);
        linkHolderClearFlag(script);
    }
}

} /* extern "C" */
