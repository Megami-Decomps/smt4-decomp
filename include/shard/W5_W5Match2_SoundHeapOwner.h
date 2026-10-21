#ifndef SHARD_W5_W5MATCH2_SOUNDHEAPOWNER_H
#define SHARD_W5_W5MATCH2_SOUNDHEAPOWNER_H

#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundHeapOwner {
    /* 0x000 */ u8 unk000[0x204];
    /* 0x204 */ AsdSndSlotB *slot;
};

#endif
