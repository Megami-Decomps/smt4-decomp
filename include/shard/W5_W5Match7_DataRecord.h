#ifndef SHARD_W5_W5MATCH7_DATARECORD_H
#define SHARD_W5_W5MATCH7_DATARECORD_H
#include "common.h"
struct ItemDataRecord {
    /* 0x00 */ u8 unk00[0xde];
    /* 0xde */ u16 category;
    /* 0xe0 */ u8 unke0[0xc];
    /* 0xec */ u16 value;
};
extern "C" ItemDataRecord *FUN_001ad9b4(u32 id);
#endif
