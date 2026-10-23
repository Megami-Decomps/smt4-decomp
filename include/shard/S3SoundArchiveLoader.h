/* nw::snd::internal::SoundArchiveLoader: loads the data a sound archive item needs. Items are
 * addressed by an id whose top byte is the item type (see SOUNDARCHIVE_ITEM_*). */
#ifndef SHARD_S3SOUNDARCHIVELOADER_H
#define SHARD_S3SOUNDARCHIVELOADER_H

#include "common.h"
#include <stddef.h>

#define SOUNDARCHIVE_ITEM_INVALID 0xFFFFFFFF
#define SOUNDARCHIVE_ITEM_TYPE(id) ((id) >> 24)

/* Load flags (bit 3 = also read the wave sound's note info, bits 1 and 3 = a missing item fails). */
#define SOUNDARCHIVE_LOAD_NOTEINFO 0x8
#define SOUNDARCHIVE_LOAD_STRICT 0xA

struct SoundArchiveLoader;

typedef struct SoundArchiveLoaderVtbl {
    union {
        /* 0x00 */ void *unk00[4];
        struct {
            /* 0x00 */ void *unk00[2];
            /* 0x08 */ void (*registerFile)(SoundArchiveLoader *self, u32 fileId, void *data);
            /* 0x0C */ void *(*getFile)(SoundArchiveLoader *self, u32 fileId);
        } files;
    };
    /* 0x10 */ s32 (*loadItem)(struct SoundArchiveLoader *self, u32 item);
} SoundArchiveLoaderVtbl;
typedef char SoundArchiveLoaderCallbackOffsets[
    offsetof(SoundArchiveLoaderVtbl, files.registerFile) == 8 &&
    offsetof(SoundArchiveLoaderVtbl, files.getFile) == 12 &&
    sizeof(SoundArchiveLoaderVtbl) == 0x14 ? 1 : -1];

typedef struct SoundArchiveLoader {
    /* 0x00 */ const SoundArchiveLoaderVtbl *vtbl;
    /* 0x04 */ void *archive;
} SoundArchiveLoader;

/* Id range of a group-like item, as filled by FUN_0014d4ec. */
typedef struct SoundArchiveIdRange {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 last;
    /* 0x08 */ u32 unk08;
} SoundArchiveIdRange;

/* Wave sound note info read by nw_snd_internal_WaveSoundFileReader_ReadNoteInfo. Only `key`
 * is handed on (by value) to the loader. */
typedef struct SoundNoteKey {
    /* 0x00 */ u32 waveIndex;
    /* 0x04 */ u8 flag0;
    /* 0x05 */ u8 flag1;
    /* 0x06 */ u8 unk06[2];
} SoundNoteKey;

typedef struct SoundNoteExtra {
    u8 flag[5];
} SoundNoteExtra;

typedef struct SoundNoteInfo {
    /* 0x00 */ SoundNoteKey key;
    /* 0x08 */ SoundNoteExtra extra;
    /* 0x0D */ u8 unk0D[11];
} SoundNoteInfo;

/* nw::snd::internal::WaveSoundFileReader, built over one wave sound file. */
typedef struct WaveSoundFileReader {
    u32 unk00[2];
} WaveSoundFileReader;

#endif
