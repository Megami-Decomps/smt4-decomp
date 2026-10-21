#ifndef SHARD_W5_W5MATCH7_UIQUEST_H
#define SHARD_W5_W5MATCH7_UIQUEST_H

#include "common.h"

struct UiQuestApoc {
    /* 0x000 */ u8 unk000[0x90f];
    /* 0x90f */ s8 mode;
    /* 0x910 */ u8 unk910[0xc];
    /* 0x91c */ u32 sprites[4];
    /* 0x92c */ u8 unk92c[4];
    /* 0x930 */ u32 messages;
    /* 0x934 */ u8 unk934[0xb];
    /* 0x93f */ s8 state;
    /* 0x940 */ s8 active;
    /* 0x941 */ s8 step;
};

extern "C" {
extern UiQuestApoc *g_uiQuest;
}

#endif
