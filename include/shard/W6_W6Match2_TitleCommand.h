#ifndef SHARD_W6_W6MATCH2_TITLE_COMMAND_H
#define SHARD_W6_W6MATCH2_TITLE_COMMAND_H

#include "common.h"

struct TitleCommandState {
    u8 disabled;       // 0x00
    u8 commandActive;  // 0x01
    u8 unk02[0x0a];   // 0x02
    u32 commandList;   // 0x0c
    u8 unk10[8];      // 0x10
    u32 unk18;        // 0x18
};

extern "C" {
extern TitleCommandState g_titleFlags;
void asdGxCommandListEnd(u32 commandList, s32 submit);
}

#endif
