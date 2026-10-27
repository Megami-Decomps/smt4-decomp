/* NON_MATCHING: structure and calls match retail; armcc if-converts the observer's enabled-byte test (ldrbne/cmpne) where retail branches after setting the call arguments, and the callee-saved registers are numbered differently (retail: id r5, file info r6, file r7). */
#include "common.h"

/* Three words handed through to the playback call. */
struct PlayParameters {
    u32 first;
    u32 second;
    u32 third;
};

/* The first two playback words, passed by value. */
struct PlayWordPair {
    u32 first;
    u32 second;
};

/* Where a sound item lives: offsets into the archive, or the file it points at. */
struct SoundFileInfo {
    /* 0x00 */ s32 position;
    /* 0x04 */ s32 size;
    /* 0x08 */ void *file;
};

/* Receives the file info the archive reader produced (virtual slot 0x30). */
class SoundObserver {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void vfunc24();
    virtual void vfunc28();
    virtual void vfunc2c();
    virtual void fileInfoRead(u32 id, SoundFileInfo *info, u32 flags);

    /* 0x04 */ u8 enabled;
};

struct SoundPlayer;
struct SoundPlayerVtbl {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *(*playRegion)(SoundPlayer *player, u32 a, u32 b, s32 offset, s32 position);
};
struct SoundPlayer {
    /* 0x000 */ SoundPlayerVtbl *vtbl;
    /* 0x004 */ void *reader;
    /* 0x008 */ SoundObserver *observer;
    /* 0x00C */ u8 unk00c[0x100];
    /* 0x10C */ s32 dataOffset;
};

extern "C" {

s32 nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(void *reader, u32 id, SoundFileInfo *info, u32 flags);
void *FUN_001bbb1c(SoundPlayer *player, u32 a, u32 b, void *file, PlayParameters parameters);

/* Reads the file info of sound item `id` and reports it to the archive observer, if one is enabled. */
static __inline bool readFileInfo(SoundPlayer *player, u32 id, SoundFileInfo *info)
{
    if (nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(player->reader, id, info, 0) == 0) {
        return false;
    }
    SoundObserver *observer = player->observer;
    if (observer != NULL) {
        if (observer->enabled != 0) {
            observer->fileInfoRead(id, info, 0);
        }
    }
    return true;
}

/* Starts playing sound item `id`: from `file` or the item's own file when it has one, else from its region of the archive data. */
void *FUN_001b1784(SoundPlayer *player, u32 id, u32 a, u32 b, PlayWordPair words, void *file, u32 third)
{
    PlayParameters parameters = {words.first, words.second, third};
    SoundFileInfo info;
    info.position = -1;
    info.size = -1;
    info.file = NULL;
    if (!readFileInfo(player, id, &info)) {
        return NULL;
    }
    if (info.file != NULL) {
        if (file != NULL) {
            return FUN_001bbb1c(player, a, b, file, parameters);
        }
        return FUN_001bbb1c(player, a, b, info.file, parameters);
    }
    if (info.position != -1 && info.size != -1) {
        return player->vtbl->playRegion(player, a, b, info.size + player->dataOffset, info.position);
    }
    return NULL;
}

} /* extern "C" */
