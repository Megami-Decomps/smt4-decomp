/* NON_MATCHING: retail copies the 12-byte stack argument with one vldmia/vstmia {s16-s18} block and keeps it in VFP registers; this build copies the three words one by one. */
#include "common.h"

/* Three words handed through to the playback call. */
struct PlayParameters {
    u32 first;
    u32 second;
    u32 third;
};

/* Where a sound item lives: offsets into the archive, or the file it points at. */
struct SoundFileInfo {
    /* 0x00 */ s32 position;
    /* 0x04 */ s32 size;
    /* 0x08 */ void *file;
};

struct SoundPlayer;
struct SoundPlayerVtbl {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void (*playRegion)(SoundPlayer *player, u32 a, u32 b, s32 offset, s32 position);
};
struct SoundPlayer {
    /* 0x000 */ SoundPlayerVtbl *vtbl;
    /* 0x004 */ void *reader;
    /* 0x008 */ u8 unk008[0x100];
    /* 0x108 */ s32 dataOffset;
};

extern "C" {

s32 nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(void *reader, u32 id, SoundFileInfo *info, u32 flags);
void FUN_001556d8(SoundPlayer *player, u32 a, u32 b, void *file, PlayParameters parameters);

/* Starts playing sound item `id`: from its own file when it has one, else from its region of the archive data. */
void FUN_00150c4c(SoundPlayer *player, u32 id, u32 a, u32 b, PlayParameters parameters)
{
    SoundFileInfo info;
    info.position = -1;
    info.size = -1;
    info.file = NULL;
    if (nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(player->reader, id, &info, 0) != 0) {
        if (info.file != NULL) {
            FUN_001556d8(player, a, b, info.file, parameters);
        } else if (info.position != -1 && info.size != -1) {
            player->vtbl->playRegion(player, a, b, info.size + player->dataOffset, info.position);
        }
    }
}

} /* extern "C" */
