#ifndef MAP_NKDW_WORLD_DATA_H
#define MAP_NKDW_WORLD_DATA_H

#include "common.h"
#include <stddef.h>

enum { NKDW_MAGIC = 0x57444b4e }; /* "NKDW" */

/* The NKDW header precedes the node, link, index and area arrays. */
struct NkdwWorldHeader {
    /* 0x00 */ u32 magic;
    /* 0x04 */ u16 nodeCount;
    /* 0x06 */ u16 indexCount;
    /* 0x08 */ u32 linkCount;
    /* 0x0C */ u16 areaCount;
    /* 0x0E */ u8 unk0e[0x1a];
};

struct NkdwNode { u8 data[0x20]; };
struct NkdwLink { u8 data[0x28]; };
struct NkdwArea { u8 data[0x18]; };

struct NkdwWorldData {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 id;
    /* 0x08 */ u32 kind;
    /* 0x0C */ s32 index;
    /* 0x10 */ NkdwWorldHeader *header;
    /* 0x14 */ NkdwNode *nodes;
    /* 0x18 */ NkdwLink *links;
    /* 0x1C */ u32 *indices;
    /* 0x20 */ NkdwArea *areas;
    /* 0x24 */ u8 *extra;
    /* 0x28 */ void *allocation;
    /* 0x2C */ u8 unk2c[0x10];
    /* 0x3C */ u8 loaded;
};

typedef char NkdwWorldDataLayoutCheck[
    sizeof(NkdwWorldHeader) == 0x28 && offsetof(NkdwWorldHeader, areaCount) == 0xc &&
    offsetof(NkdwWorldData, header) == 0x10 && offsetof(NkdwWorldData, allocation) == 0x28 &&
    offsetof(NkdwWorldData, loaded) == 0x3c ? 1 : -1];

#endif
