#ifndef SHARD_W5_W5MATCH7_SELECTEDRECORD_H
#define SHARD_W5_W5MATCH7_SELECTEDRECORD_H
#include "common.h"
struct SelectionOwner { u8 unk00[0x2c]; s32 index; };
struct SelectedRecord { u16 values[4]; };
extern "C" {
extern SelectionOwner *g_callbackWork;
SelectedRecord *FUN_002613f0(s32 index);
}
#endif
