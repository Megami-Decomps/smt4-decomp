#ifndef FIELD_FIELDPLACEMENTLIST_H
#define FIELD_FIELDPLACEMENTLIST_H

#include "common.h"
#include <stddef.h>

struct FieldPlacementRecord {
    /* 0x00 */ s8 map;
    /* 0x01 */ s8 area;
    /* 0x02 */ s16 position[3];
    /* 0x08 */ u16 object;
    /* 0x0A */ u16 condition;
};

struct FieldPlacementList {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 map;
    /* 0x008 */ s32 area;
    /* 0x00C */ u8 unk00C[0x94];
    /* 0x0A0 */ u16 count;
    /* 0x0A2 */ u16 indices[1024];
    /* 0x8A2 */ u8 pending[0x40];
};

typedef char FieldPlacementRecordLayoutCheck[
    offsetof(FieldPlacementRecord, condition) == 0xA && sizeof(FieldPlacementRecord) == 0xC ? 1 : -1];
typedef char FieldPlacementListLayoutCheck[
    offsetof(FieldPlacementList, count) == 0xA0 &&
    offsetof(FieldPlacementList, indices) == 0xA2 &&
    offsetof(FieldPlacementList, pending) == 0x8A2 &&
    sizeof(FieldPlacementList) == 0x8E4 ? 1 : -1];

#endif
