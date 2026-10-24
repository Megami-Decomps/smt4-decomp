/* The battle effect work's request names and loaded effect slots (the part the effect loaders touch). */
#ifndef BATTLE_BTLEFFECTLOAD_H
#define BATTLE_BTLEFFECTLOAD_H

#include "common.h"

/* The effect names the battle recognises (g_btlEffect). */
struct BtlEffectNames {
    /* 0x00 */ const char *numberedPrefix; /* "<prefix>NN" selects a numbered effect */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ const char *ignoredPrefix;
    /* 0x10 */ const char *ignoredName;
    /* 0x14 */ const char *ignoredNameB;
};

/* The effect names a battle unit asks for: eight 0x16-byte names from +0x58 (four per loader). */
struct BtlEffectRequest {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ char names[8][0x16];
};

/* A loaded effect file of the battle's effect work. */
struct BtlEffectSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *file;
    /* 0x08 */ char name[0x80];
    /* 0x88 */ u8 flags;
    /* 0x89 */ u8 unk89[3];
};

/* The battle effect work, Apocalypse layout (observed fields). */
struct BtlEffectWorkA {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ BtlEffectRequest *request;
    /* 0x1F58 */ u8 unk1F58[0x234];
    /* 0x218C */ BtlEffectSlot slots[8];
    /* 0x264C */ u8 unk264C[0xD5C];
    /* 0x33A8 */ u32 numberedEffect;
    /* 0x33AC */ u8 numberedIndex;
};

/* The same work in Shin Megami Tensei IV. */
struct BtlEffectWork {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ BtlEffectRequest *request;
    /* 0x1D00 */ u8 unk1D00[0x230];
    /* 0x1F30 */ BtlEffectSlot slots[8];
    /* 0x23F0 */ u8 unk23F0[0xC44];
    /* 0x3034 */ u32 numberedEffect;
    /* 0x3038 */ u8 numberedIndex;
};

#endif
