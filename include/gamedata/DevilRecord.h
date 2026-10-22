#ifndef GAMEDATA_DEVILRECORD_H
#define GAMEDATA_DEVILRECORD_H

#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/Table00.h"
#include <stddef.h>

struct DevilChanceData {
    /* 0x00, bits 0-6 */ u32 unk00 : 7;
    /* 0x00, bits 7-13 */ u32 baseChance : 7;
    /* 0x01, bits 14-31 */ u32 unk01 : 18;
};

// Table 00's full retail record, with the common ID/race/level prefix.
struct DevilRecord {
    /* 0x00 */ DevilSortRecord header;
    union {
        /* 0x04 */ u8 unk04[0x28];
        struct {
            /* 0x04 */ u8 unk04[0x12];
            /* 0x16 */ u16 linkFlags;
            /* 0x18 */ u8 unk18[0x14];
        } links;
    };
    /* 0x2C */ DevilChanceData chance;
    union {
        /* 0x30 */ u8 unk30[0x60];
        struct {
            /* 0x30 */ u8 tone;
            /* 0x31 */ u8 alternate;
        } talk;
        struct {
            /* 0x30 */ u8 unk30[0x4c];
            /* 0x7C */ u16 linkedIds[3];
            /* 0x82 */ u8 unk82[0x0e];
        } requirements;
        struct {
            /* 0x30 */ u8 unk30[0x28];
            /* 0x58 */ Table00Choice entries[3];
        } randomChoices;
    };
    /* 0x90 */ u16 model;
    /* 0x92 */ u8 unk92[2];
};

typedef char DevilRecordSizeCheck[sizeof(DevilRecord) == 0x94 ? 1 : -1];
typedef char DevilRecordChanceLayoutCheck[sizeof(DevilChanceData) == 4 &&
    offsetof(DevilRecord, chance) == 0x2C && offsetof(DevilRecord, model) == 0x90 ? 1 : -1];
typedef char DevilRecordLinkLayoutCheck[offsetof(DevilRecord, links.linkFlags) == 0x16 && offsetof(DevilRecord, requirements.linkedIds) == 0x7c ? 1 : -1];
typedef char DevilRecordTalkOffsetCheck[
    offsetof(DevilRecord, talk.tone) == 0x30 &&
    offsetof(DevilRecord, talk.alternate) == 0x31 ? 1 : -1];
typedef char DevilRecordRandomChoicesOffsetCheck[
    offsetof(DevilRecord, randomChoices.entries) == 0x58 &&
    sizeof(Table00Choice) == 6 ? 1 : -1];

#endif
