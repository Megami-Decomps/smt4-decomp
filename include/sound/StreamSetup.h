#ifndef SOUND_STREAMSETUP_H
#define SOUND_STREAMSETUP_H

#include "common.h"
#include <stddef.h>

struct StreamSetupInfo {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 channels;
    /* 0x14 */ u8 unk14[0xC];
};

struct StreamSetupState {
    /* 0x000 */ u8 unk000[0xD8];
    /* 0x0D8 */ u8 pool[0x18];
    /* 0x0F0 */ void *buffer;
    /* 0x0F4 */ u8 inlineBuffer[0x1C];
    /* 0x110 */ u32 callback;
};

typedef char StreamSetupInfoLayoutCheck[
    offsetof(StreamSetupInfo, channels) == 0x10 && sizeof(StreamSetupInfo) == 0x20 ? 1 : -1];
typedef char StreamSetupStateLayoutCheck[
    offsetof(StreamSetupState, pool) == 0xD8 &&
    offsetof(StreamSetupState, buffer) == 0xF0 &&
    offsetof(StreamSetupState, inlineBuffer) == 0xF4 &&
    offsetof(StreamSetupState, callback) == 0x110 && sizeof(StreamSetupState) == 0x114 ? 1 : -1];

#endif
