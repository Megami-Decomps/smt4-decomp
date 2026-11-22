/* NON_MATCHING: sound system shutdown (Apocalypse layout view); the slot loops release each handle through its
 * address as retail does; remaining: retail reaches the aux slots through a second pool word for the block and keeps
 * their body out of line (an inlined slot function: a static helper for it gives 131 lines, unproven so not kept),
 * holds the system base in r6 with a zero in r9, and reaches the 3D state through a third pool word with a second
 * enabled test. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
/* The registered sound handles (the block's list, reached through its own symbol). */
extern AsdSndHandleList g_soundHandleList;

s32 nw_snd_SoundArchive_IsAvailable(void *archive);
void FUN_00154890(u32 arg);
void asdSoundAuxSlotsSelect(u32 arg);
void FUN_00173a94(u8 *manager);
void soundObjectPostStop(u8 *dataManager);
void FUN_00173c7c(u8 *player);
void nw_snd_internal_BasicSound_Stop(s32 handle, s32 arg); // declcheck: local (the shared declaration does not compile here or changes this unit)
void uiTextStateReset(void *system);
void asdMemFree(void *block);
void nw_ut_internal_LinkListImpl_erase_2B743C(void *list, void *node);
void nw_snd_SoundHandle_DetachSound(s32 *handle);

/* Stops and detaches the sound a handle holds (nw::snd's SoundHandle::Stop header inline). */
static __inline void asdSoundHandleRelease(s32 *handle)
{
    if (*handle != 0) {
        nw_snd_internal_BasicSound_Stop(*handle, 0);
        nw_snd_SoundHandle_DetachSound(handle);
    }
}

/* Stops every sound and releases the sound system's buffers. */
void FUN_00150784(void)
{
    AsdSoundSystemA *system = &g_asdSoundSystem;
    if (nw_snd_SoundArchive_IsAvailable(system) == 0)
        return;

    AsdSndSlotBA *slotB = system->currentSlotB;
    if (slotB != NULL) {
        for (u8 i = 0; i < 0x10; i++)
            asdSoundHandleRelease(&slotB->handles[i]);
    }
    for (u8 i = 0; i < 2; i++) {
        if (i == 0 || i == 1) {
            AsdSndAuxSlot *aux = system->currentAux[i];
            s32 handle = aux != NULL ? aux->handle : 0;
            if (aux != NULL && handle != 0) {
                nw_snd_internal_BasicSound_Stop(handle, 0);
                nw_snd_SoundHandle_DetachSound(&aux->handle);
            }
        }
    }
    AsdSndHandleNode *node = g_soundHandleList.handles;
    for (s32 i = 0; i < g_soundHandleList.count; i++) {
        if (node == NULL)
            break;
        asdSoundHandleRelease(&node->handle);
    }
    AsdSndSlotA *slotA = system->currentSlotA;
    if (slotA != NULL) {
        for (u8 i = 0; i < 4; i++)
            asdSoundHandleRelease(&slotA->handles[i]);
    }

    system->currentSlotB = NULL;
    asdSoundAuxSlotsSelect(0xFFFFFFFF);
    FUN_00154890(0xFFFFFFFF);
    if (system->sound3d.enabled == 1) {
        for (u8 i = 0; i < 0x10; i++)
            asdSoundHandleRelease(&system->sound3d.handles[i]);
        /* unlink the listener from the manager's listener list */
        nw_ut_internal_LinkListImpl_erase_2B743C(&system->sound3d.manager[0xC], &system->sound3d.listener[0x64]);
        FUN_00173a94(system->sound3d.manager);
        asdMemFree(system->sound3d.buffer);
    }
    system->path[0] = '\0';
    soundObjectPostStop(system->dataManager);
    FUN_00173c7c(system->player);
    uiTextStateReset(system);
    if (system->infoBlock != NULL)
        asdMemFree(system->infoBlock);
    if (system->dataManagerBuffer != NULL)
        asdMemFree(system->dataManagerBuffer);
    if (system->playerBuffer != NULL)
        asdMemFree(system->playerBuffer);
    if (system->streamBuffer != NULL)
        asdMemFree(system->streamBuffer);
}

} /* extern "C" */
