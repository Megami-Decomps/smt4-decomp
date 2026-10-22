#ifndef SHARD_W9_W9MATCH7_BUFFEREDVALUESTATE_H
#define SHARD_W9_W9MATCH7_BUFFEREDVALUESTATE_H
#include "common.h"
#include <stddef.h>

struct BufferedValueEntry {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u32 primary;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u8 ready;
    /* 0x39 */ u8 unk39[7];
};
struct BufferedValueState {
    /* 0x0000 */ u8 unk0000[0x4850];
    /* 0x4850 */ s32 count;
    /* 0x4854 */ u8 unk4854;
    /* 0x4855 */ u8 enabled;
    /* 0x4856 */ u8 unk4856[6];
    /* 0x485C */ BufferedValueEntry entries[1];
};
typedef char BufferedValueEntryLayoutCheck[
    sizeof(BufferedValueEntry) == 0x40 && offsetof(BufferedValueEntry, primary) == 0x2C &&
    offsetof(BufferedValueEntry, ready) == 0x38 ? 1 : -1];
typedef char BufferedValueStateLayoutCheck[
    offsetof(BufferedValueState, entries) == 0x485C && offsetof(BufferedValueState, enabled) == 0x4855 ? 1 : -1];
#endif
