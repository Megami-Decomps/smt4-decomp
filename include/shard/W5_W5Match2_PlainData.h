#ifndef SHARD_W5_W5MATCH2_PLAINDATA_H
#define SHARD_W5_W5MATCH2_PLAINDATA_H
#include "common.h"
struct Matrix44 { f32 values[16]; };
struct EmptyRange { f32 x,y,width,height; s32 selection; };
struct ReadyResource { u8 unk00[0x45]; u8 enabled; u8 unk46[2]; void *resource; };
struct TableCount { u8 unk00[4]; u16 count; };
struct TableResourceEntry {
    u8 unk00[0x18];
    void *resource;
    union {
        u8 unk1C[4];
        s32 textureIndex;
    };
};
struct ResourceTableView {
    union {
        u8 unk00[0x10];
        struct {
            u32 unk00;
            s32 id;
            s32 mode;
        } identity;
    };
    TableCount *header;
    TableResourceEntry *entries;
};
typedef char ResourceTableViewLayoutCheck[
    sizeof(TableResourceEntry) == 0x20 && sizeof(ResourceTableView) == 0x18 &&
    __INTADDR__(&((TableResourceEntry *)0)->textureIndex) == 0x1C &&
    __INTADDR__(&((ResourceTableView *)0)->identity.id) == 4 &&
    __INTADDR__(&((ResourceTableView *)0)->identity.mode) == 8 &&
    __INTADDR__(&((ResourceTableView *)0)->header) == 0x10 &&
    __INTADDR__(&((ResourceTableView *)0)->entries) == 0x14 ? 1 : -1];
#endif
