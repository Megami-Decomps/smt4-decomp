/* AsdSDK/Source/Snd/AsdSoundSystem.cpp: the engine's sound layer over nw::snd.
 *
 * AsdSoundSystem opens one sound archive and runs its player. Sounds are played through
 * "slots", each owning an nw::snd::SoundHeap: BGM-style slots (4 handles), a second kind with 8
 * handles, and a few single-handle ones. A global duck/fade state lowers the volume of
 * the second-kind slot while something louder plays. */
#ifndef ASDSDK_SOURCE_SND_ASDSOUNDSYSTEM_H
#define ASDSDK_SOURCE_SND_ASDSOUNDSYSTEM_H

#include "common.h"
#include "shard/S3SoundArchiveLoader.h"

#define ASD_SND_SLOT_A_COUNT 4
#define ASD_SND_SLOT_B_COUNT 4
#define ASD_SND_SLOT_C_COUNT 2
#define ASD_SND_VOLUME_DEFAULT 0x40 /* the center of a 0..0x7f volume */

/* A slot of the first kind (0x3c bytes): its heap, up to four sound handles, and its state. */
typedef struct AsdSndSlotA {
    /* 0x00 */ u8 heap[0x20];        /* nw::snd::SoundHeap */
    /* 0x20 */ s32 handles[4];       /* nw::snd::SoundHandle slots, 0 when free */
    /* 0x30 */ void *heapBuffer;     /* what the heap manages */
    /* 0x34 */ u32 savedState;       /* SoundHeap::SaveState result */
    /* 0x38 */ u8 volume;
    /* 0x39 */ u8 index;
    /* 0x3a */ u8 active;
    /* 0x3b */ u8 hasHeap;
} AsdSndSlotA;

/* A slot of the second kind (0x50 bytes): eight sound handles. */
typedef struct AsdSndSlotB {
    /* 0x00 */ u8 heap[0x10];         /* nw::snd::SoundHeap (0x20 bytes) */
    /* 0x10 */ void *heapBase;        /* the heap's buffer, NULL until it is created */
    /* 0x14 */ u8 heapRest[0xc];
    /* 0x20 */ s32 handles[8];
    /* 0x40 */ void *heapBuffer;
    /* 0x44 */ u32 savedState;
    /* 0x48 */ u8 volume;
    /* 0x49 */ u8 pad49[3];
    /* 0x4c */ u8 index;
    /* 0x4d */ u8 pad4d[3];
} AsdSndSlotB;

/* A one-sound slot (0x10 bytes). */
typedef struct AsdSndSlotC {
    /* 0x00 */ s32 handle;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u8 flag;
    /* 0x0d */ u8 volume;
    /* 0x0e */ u8 pad0e[2];
} AsdSndSlotC;

/* An auxiliary slot (0x3c bytes, two of them): a heap restored to its saved state when selected. */
typedef struct AsdSndAuxSlot {
    /* 0x00 */ u8 heap[0x10];         /* nw::snd::SoundHeap */
    /* 0x10 */ void *heapBase;        /* the heap's buffer, NULL until it is created */
    /* 0x14 */ u8 unk14[0x18];
    /* 0x2c */ s32 savedState;        /* SoundHeap::SaveState result */
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u8 unk38;
    /* 0x39 */ u8 volume;
    /* 0x3a */ u8 pad3a[2];
} AsdSndAuxSlot;
typedef char AsdSndAuxSlotSizeCheck[sizeof(AsdSndAuxSlot) == 0x3c ? 1 : -1];

/* A sound played from memory through an nn::snd voice, fed by two wave buffers in turn (0x98 bytes). */
typedef struct AsdSndWaveVoice {
    /* 0x00 */ u32 format;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 waveBuffers[2][0x18];  /* nn::snd::CTR::WaveBuffer */
    /* 0x38 */ u32 voice;                /* nn::snd::CTR::Voice */
    /* 0x3c */ f32 mix[2];               /* SetMixParam input: front-left/right gains */
    /* 0x44 */ u8 unk44[0x28];
    /* 0x6c */ void *data;               /* heap copy of the sample data */
    /* 0x70 */ u8 unk70[8];
    /* 0x78 */ s32 fadeFrames;
    /* 0x7c */ s32 unk7c;
    /* 0x80 */ u32 headerSize;           /* bytes before the samples */
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u32 sampleBytes;
    /* 0x8c */ u32 unk8c;
    /* 0x90 */ u32 unk90;
    union {
        /* 0x94 */ u32 unk94;
        /* 0x94 */ f32 targetVolume;
    };
} AsdSndWaveVoice;

/* The ducking state: while it is on, slot A's sounds are scaled by `level`. */
typedef struct AsdSndDuck {
    /* 0x00 */ f32 level;            /* target volume scale, 0..1 */
    /* 0x04 */ u32 holdFrames;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 fadeInFrames;
    /* 0x10 */ u32 fadeOutFrames;
    /* 0x14 */ u32 timer;
    /* 0x18 */ u8 flags;             /* bit 0: ducking set up */
    /* 0x19 */ u8 fading;
    /* 0x1a */ u8 active;
    /* 0x1b */ u8 pad1b;
} AsdSndDuck;

typedef struct AsdSndDataManagerView {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ SoundArchiveLoader loader;
    /* 0x014 */ u8 unk014[0x20c];
} AsdSndDataManagerView;

/* Everything the sound system owns, in one block. Some functions reach a member through its own
 * symbol (the duck state, the current-slot pointers) rather than through the block. */
typedef struct AsdSoundSystem {
    /* 0x000 */ u8 archive[0x12c];          /* nw::snd::SoundArchive */
    /* 0x12c */ u8 archiveFile[0x58];       /* nw::snd::internal::SoundArchiveFile::FileHeader */
    /* 0x184 */ u8 player[0xc0];            /* nw::snd::SoundArchivePlayer */
    union {
        /* 0x244 */ u8 dataManager[0x220];  /* nw::snd::SoundDataManager */
        /* 0x244 */ AsdSndDataManagerView loaderState;
    };
    /* 0x464 */ void *workBuffer;           /* nn::snd work memory */
    /* 0x468 */ void *infoBlock;
    /* 0x46c */ void *dataManagerBuffer;
    /* 0x470 */ void *playerBuffer;
    /* 0x474 */ void *streamBuffer;
    /* 0x478 */ void *stringBlock;
    /* 0x47c */ char path[0x40];            /* the archive's file name */
    /* 0x4bc */ AsdSndSlotB slotsB[ASD_SND_SLOT_B_COUNT];
    union {
        /* 0x5fc */ u8 unk5fc[0x78];
        /* 0x5fc */ AsdSndAuxSlot auxSlots[2];
    };
    /* 0x674 */ AsdSndSlotC slotsC[ASD_SND_SLOT_C_COUNT];
    /* 0x694 */ AsdSndSlotA slotsA[ASD_SND_SLOT_A_COUNT];
    /* 0x784 */ u8 unk784[0xa4c];           /* the 3D sound manager, its actors and the listener state */
    /* 0x11d0 */ AsdSndDuck duck;
    /* 0x11ec */ u32 unk11ec;
    /* 0x11f0 */ u32 unk11f0;
    /* 0x11f4 */ u8 unk11f4[0xd];
    /* 0x1201 */ u8 unk1201;
    /* 0x1202 */ u8 pad1202;
    /* 0x1203 */ s8 hasStream;              /* a sound stream is loaded */
    /* 0x1204 */ AsdSndSlotB *currentSlotB;
    /* 0x1208 */ AsdSndAuxSlot *currentAux0;
    /* 0x120c */ AsdSndAuxSlot *currentAux1;
    /* 0x1210 */ AsdSndSlotC *outputC0;
    /* 0x1214 */ AsdSndSlotC *outputC1;
    /* 0x1218 */ AsdSndSlotA *currentSlotA;
    /* 0x121c */ u8 archiveLoaded;
    /* 0x121d */ u8 pad121d[3];
} AsdSoundSystem;

/* IV: the sound layer's status block, which follows the duck state (0x1c bytes in). */
typedef struct AsdSndStatus {
    /* 0x00 */ void *objects;     /* head of the list of live sound objects */
    /* 0x04 */ s32 objectCount;
    /* 0x08 */ u8 unk08[0xd];
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 pad16;
    /* 0x17 */ s8 hasStream;     /* a sound stream is loaded */
} AsdSndStatus;

/* Apocalypse: the sound layer's status block, which follows the duck state (0x1c bytes in). */
typedef struct AsdSndStatusApoc {
    /* 0x00 */ struct AsdSndObject *objects; /* head of the list of live sound objects */
    /* 0x04 */ s32 objectCount;
    /* 0x08 */ u8 unk08[0x11];
    /* 0x19 */ s8 ready;         /* the sound layer is up */
    /* 0x1a */ u8 unk1a;
    /* 0x1b */ u8 hasStream;     /* a sound stream is loaded */
} AsdSndStatusApoc;

/* Apocalypse: a playing sound (0xfc bytes), linked into the status block's list. */
typedef struct AsdSndObject {
    union {
        /* 0x00 */ u8 unk00[0x68];
        struct {
            u32 active, unk04;
            u8 waveBuffers[2][2][0x18]; // 0x08
        } stream;
    };
    union {
        /* 0x68 */ u32 voices[0x1c]; /* preserved legacy storage view */
        struct {
            u32 voices[2]; // 0x68
            u8 mix[2][0x30]; // 0x70
            u32 sampleParameters[2]; // 0xd0
        } playback;
    };
    /* 0xd8 */ struct AsdSndObject *next;
    /* 0xdc */ struct AsdSndObject *prev;
    /* 0xe0 */ s32 fadeFrames;
    /* 0xe4 */ u32 unke4;
    /* 0xe8 */ u32 fadeElapsed;
    /* 0xec */ s32 voiceCount;
    /* 0xf0 */ u32 unkf0;
    /* 0xf4 */ u32 flags;
    /* 0xf8 */ f32 volume;
} AsdSndObject;

/* Apocalypse: a node of the list of registered sound ids (0x1c bytes). */
typedef struct AsdSndHandleNode {
    /* 0x00 */ s32 handle;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u8 value;
    /* 0x0d */ u8 unk0d;
    /* 0x0e */ u8 unk0e;
    /* 0x0f */ u8 unk0f;
    /* 0x10 */ struct AsdSndHandleNode *prev;
    /* 0x14 */ struct AsdSndHandleNode *next;
    /* 0x18 */ s32 id;
} AsdSndHandleNode;

/* The sound options a player can change (only the four switches the sound code reads are known). */
typedef struct AsdSndOptions {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ s8 option0;
    /* 0x91 */ s8 option1;
    /* 0x92 */ s8 option2;
    /* 0x93 */ s8 option3;
} AsdSndOptions;

/* The listener position, created on first use. */
typedef struct AsdSndListener {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
} AsdSndListener;

#endif
