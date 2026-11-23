/* battle/Talk/btlTalkBustUp.cpp: the bust-up portrait of the talk screen (both games, 0x30C bytes,
 * btlTalkBustUpCreate), kept by g_btlTalkBustUp. */
#ifndef BATTLE_TALK_BTLTALKBUSTUP_H
#define BATTLE_TALK_BTLTALKBUSTUP_H

#include "common.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

struct BtlTalkBustUpPlacement {
    /* 0x00 */ s8 playing[4];  /* whether each overlay's idle animation is running */
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[3];
};

typedef char BtlTalkBustUpPlacementSizeCheck[sizeof(BtlTalkBustUpPlacement) == 8 ? 1 : -1];

typedef struct BtlTalkBustUp {
    /* 0x000 */ UiResourceParameters resources; /* the sprites' animation streams */
    /* 0x020 */ UiSpriteState sprites[5];      /* [0] is the portrait */
    /* 0x2DC */ BtlTalkBustUpPlacement placement;
    /* 0x2E4 */ u32 job;
    /* 0x2E8 */ s32 state;          /* 1: loading the texture, 2: shown, 3: released */
    /* 0x2EC */ u32 stateCounter;
    /* 0x2F0 */ u32 category;       /* from the demon's enemy record */
    /* 0x2F4 */ s8 textureReady;
    /* 0x2F5 */ s8 active;         /* the portrait is on screen */
    /* 0x2F6 */ u8 unk2F6[2];
    /* 0x2F8 */ s32 textureNode;    /* the demon's texture-table node, -1 when released */
    /* 0x2FC */ f32 scaleX;
    /* 0x300 */ f32 scaleY;
    /* 0x304 */ f32 progress;
    /* 0x308 */ u32 devilId;        /* the demon shown */
} BtlTalkBustUp;

typedef char BtlTalkBustUpOffsetCheck[offsetof(BtlTalkBustUp, sprites) == 0x20 &&
    offsetof(BtlTalkBustUp, placement) == 0x2DC && offsetof(BtlTalkBustUp, job) == 0x2E4 && offsetof(BtlTalkBustUp, textureReady) == 0x2F4 &&
    offsetof(BtlTalkBustUp, textureNode) == 0x2F8 && offsetof(BtlTalkBustUp, devilId) == 0x308 &&
    sizeof(BtlTalkBustUp) == 0x30C ? 1 : -1];

extern "C" {
/* The talk portrait (NULL until btlTalkBustUpCreate). */
extern BtlTalkBustUp *g_btlTalkBustUp;
}

#endif
