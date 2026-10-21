#ifndef SHARD_W6_W6MATCH7_WAVEBUFFER_H
#define SHARD_W6_W6MATCH7_WAVEBUFFER_H
#include "common.h"

struct WaveArchiveEntry {
    /* 0x00 */ u8 format;
    /* 0x01 */ u8 looping;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 loopStart;
    /* 0x0c */ u32 sampleCount;
};

struct WaveBuffer {
    /* 0x00 */ u8 *data;
    /* 0x04 */ u32 sampleCount;
    /* 0x08 */ void *adpcmContext;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u8 looping;
    /* 0x11 */ u8 unk11[7];
};

struct WavePlayer {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ void *voice;
};
#endif
