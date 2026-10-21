/* Scene light/node bookkeeping used by the asd light registration. */
#ifndef SHARD_S1LIGHT_H
#define SHARD_S1LIGHT_H

#include "common.h"

/* A scene node that can be registered as a light. */
typedef struct LightNode {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 kind;
    /* 0x10 */ s32 kindCopy;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} LightNode;

/* The object a light node hangs off. */
typedef struct LightOwner {
    /* 0x00 */ u32 flags;      /* bit 21: registration pending */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ LightNode *node;
} LightOwner;

enum {
    LIGHT_OWNER_PENDING = 0x200000
};

struct LightCommandBuffer;

/* Number of lights registered per scene (24 bytes each; the count is the first word). */
typedef struct LightCount {
    /* 0x00 */ u32 count;
    union {
        /* 0x04 */ u8 unk04[0x14];
        struct {
            u8 active;                  /* 0x04 */
            u8 dirty;                   /* 0x05 */
            u8 unk06[2];
            u32 context;                /* 0x08 */
            u32 unk0c;
            LightCommandBuffer* buffer; /* 0x10 */
            u32 unk14;
        } render;
    };
} LightCount;

#endif
