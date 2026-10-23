#ifndef MOBICLIP_MOVIEPLAYERINITIALIZATION_H
#define MOBICLIP_MOVIEPLAYERINITIALIZATION_H
#include "shard/W6_W6Match7_MoviePacketPump.h"
#include "nn/os/ThreadLaunch.h"
#include <stddef.h>
struct MoviePlayerInitialization {
    union {
        MoviePacketPump pump;
        struct {
            u8 criticalSection[0xC];
            s32 state;
            u8 stopping;
            u8 suspended;
            u8 unk12[2];
            void *fileBackend;
            void *reader;
            u32 counter;
            u8 wakeEvent[8];
            u8 thread[0xC];
            u8 unk034[0x130 - 0x34];
            u64 firstPacketTime;
            u8 unk138[8];
            u64 nextTime;
            u64 firstTime;
            u64 lastTime;
            u8 queue[0x60];
            void *decoder;
            void *output;
            void *consumer;
            u32 audio;
        } initialization;
    };
    u32 restart;
    u32 error;
    u32 pending;
};
typedef char MoviePlayerInitializationOffsets[
    offsetof(MoviePlayerInitialization, initialization.fileBackend) == 0x14 &&
    offsetof(MoviePlayerInitialization, initialization.wakeEvent) == 0x20 &&
    offsetof(MoviePlayerInitialization, initialization.thread) == 0x28 &&
    offsetof(MoviePlayerInitialization, initialization.decoder) == 0x1B8 &&
    offsetof(MoviePlayerInitialization, initialization.audio) == 0x1C4 &&
    offsetof(MoviePlayerInitialization, restart) == 0x550 &&
    offsetof(MoviePlayerInitialization, pending) == 0x558 ? 1 : -1];
#endif
