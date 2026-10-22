#ifndef NW_SND_ARCHIVEPOOL_H
#define NW_SND_ARCHIVEPOOL_H

#include "common.h"

struct ArchivePoolCounts {
    /* 0x00 */ u32 firstCount;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 secondCount;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u32 thirdCount;
    /* 0x18 */ u8 unk18[8];
};
struct SoundArchivePool {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 pool[0x24];
    /* 0x2C */ void *buffer;
    /* 0x30 */ u32 bufferSize;
    /* 0x34 */ u32 availableSize;
    /* 0x38 */ u8 initialized;
};

#endif
