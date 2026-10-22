#ifndef GAMEDATA_SAVELOADPROCESSSTATE_H
#define GAMEDATA_SAVELOADPROCESSSTATE_H
#include "common.h"
#include <stddef.h>

struct SaveLoadProcessWork24 {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 result;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 option;
    /* 0x14 */ u32 unk14;
};
struct SaveByteSettings {
    u8 selected;
    u8 first;
    u8 second;
    u8 third;
    u8 fourth;
    u8 unk05;
    u16 value;
    u32 flags;
};
typedef char SaveLoadProcessStateLayoutCheck[
    offsetof(SaveLoadProcessWork24, option) == 0x10 &&
    sizeof(SaveLoadProcessWork24) == 0x18 &&
    offsetof(SaveByteSettings, value) == 6 &&
    offsetof(SaveByteSettings, flags) == 8 &&
    sizeof(SaveByteSettings) == 0xC ? 1 : -1];
#endif
