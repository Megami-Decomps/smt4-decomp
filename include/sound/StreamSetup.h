#ifndef SOUND_STREAMSETUP_H
#define SOUND_STREAMSETUP_H

#include "common.h"
#include <stddef.h>

/* What the sound archive reports about its players (NW's SoundArchivePlayerInfo); the stream
 * setup reads only the stream channel count. Apocalypse's record is a word longer. */
struct StreamSetupInfo {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 channels;
    /* 0x14 */ u8 unk14[0x8];
};

struct StreamSetupInfoA {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 channels;
    /* 0x14 */ u8 unk14[0xC];
};

/* The sound archive player whose stream buffer pool the setup initialises (IV). */
struct StreamSetupState {
    /* 0x000 */ u8 unk000[0x88];
    /* 0x088 */ u8 pool[0x18];
    /* 0x0A0 */ void *buffer;
    /* 0x0A4 */ u8 inlineBuffer[0x18];
    /* 0x0BC */ u32 callback;
};

/* Apocalypse's layout of the same player. */
struct StreamSetupStateA {
    /* 0x000 */ u8 unk000[0xD8];
    /* 0x0D8 */ u8 pool[0x18];
    /* 0x0F0 */ void *buffer;
    /* 0x0F4 */ u8 inlineBuffer[0x1C];
    /* 0x110 */ u32 callback;
};

typedef char StreamSetupInfoLayoutCheck[
    offsetof(StreamSetupInfo, channels) == 0x10 && sizeof(StreamSetupInfo) == 0x1C &&
    offsetof(StreamSetupInfoA, channels) == 0x10 && sizeof(StreamSetupInfoA) == 0x20 ? 1 : -1];
typedef char StreamSetupStateLayoutCheck[
    offsetof(StreamSetupState, pool) == 0x88 &&
    offsetof(StreamSetupState, buffer) == 0xA0 &&
    offsetof(StreamSetupState, inlineBuffer) == 0xA4 &&
    offsetof(StreamSetupState, callback) == 0xBC ? 1 : -1];
typedef char StreamSetupStateALayoutCheck[
    offsetof(StreamSetupStateA, pool) == 0xD8 &&
    offsetof(StreamSetupStateA, buffer) == 0xF0 &&
    offsetof(StreamSetupStateA, inlineBuffer) == 0xF4 &&
    offsetof(StreamSetupStateA, callback) == 0x110 && sizeof(StreamSetupStateA) == 0x114 ? 1 : -1];

#endif
