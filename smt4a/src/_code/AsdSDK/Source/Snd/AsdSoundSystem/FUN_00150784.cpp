/* NON_MATCHING: sound system shutdown (Apocalypse layout view); the voice list now comes from g_soundHandleList, the slot loops use real handle arrays and the voice loop matches retail; remaining: retail keeps the two-way aux-slot body out of line (beq to the body after the loop) and holds the system base in r6 with a zero in r9 (158 vs 146 rows). */
#include "common.h"

/* A playing sound handle: stopped and detached from its slot. */
struct SoundHandleSlot {
    /* 0x00 */ s32 handle;
};

/* A slot of the sound system: its handles follow a 0x20-byte header. */
struct SoundHandleSlotList {
    /* 0x00 */ u8 header[0x20];
    /* 0x20 */ s32 handles[16];
};

/* The pieces of the Apocalypse sound system block this shutdown touches (g_asdSoundSystem). */
struct AsdSoundSystemApocView {
    /* 0x000 */ u8 header[0x194];
    /* 0x194 */ u8 streamPlayer[0x118];
    /* 0x2AC */ u8 animPlayer[0x224];
    /* 0x4D0 */ void *workBuffer;
    /* 0x4D4 */ void *infoBlock;
    /* 0x4D8 */ void *dataManagerBuffer;
    /* 0x4DC */ void *playerBuffer;
    /* 0x4E0 */ u8 unk4E0[4];
    /* 0x4E4 */ u8 archiveLoaded;
    /* 0x4E5 */ u8 unk4E5[0x277];
    /* 0x75C */ SoundHandleSlot *voiceHandles;   /* list of live voice handles */
    /* 0x760 */ s32 voiceHandleCount;
    /* 0x764 */ u8 unk764[0xF0];
    /* 0x854 */ u8 streamSource[0xC];
    /* 0x860 */ u8 streamQueue[0x7A0];
    /* 0x1000 */ u8 handleState[8];
    /* 0x1008 */ u8 unk1008[0x108];
    /* 0x1110 */ SoundHandleSlot streamHandles[16];
    /* 0x1150 */ u8 unk1150[0x124];
    /* 0x1274 */ u8 streamWork[0x64];
    /* 0x12D8 */ void *streamBuffer;
    /* 0x12DC */ s8 hasStream;
    /* 0x12DD */ u8 unk12DD[0x3B];
    /* 0x1318 */ u8 *currentSlotA;    /* 16 handles at +0x20 */
    /* 0x131C */ u8 *auxSlots[2];     /* handle at +0x20 */
    /* 0x1324 */ u8 *currentSlotB;    /* 4 handles at +0x20 */
};

extern "C" {
extern AsdSoundSystemApocView g_asdSoundSystem;

/* The live voice handles (inside the sound system block, reached through its own symbol). */
struct SoundHandleList {
    SoundHandleSlot *handles;
    s32 count;
};
extern SoundHandleList g_soundHandleList;

s32 nw_snd_SoundArchive_IsAvailable(void *archive);
void FUN_00154890(u32 arg);
void FUN_00169614(u32 arg);
void FUN_00173a94(void *streamSource);
void FUN_00173c1c(void *animPlayer);
void FUN_00173c7c(void *streamPlayer);
void asdSoundObjectStop(s32 handle, s32 arg);
void uiTextStateReset(void *system);
void asdMemFree(void *block);
void FUN_001b6668(void *queue, void *work);
void nw_snd_SoundHandle_DetachSound(s32 *handle);

static __inline void asdSoundHandleRelease(s32 *handle)
{
    if (*handle != 0) {
        asdSoundObjectStop(*handle, 0);
        nw_snd_SoundHandle_DetachSound(handle);
    }
}

static __inline void releaseSlotHandle(SoundHandleSlotList *slot, u32 index)
{
    if (slot->handles[index] != 0) {
        asdSoundObjectStop(slot->handles[index], 0);
        nw_snd_SoundHandle_DetachSound(&slot->handles[index]);
    }
}

/* Stops every sound and releases the sound system's buffers. */
void FUN_00150784(void)
{
    AsdSoundSystemApocView *system = &g_asdSoundSystem;
    if (nw_snd_SoundArchive_IsAvailable(system) == 0)
        return;

    SoundHandleSlotList *slotA = (SoundHandleSlotList *)system->currentSlotA;
    if (slotA != NULL) {
        for (u8 i = 0; i < 0x10; i++)
            releaseSlotHandle(slotA, i);
    }
    for (u8 i = 0; i < 2; i++) {
        if (i == 0 || i == 1) {
            u8 *aux = system->auxSlots[i];
            s32 handle = aux != NULL ? *(s32 *)(aux + 0x20) : 0;
            if (aux != NULL && handle != 0) {
                asdSoundObjectStop(handle, 0);
                nw_snd_SoundHandle_DetachSound((s32 *)(aux + 0x20));
            }
        }
    }
    SoundHandleSlot *voices = g_soundHandleList.handles;
    for (s32 i = 0; i < g_soundHandleList.count; i++) {
        if (voices == NULL)
            break;
        asdSoundHandleRelease(&voices->handle);
    }
    SoundHandleSlotList *slotB = (SoundHandleSlotList *)system->currentSlotB;
    if (slotB != NULL) {
        for (u8 i = 0; i < 4; i++)
            releaseSlotHandle(slotB, i);
    }

    system->currentSlotA = NULL;
    FUN_00169614(0xFFFFFFFF);
    FUN_00154890(0xFFFFFFFF);
    if (system->hasStream == 1) {
        for (u8 i = 0; i < 0x10; i++)
            asdSoundHandleRelease(&system->streamHandles[i].handle);
        FUN_001b6668(system->streamQueue, system->streamWork);
        FUN_00173a94(system->streamSource);
        asdMemFree(system->streamBuffer);
    }
    system->archiveLoaded = 0;
    FUN_00173c1c(system->animPlayer);
    FUN_00173c7c(system->streamPlayer);
    uiTextStateReset(system);
    if (system->workBuffer != NULL)
        asdMemFree(system->workBuffer);
    if (system->infoBlock != NULL)
        asdMemFree(system->infoBlock);
    if (system->dataManagerBuffer != NULL)
        asdMemFree(system->dataManagerBuffer);
    if (system->playerBuffer != NULL)
        asdMemFree(system->playerBuffer);
}

} /* extern "C" */
