/* battle/Talk/btlTalkBustUp.c: the bust-up portrait of the talk screen. */
#ifndef BATTLE_TALK_BTLTALKBUSTUP_H
#define BATTLE_TALK_BTLTALKBUSTUP_H

#include "common.h"

/* The portrait's state block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct BtlTalkBustUp {
    /* 0x000 */ u8 unk000[0x2E4];
    /* 0x2E4 */ u32 job;
    /* 0x2E8 */ s32 state;
    /* 0x2EC */ u32 unk2EC;
    /* 0x2F0 */ u8 unk2F0[4];
    /* 0x2F4 */ u8 unk2F4;
    /* 0x2F5 */ u8 unk2F5[3];
    /* 0x2F8 */ s32 textureNode;
} BtlTalkBustUp;

#endif
