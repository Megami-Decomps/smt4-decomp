#ifndef SHARD_W5_W5MATCH7_UIQUEST_H
#define SHARD_W5_W5MATCH7_UIQUEST_H

#include "common.h"

struct UiQuestApoc {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 menuState;
    /* 0x008 */ s32 previousMenuState;
    /* 0x00c */ u8 unk00c[4];
    /* 0x010 */ s32 menuTimer;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ u8 mainSprite[0x8c];
    /* 0x0c0 */ u8 unk0c0[0x84c];
    /* 0x90c */ u8 unk90c;
    /* 0x90d */ u8 unk90d[2];
    /* 0x90f */ s8 mode;
    union {
        /* 0x910 */ u8 unk910[0xc];
        struct {
            /* 0x910 */ s32 selection;
            /* 0x914 */ s32 previousSelection;
            /* 0x918 */ s32 count;
        } listState;
    };
    /* 0x91c */ u32 sprites[4];
    /* 0x92c */ u8 unk92c[4];
    /* 0x930 */ u32 messages;
    /* 0x934 */ u8 unk934[0xb];
    /* 0x93f */ s8 state;
    /* 0x940 */ s8 active;
    /* 0x941 */ s8 step;
    /* 0x942 */ u8 unk942[0x6a];
    /* 0x9ac */ u8 cursor[0x12a];
    /* 0xad6 */ u16 list[252];
    /* 0xcce */ u16 selectedId;
    /* 0xcd0 */ s16 detailMode;
};

extern "C" {
extern UiQuestApoc *g_uiQuest;
}

#endif
