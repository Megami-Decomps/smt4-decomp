#ifndef MAP_FIELD_NPC_H
#define MAP_FIELD_NPC_H

#include "map/MapVector.h"
#include <stddef.h>

class Obj557b18;

struct FieldNpcController {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Obj557b18 *body;
};

/* Field marker work: its model, interaction range, and the animation played as it rises. */
struct FieldNpc {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 byteFlags;
    /* 0x0D */ u8 unk0D[0x1F];
    /* 0x2C */ MapVector position;
    /* 0x38 */ u8 unk38[0xC];
    /* 0x44 */ MapVector rotation;   /* Euler angles in degrees */
    /* 0x50 */ MapVector scale;
    /* 0x5C */ u32 queueCount;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ u32 messageId;
    /* 0x68 */ u8 unk68[4];
    /* 0x6C */ s32 counter;
    /* 0x70 */ s32 mode;
    /* 0x74 */ u8 unk74[4];
    /* 0x78 */ FieldNpcController *controller;
    /* 0x7C */ u32 flags;
    /* 0x80 */ u8 unk80[4];
    /* 0x84 */ u16 limit;
    /* 0x86 */ u8 unk86[5];
    /* 0x8B */ u8 kind;
    /* 0x8C */ u8 unk8C[0xC];
    /* 0x98 */ MapVector offset;
};

enum {
    NPC_FLAG_PENDING = 0x01,
    NPC_FLAG_RISING = 0x02,
    NPC_FLAG_NEAR = 0x04,
    NPC_FLAG_HIDDEN = 0x08,
    NPC_BYTE_FLAG_ACTIVE = 0x10,
    NPC_VISIBLE_BITS = 3
};

typedef char FieldNpcOffsets[offsetof(FieldNpcController, body) == 4 &&
    offsetof(FieldNpc, controller) == 0x78 && offsetof(FieldNpc, flags) == 0x7C &&
    offsetof(FieldNpc, offset) == 0x98 ? 1 : -1];

#endif
