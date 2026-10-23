/* The work block returned by gameGetMapBlock(). */
#ifndef SHARD_SAVEWORK_H
#define SHARD_SAVEWORK_H

#include "common.h"
#include "map/MapCellGrid.h"
#include <stddef.h>

typedef struct SaveWork {
    /* 0x0000 */ u8 unk0000[0x3];
    /* 0x0003 */ u8 unk03;
    /* 0x0004 */ u8 unk0004[0x14];
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk1C;
    /* 0x001D */ u8 unk001D[0x3];
    /* 0x0020 */ s16 unk20;
    union {
        /* 0x0022 */ u8 unk0022[0xBB6];
        struct {
            /* 0x0022 */ u8 unk0022[0x1a];
            /* 0x003c */ MapCellGrid grid;
            /* 0x0744 */ u8 unk0744[0x494];
        } mapCells;
        struct {
            /* 0x0022 */ u8 unk0022BeforeMapRegistration[0x76E];
            /* 0x0790 */ u8 pending;
        } mapRegistration;
    };
    /* 0x0BD8 */ u8 unkBD8[1];
} SaveWork;

typedef char SaveWorkLayoutCheck[sizeof(SaveWork) == 0xbdc &&
    offsetof(SaveWork, mapCells.grid) == 0x3c &&
    offsetof(SaveWork, unkBD8) == 0xbd8 ? 1 : -1];
typedef char SaveWorkMapRegistrationOffsetCheck[
    offsetof(SaveWork, mapRegistration.pending) == 0x790 &&
    sizeof(SaveWork) == 0xBDC ? 1 : -1];

struct MapTriggerFlagView {
    /* 0x000 */ u8 unk000[0x7D4];
    /* 0x7D4 */ u32 flags[1];
};

#endif
