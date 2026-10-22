#ifndef NN_SND_INITIALIZATION_H
#define NN_SND_INITIALIZATION_H

#include "common.h"

struct NnSndInitialization {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 hardwareMode;
    /* 0x05 */ u8 ready;
};
struct SystemSoundInfo {
    /* 0x000 */ u8 unk000[0xC0];
    /* 0x0C0 */ s8 mode;
};
struct NnSndMasterManager;
struct NnSndVoiceManager;

#endif
