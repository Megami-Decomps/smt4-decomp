#ifndef GAMEDATA_DISPLAYNAME_H
#define GAMEDATA_DISPLAYNAME_H
#include "common.h"
#include <stddef.h>

struct DisplayNameRecord {
    char text[0x20];
    s16 id; // 0x20: -1 terminates the table
};
struct DisplayNameOverride {
    s16 id; // 0x00: -1 terminates the table
    char text[0x20];
};
struct NaviNameStateView {
    u32 unk00;
    const char *fallback; // 0x04
};
typedef char DisplayNameRecordSizeCheck[sizeof(DisplayNameRecord) == 0x22 && offsetof(DisplayNameRecord, id) == 0x20 ? 1 : -1];
typedef char DisplayNameOverrideSizeCheck[sizeof(DisplayNameOverride) == 0x22 && offsetof(DisplayNameOverride, text) == 2 ? 1 : -1];
typedef char NaviNameStateViewLayoutCheck[sizeof(NaviNameStateView) == 8 && offsetof(NaviNameStateView, fallback) == 4 ? 1 : -1];
#endif
