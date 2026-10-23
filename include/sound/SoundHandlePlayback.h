#ifndef SOUND_SOUNDHANDLEPLAYBACK_H
#define SOUND_SOUNDHANDLEPLAYBACK_H
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

// Apocalypse's handle playback owner uses a different layout from the IV sound block.
struct SoundHandlePlaybackStateA {
    /* 0x000 */ u8 unk000[0x194];
    /* 0x194 */ u8 archivePlayer[0x5C8];
    /* 0x75C */ AsdSndHandleNode* handles;
    /* 0x760 */ s32 count;
};
typedef char SoundHandlePlaybackStateAOffsetsCheck[
    offsetof(SoundHandlePlaybackStateA, archivePlayer) == 0x194 &&
    offsetof(SoundHandlePlaybackStateA, handles) == 0x75C &&
    offsetof(SoundHandlePlaybackStateA, count) == 0x760 ? 1 : -1];
#endif
