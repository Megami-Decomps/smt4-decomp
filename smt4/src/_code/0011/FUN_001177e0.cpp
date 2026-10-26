/* NON_MATCHING: retail preserves an additional 3D-ready test and different selector/alias scheduling. */
#include "AsdSDK/Source/Snd/AsdSoundShutdown.h"
#include "util/FUN_002bf684.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
void FUN_002bda30(s32 sound, s32 fadeFrames);
void nw_snd_SoundHandle_DetachSound(s32 *handle);
void FUN_00126770(u32 first, u32 second);
void asdSoundSlotCSelect(u32 first, u32 second);
s32 FUN_00119da8(u32 index);
void nw_ut_internal_LinkListImpl_erase_2B743C(void *list, void *node);
u8 FUN_0012f664(void *manager);
void FUN_0012f7e4(void *dataManager);
void FUN_0012f844(void *player);
void FUN_0014047c(void *archive);
void asdMemFree(void *buffer);

/* Stop every selected sound before releasing the archive's players, heaps and work buffers. */
void FUN_001177e0()
{
    AsdSoundSystem *sound = &g_asdSound;
    if (FUN_002bf684(sound) == 0) {
        return;
    }
    AsdSndSelectionViewIV *selected = reinterpret_cast<AsdSndSelectionViewIV *>(sound);
    AsdSndSlotB *slotB = selected->slotB;
    if (slotB != NULL) {
        for (u8 index = 0; index < 8; ++index) {
            if (slotB->handles[index] != 0) {
                FUN_002bda30(slotB->handles[index], 0);
                nw_snd_SoundHandle_DetachSound(&slotB->handles[index]);
            }
        }
    }
    for (u8 index = 0; index < 2; ++index) {
        AsdSndSingleHeapSlotView *slot = selected->getAuxiliary(index);
        if (slot != NULL && slot->handle != 0) {
            FUN_002bda30(slot->handle, 0);
            nw_snd_SoundHandle_DetachSound(&slot->handle);
        }
    }
    for (u8 index = 0; index < 2; ++index) {
        AsdSndSlotC *slot = selected->getOutput(index);
        if (slot != NULL && slot->handle != 0) {
            FUN_002bda30(slot->handle, 0);
            nw_snd_SoundHandle_DetachSound(&slot->handle);
        }
    }
    AsdSndSlotA *slotA = selected->slotA;
    if (slotA != NULL) {
        for (u8 index = 0; index < 4; ++index) {
            if (slotA->handles[index] != 0) {
                FUN_002bda30(slotA->handles[index], 0);
                nw_snd_SoundHandle_DetachSound(&slotA->handles[index]);
            }
        }
    }
    selected->slotB = NULL;
    FUN_00126770(0xffffffff, 0xffffffff);
    asdSoundSlotCSelect(0xffffffff, 0xffffffff);
    FUN_00119da8(0xffffffff);

    AsdSnd3dShutdownViewIV *spatial = reinterpret_cast<AsdSnd3dShutdownViewIV *>(sound);
    if (spatial->enabled == 1) {
        for (u8 index = 0; index < 16; ++index) {
            if (spatial->handles[index] != 0) {
                FUN_002bda30(spatial->handles[index], 0);
                nw_snd_SoundHandle_DetachSound(&spatial->handles[index]);
            }
        }
        nw_ut_internal_LinkListImpl_erase_2B743C(spatial->list, spatial->sourceNode);
        FUN_0012f664(spatial->manager);
        asdMemFree(spatial->buffer);
    }
    sound->path[0] = 0;
    FUN_0012f7e4(sound->dataManager);
    FUN_0012f844(sound->player);
    FUN_0014047c(sound->archive);
    if (sound->infoBlock != NULL) {
        asdMemFree(sound->infoBlock);
    }
    if (sound->dataManagerBuffer != NULL) {
        asdMemFree(sound->dataManagerBuffer);
    }
    if (sound->playerBuffer != NULL) {
        asdMemFree(sound->playerBuffer);
    }
    if (sound->streamBuffer != NULL) {
        asdMemFree(sound->streamBuffer);
    }
}
}
