#include "common.h"
#include "shard/W6_W6Match3_FormatBuffer.h"
extern "C" {
extern struct { u32 reserved; struct { u8 unk00[0x174]; s32 mode; } *work; } g_campCec;
void uiDrawExtendedRecordLabel(s32 mode, u32 value);
void campCecDispatchMode(u32 value) {
    if (g_campCec.work && g_campCec.work->mode && value)
        uiDrawExtendedRecordLabel(g_campCec.work->mode, value);
}
}
