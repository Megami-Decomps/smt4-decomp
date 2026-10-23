#ifndef MOBICLIP_CTRL_MOBICLIPPLAYBACKSTART_H
#define MOBICLIP_CTRL_MOBICLIPPLAYBACKSTART_H
#include "shard/S2MovieSync.h"
#include <stddef.h>

struct MovieOpenFile {
    u32 handle;
    u32 positionLow, positionHigh;
    u32 sizeLow, sizeHigh;
};
struct MoviePathConversionState {
    u32 pending;
    u32 character;
};
struct MoviePlaybackBackend {
    u8 reader[0xc];
    u8 player[1];
};
typedef char MoviePlaybackStartOffsets[
    offsetof(MovieOpenFile, sizeLow) == 0xc && sizeof(MovieOpenFile) == 0x14 &&
    sizeof(MoviePathConversionState) == 8 &&
    offsetof(MoviePlaybackBackend, player) == 0xc ? 1 : -1];
#endif
