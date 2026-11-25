#ifndef GFX_NNGXCOMMANDDEFAULTS_H
#define GFX_NNGXCOMMANDDEFAULTS_H

#include "common.h"

/* Default handles for the nn::gx service: current-process pseudohandle and no acquired GPU. */
struct NngxCommandDefaults {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 gpu;
};

extern "C" const NngxCommandDefaults g_nngxDefaultCommandState;

#endif
