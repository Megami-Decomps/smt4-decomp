/* AsdSDK/Source/Gfx/Effect/effParts.c: effect parts (particle-like building blocks). */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPARTS_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPARTS_H

#include "common.h"

/* A part object (0x90 bytes; the 0xC0-byte variant adds the fields after it). */
typedef struct EffPart {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88;
    /* 0x89 */ u8 unk89;
    /* 0x8A */ u8 unk8a;
    /* 0x8B */ u8 unk8b[5];
    /* 0x90 */ u8 unk90[0x30];
} EffPart;

#endif
