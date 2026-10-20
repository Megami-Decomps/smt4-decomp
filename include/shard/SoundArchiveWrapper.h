/* The wrapper object the sound archive query stubs receive: its archive reference sits at +4. */
#ifndef SHARD_SOUNDARCHIVEWRAPPER_H
#define SHARD_SOUNDARCHIVEWRAPPER_H

#include "nw/snd/SoundArchiveQuery.h"

typedef struct SoundArchiveWrapper {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SoundArchiveRef *ref;
} SoundArchiveWrapper;

#endif
