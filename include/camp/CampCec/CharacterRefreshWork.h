#ifndef CAMP_CAMPCEC_CHARACTER_REFRESH_WORK_H
#define CAMP_CAMPCEC_CHARACTER_REFRESH_WORK_H
#include "shard/Shard0032.h"
#include <stddef.h>

struct CharacterRefreshWork {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ void *link;
    /* 0x008 */ PlayerSummary *summary;
    /* 0x00C */ u32 panel;
    /* 0x010 */ u8 unk010[0x48];
    /* 0x058 */ u32 parameter;
    /* 0x05C */ u8 unk05C[0x8C];
    /* 0x0E8 */ s32 unk0E8;
    /* 0x0EC */ s32 unk0EC;
    /* 0x0F0 */ u8 unk0F0[8];
    /* 0x0F8 */ s32 phase;
    /* 0x0FC */ u8 unk0FC[0xC];
    /* 0x108 */ u16 mode;
    /* 0x10A */ u8 unk10A[6];
    /* 0x110 */ u8 refresh;
    /* 0x111 */ u8 unk111;
    /* 0x112 */ u8 ready;
    /* 0x113 */ u8 unk113[0x39];
    /* 0x14C */ u32 command;
    /* 0x150 */ s32 remaining;
};
typedef char CharacterRefreshWorkOffsets[sizeof(CharacterRefreshWork) == 0x154 &&
    offsetof(CharacterRefreshWork, summary) == 8 &&
    offsetof(CharacterRefreshWork, mode) == 0x108 &&
    offsetof(CharacterRefreshWork, refresh) == 0x110 &&
    offsetof(CharacterRefreshWork, ready) == 0x112 &&
    offsetof(CharacterRefreshWork, command) == 0x14C &&
    offsetof(CharacterRefreshWork, remaining) == 0x150 ? 1 : -1];
#endif
