#ifndef GAMEDATA_TABLEGROUP_H
#define GAMEDATA_TABLEGROUP_H

#include "common.h"
#include <stddef.h>

struct TableGroupSection {
    /* 0x00 */ s32 kind;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 count;
    /* 0x0C */ s32 dataOffset;
};

struct TableGroupHeader {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 sectionCount;
    /* 0x14 */ u8 unk14[0x0C];
    /* 0x20 */ TableGroupSection sections[1];
};

typedef char TableGroupSectionLayoutCheck[
    sizeof(TableGroupSection) == 0x10 &&
    offsetof(TableGroupSection, kind) == 0 &&
    offsetof(TableGroupSection, count) == 8 &&
    offsetof(TableGroupSection, dataOffset) == 0xC ? 1 : -1];
typedef char TableGroupHeaderLayoutCheck[
    sizeof(TableGroupHeader) == 0x30 &&
    offsetof(TableGroupHeader, sectionCount) == 0x10 &&
    offsetof(TableGroupHeader, sections) == 0x20 ? 1 : -1];

#endif
