#ifndef SHARD_W5_W5MATCH6_UISTATE_H
#define SHARD_W5_W5MATCH6_UISTATE_H
#include "common.h"
struct W5ButtonHelpWork {
    /* 0x000 */ u8 unk000[0x500];
    struct {
        /* 0x500 */ u8 unk500[0xE1];
        /* 0x5E1 */ s8 state;
        /* 0x5E2 */ u8 unk5E2[8];
        /* 0x5EA */ s8 mode;
        /* 0x5EB */ u8 unk5EB[0x15];
    } panel;
    struct {
        /* 0x600 */ u8 unk600[0x7C];
        /* 0x67C */ s8 state;
    } help;
};
struct W5ButtonHelp { u32 unk00; W5ButtonHelpWork *work; };
struct W5QuestWork {
    /* 0x000 */ u8 unk000[0x900];
    struct {
        /* 0x900 */ u8 unk900[0x0D];
        /* 0x90D */ s8 state;
        /* 0x90E */ s8 mode;
    } panel;
};
extern "C" {
extern W5ButtonHelp g_buttonHelp;
extern W5QuestWork *g_uiQuest;
}
#endif
