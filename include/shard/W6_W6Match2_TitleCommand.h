#ifndef SHARD_W6_W6MATCH2_TITLE_COMMAND_H
#define SHARD_W6_W6MATCH2_TITLE_COMMAND_H

#include "common.h"
#include <stddef.h>

struct TitleCommandState {
    u8 disabled;       // 0x00
    u8 commandActive;  // 0x01
    union {
        u8 unk02[0x0a];   // 0x02
        u8 overlayActive; // 0x02
    };
    u32 commandList;   // 0x0c
    union {
        u8 unk10[8];      // 0x10
        struct {
            u32 unk10;
            s32 frame; // 0x14
        } overlay;
    };
    u32 unk18;        // 0x18
};
typedef char TitleCommandOverlayLayout[
    offsetof(TitleCommandState, overlayActive) == 2 &&
    offsetof(TitleCommandState, overlay.frame) == 0x14 &&
    sizeof(TitleCommandState) == 0x1c ? 1 : -1];

extern "C" {
extern TitleCommandState g_titleFlags;
void asdGxCommandListEnd(u32 commandList, s32 submit);
}

#endif
