/* NON_MATCHING: readable rewrite from the decompiler draft, not yet compared against retail. */
#include "common.h"

extern "C" {

void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

extern s8 DAT_0061a481;
extern s8 DAT_0061a482;
extern void* DAT_0061a510;

// One queued sprite blit of a command list (0x1c bytes).
struct BlitCommand {
    u8 kind;        // 0x00: 3 = blit
    u8 unk01[3];
    u32 source;     // 0x04
    s32 dest;       // 0x08
    u16 srcW;       // 0x0c
    u16 srcH;       // 0x0e
    u16 dstW;       // 0x10
    u16 dstH;       // 0x12
    u32 flags;      // 0x14: 0-2 source format, 3-5 dest format, 6 clip, 7-8 alignment, 9 wide
    u8 unk18[4];
};

struct BlitList {
    u8 unk00[0x18];
    BlitCommand* commands;  // 0x18
    u8 unk1c[4];
    s32 count;              // 0x20
};

// Queues a blit command with the given source/destination texture formats.
void FUN_0017e22c(BlitList* list, u32 source, s32 width, s32 height, s32 srcFormat, s32 dest,
                  s32 cols, s32 rows, s32 dstFormat, s32 layout, s32 clip, s32 pitch)
{
    u32 alignment, scaleW, scaleH;
    if (layout == 0x500) {
        alignment = 0; scaleW = 1; scaleH = 1;
    } else if (layout == 0x501) {
        alignment = 1; scaleW = 2; scaleH = 1;
    } else if (layout == 0x502) {
        alignment = 2; scaleW = 2; scaleH = 2;
    } else {
        return;
    }

    u32 srcCode;
    if (srcFormat == 0x8057) srcCode = 3;
    else if (srcFormat == 0x8051) srcCode = 1;
    else if (srcFormat == 0x8056) srcCode = 4;
    else if (srcFormat == 0x8058) srcCode = 0;
    else if (srcFormat == 0x8d62) srcCode = 2;
    else return;

    s32 dstCode, dstBytes;
    if (dstFormat == 0x8057) { dstCode = 3; dstBytes = 2; }
    else if (dstFormat == 0x8051) { dstCode = 1; dstBytes = 3; }
    else if (dstFormat == 0x8056) { dstCode = 4; dstBytes = 2; }
    else if (dstFormat == 0x8058) { dstCode = 0; dstBytes = 4; }
    else if (dstFormat == 0x8d62) { dstCode = 2; dstBytes = 2; }
    else return;

    if (width != 0 && height != 0 && cols != 0 && rows != 0) {
        BlitCommand* cmd = &list->commands[list->count];
        cmd->kind = 3;
        cmd->source = source;
        cmd->dest = dest;
        u32 flags = (cmd->flags & ~0x3f) | srcCode | (dstCode << 3);
        cmd->flags = flags;
        cmd->srcW = width;
        cmd->srcH = height;
        cmd->dstW = cols * scaleW;
        cmd->dstH = rows * scaleH;
        if (clip == 0) {
            flags &= ~0x40;
        } else {
            u32 x = cmd->srcW;
            u32 w = cmd->dstW;
            u32 h = cmd->dstH;
            if (x > w || h < cmd->srcH) {
                s32 adjust;
                if (scaleW != 2) {
                    adjust = (x - w) * (h - 1) * dstBytes;
                } else {
                    u32 d = x - w;
                    u32 mask = (dstBytes == 3) ? 0x10 : 8;
                    if ((d & mask) != 0) d -= mask;
                    adjust = (s32)(d * (rows - 1) * dstBytes) / 2;
                }
                cmd->dest = dest - adjust;
            }
            flags |= 0x40;
        }
        flags = (flags & ~0x180) | (alignment << 7);
        if (pitch == 0x20) {
            flags |= 0x200;
        } else {
            flags &= ~0x200;
        }
        cmd->flags = flags & ~0xc00;

        globalCriticalSectionEnterForward();
        list->count++;
        if (DAT_0061a510 == list && DAT_0061a482 != 0 && DAT_0061a481 == 0) {
            DAT_0061a481 = 1;
            FUN_001963e0();
        }
        globalCriticalSectionLeaveForward();
    }
}

} /* extern "C" */
