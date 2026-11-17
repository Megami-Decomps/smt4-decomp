/* AsdSDK/Source/Snd/AsdSoundSystem.cpp, Apocalypse layout: the sound system block g_asdSoundSystem.
 *
 * The same pieces as IV's AsdSoundSystem (archive, player, data manager, slots, 3D sound, duck
 * and status), at different offsets and with wider slots. Only Apocalypse units include this.
 * Some functions reach a member through its own symbol instead of the block: g_soundHandleList
 * (+0x75C), g_asdSoundHandleState (+0x1000), g_asdSoundDuck (+0x12E0), g_asdSoundStatus (+0x12FC). */
#ifndef ASDSDK_SOURCE_SND_ASDSOUNDSYSTEMA_H
#define ASDSDK_SOURCE_SND_ASDSOUNDSYSTEMA_H

#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/S2SoundLoader.h"
#include "gfx/CameraMatrixCache.h"

/* A slot of the second kind (0x70 bytes): sixteen sound handles. */
struct AsdSndSlotBA {
    /* 0x00 */ u8 heap[0x10];         /* nw::snd::SoundHeap (0x20 bytes) */
    /* 0x10 */ void *heapBase;        /* the heap's buffer, NULL until it is created */
    /* 0x14 */ u8 heapRest[0xC];
    /* 0x20 */ s32 handles[16];       /* nw::snd::SoundHandle slots, 0 when free */
    /* 0x60 */ void *heapBuffer;      /* what the heap manages */
    /* 0x64 */ u32 savedState;        /* SoundHeap::SaveState result */
    /* 0x68 */ u32 volume;
    /* 0x6C */ u8 index;
    /* 0x6D */ u8 pad6D[3];
};

/* The list of registered sound ids (+0x75C). */
struct AsdSndHandleList {
    /* 0x00 */ AsdSndHandleNode *handles;
    /* 0x04 */ s32 count;
};

/* An nw::snd::Sound3DActor with its volume (0x88 bytes). */
struct AsdSnd3dActorA {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ f32 volume;            /* relative gain from the 0..127 start volume */
    /* 0x4C */ u8 unk4C[0x3C];
};

/* The 3D sound state (+0x854): the manager, sixteen actors, their handles and positions, the
 * listener, and the output scalars. The volume setters reach it through its own base. */
struct AsdSnd3dStateA {
    /* 0x000 */ u8 manager[0x3C];             /* nw::snd::Sound3DManager */
    /* 0x03C */ AsdSnd3dActorA actors[16];
    /* 0x8BC */ s32 handles[16];              /* the sound handle each actor plays, 0 when none */
    /* 0x8FC */ AsdSndListener positions[16];
    /* 0x9BC */ u8 listener[0x6C];            /* nw::snd::Sound3DListener */
    /* 0xA28 */ Matrix34Data listenerMatrix;
    /* 0xA58 */ AsdSndListener listenerPosition;
    /* 0xA64 */ AsdSndListener listenerUp;
    /* 0xA70 */ f32 listenerHeading;
    /* 0xA74 */ f32 unkA74;                    /* forwarded to the listener (FUN_00144564) */
    /* 0xA78 */ f32 outputVolume;
    /* 0xA7C */ f32 unkA7C;                    /* forwarded to the listener (FUN_00145048) */
    /* 0xA80 */ u32 playingMask;              /* bit n: actor n is playing */
    /* 0xA84 */ void *buffer;                 /* the manager's memory */
    /* 0xA88 */ s8 enabled;                   /* the 3D sound state is up */
    /* 0xA89 */ u8 volume;                    /* start volume of actor sounds, 0..127 */
    /* 0xA8A */ u8 padA8A[2];
};

/* The duck state and the status block that follows it (+0x12E0, also g_asdSoundDuck). */
struct AsdSndControlA {
    /* 0x00 */ AsdSndDuck duck;
    /* 0x1C */ AsdSndStatusApoc status;
};

/* Everything the Apocalypse sound system owns, in one block (0x1348 bytes). */
struct AsdSoundSystemA {
    /* 0x0000 */ u8 archive[0x13C];            /* nw::snd::SoundArchive */
    /* 0x013C */ u8 archiveFile[0x58];         /* nw::snd::internal::SoundArchiveFile::FileHeader */
    /* 0x0194 */ u8 player[0x118];             /* nw::snd::SoundArchivePlayer */
    union {
        /* 0x02AC */ u8 dataManager[0x220];    /* nw::snd::SoundDataManager */
        struct {
            /* 0x02AC */ u8 unk2AC[0xC];
            /* 0x02B8 */ SoundLoader loader;
        } loaderState;
    };
    /* 0x04CC */ void *workBuffer;            /* nn::snd work memory */
    /* 0x04D0 */ void *infoBlock;
    /* 0x04D4 */ void *dataManagerBuffer;
    /* 0x04D8 */ void *playerBuffer;
    /* 0x04DC */ void *streamBuffer;
    /* 0x04E0 */ void *stringBlock;           /* loaded on first use */
    /* 0x04E4 */ char path[0x40];             /* the archive's file name */
    /* 0x0524 */ AsdSndSlotBA slotsB[ASD_SND_SLOT_B_COUNT];
    /* 0x06E4 */ AsdSndAuxSlot auxSlots[2];
    /* 0x075C */ AsdSndHandleList registered;
    /* 0x0764 */ AsdSndSlotA slotsA[ASD_SND_SLOT_A_COUNT];
    /* 0x0854 */ AsdSnd3dStateA sound3d;
    /* 0x12E0 */ AsdSndControlA control;
    /* 0x1318 */ AsdSndSlotBA *currentSlotB;
    /* 0x131C */ AsdSndAuxSlot *currentAux[2];
    /* 0x1324 */ AsdSndSlotA *currentSlotA;
    /* 0x1328 */ u8 unk1328[0x1C];
    /* 0x1344 */ u8 archiveLoaded;           /* the archive's name starts with the expected tag */
    /* 0x1345 */ u8 pad1345[3];
};

typedef char AsdSoundSystemAOffsets[
    sizeof(AsdSndSlotBA) == 0x70 && sizeof(AsdSnd3dActorA) == 0x88 &&
    sizeof(AsdSnd3dStateA) == 0xA8C &&
    offsetof(AsdSnd3dStateA, listener) == 0x9BC &&
    offsetof(AsdSnd3dStateA, enabled) == 0xA88 &&
    offsetof(AsdSoundSystemA, player) == 0x194 &&
    offsetof(AsdSoundSystemA, dataManager) == 0x2AC &&
    offsetof(AsdSoundSystemA, loaderState.loader) == 0x2B8 &&
    offsetof(AsdSoundSystemA, workBuffer) == 0x4CC &&
    offsetof(AsdSoundSystemA, stringBlock) == 0x4E0 &&
    offsetof(AsdSoundSystemA, slotsB) == 0x524 &&
    offsetof(AsdSoundSystemA, auxSlots) == 0x6E4 &&
    offsetof(AsdSoundSystemA, registered) == 0x75C &&
    offsetof(AsdSoundSystemA, slotsA) == 0x764 &&
    offsetof(AsdSoundSystemA, sound3d) == 0x854 &&
    offsetof(AsdSoundSystemA, sound3d.handles) == 0x1110 &&
    offsetof(AsdSoundSystemA, sound3d.enabled) == 0x12DC &&
    offsetof(AsdSoundSystemA, control.status) == 0x12FC &&
    offsetof(AsdSoundSystemA, currentSlotB) == 0x1318 &&
    offsetof(AsdSoundSystemA, currentSlotA) == 0x1324 &&
    offsetof(AsdSoundSystemA, archiveLoaded) == 0x1344 &&
    sizeof(AsdSoundSystemA) == 0x1348 ? 1 : -1];

extern "C" {
extern AsdSoundSystemA g_asdSoundSystem;
}

#endif
