/* nw::snd internal sound-archive loader: the object the data-loaded checks run on. */
#ifndef S2_SOUND_LOADER_H
#define S2_SOUND_LOADER_H

#include "common.h"

typedef struct SoundLoader SoundLoader;

/* nw::snd::SoundArchive as far as the loader looks inside it. */
typedef struct SoundArchive {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ void *fileTable;
} SoundArchive;

/* Item kinds, the top byte of a sound-archive id. */
#define SND_ITEM_SOUND 1
#define SND_ITEM_SOUND_GROUP 2
#define SND_ITEM_BANK 3
#define SND_ITEM_PLAYER 4
#define SND_ITEM_WAVE_ARCHIVE 5
#define SND_ITEM_GROUP 6

/* Sound types GetSoundType answers with. */
#define SND_SOUND_TYPE_STREAM 1
#define SND_SOUND_TYPE_WAVE 3

typedef struct SoundLoaderVtbl {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 (*isFileLoaded)(SoundLoader *loader, u32 fileId);
} SoundLoaderVtbl;

struct SoundLoader {
    /* 0x00 */ const SoundLoaderVtbl *vtbl;
    /* 0x04 */ SoundArchive *archive;
};

/* Note data read from a wave sound's file. */
typedef struct WaveNoteInfo {
    /* 0x00 */ u32 waveArchiveId;
    /* 0x04 */ u32 waveIndex;
    /* 0x08 */ u8 unk08[5];
} WaveNoteInfo;

#endif
