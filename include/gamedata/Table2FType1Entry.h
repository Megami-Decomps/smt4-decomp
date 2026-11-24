#ifndef GAMEDATA_TABLE2FTYPE1ENTRY_H
#define GAMEDATA_TABLE2FTYPE1ENTRY_H

#include <stddef.h>
#include "common.h"

/* Data table 0x2F, section 1. */
struct Table2FType1Entry {
    /* 0x00 */ u8 unk00[0xA];
    /* 0x0A */ u16 level;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u8 unk10[2];
    /* 0x12 */ s16 counterId;
    /* 0x14 */ s16 hasValue;
    /* 0x16 */ u16 rate;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ s32 flagId;
};

typedef char Table2FType1EntryLayoutCheck[sizeof(Table2FType1Entry) == 0x20 &&
    offsetof(Table2FType1Entry, counterId) == 0x12 && offsetof(Table2FType1Entry, flagId) == 0x1C ? 1 : -1];

extern "C" Table2FType1Entry *dataTable2FType1GetEntry(u32 index);

#endif
