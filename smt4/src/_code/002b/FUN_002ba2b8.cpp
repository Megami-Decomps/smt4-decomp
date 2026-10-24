/* NON_MATCHING: retail builds the type 2/3/4 register words as bit-field struct writes (bic/orr chains, hoisted masks r8/r9/fp) and loads the argument words with ldm; built packs the words with shifts and masks */
#include "shard/W6_W6Match5_DisplayMode.h"

/* The recorded render-state command carried by a graphics queue entry. */
struct RenderCommand {
    /* 0x00 */ u8 type;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 last;   /* 1: ends the replay */
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u32 a;
    /* 0x08 */ u32 b;
    /* 0x0C */ u32 c;
    /* 0x10 */ u32 d;
    /* 0x14 */ u32 e;
    /* 0x18 */ u32 f;
};
typedef char RenderCommandSizeCheck[sizeof(RenderCommand) == sizeof(GraphicsQueueEntry) ? 1 : -1];

extern "C" {

void FUN_00142fb8(u32 a, u32 b, u32 c, u32 d);
void FUN_00142fcc(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void FUN_00142fec(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void FUN_0014300c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void FUN_00147948(u32 a, u32 b, u32 c, u32 d);

/* Replays the recorded render-state commands of the current graphics queue up to the limit. */
void FUN_002ba2b8(void)
{
    if (g_asdGfxContext.submission.ready == 1)
        return;
    GraphicsQueue *queue = g_asdGfxContext.submission.queue;
    if ((s32)queue->activeCount >= (s32)queue->pendingCount)
        return;
    do {
        if ((s32)queue->activeCount >= (s32)(g_asdGfxContext.submission.replayLimit + queue->currentEntry))
            return;
        RenderCommand *cmd = reinterpret_cast<RenderCommand *>(&queue->entries[queue->activeCount]);
        switch (cmd->type) {
        case 0:
            FUN_00142fb8(cmd->b, cmd->a, cmd->c, ~cmd->d & 1);
            break;
        case 1:
            FUN_00147948(cmd->a, cmd->b, ~(cmd->c >> 2) & 1, cmd->c & 1);
            break;
        case 2:
            FUN_00142fec(cmd->a, cmd->a + (cmd->c & 0x7FFFFF), cmd->b, ((cmd->c >> 15) & 0x300) | 1,
                         cmd->d, (cmd->f & 0x7FFFFF) + cmd->d, cmd->e, ((cmd->f >> 15) & 0x300) | 1);
            break;
        case 3: {
            u32 e = cmd->e;
            u16 low = cmd->d;
            u32 flags = (e & 0x7F) >> 6;
            u32 ref = e << 25;
            bool inRange = (cmd->c & 0xFFFF) <= low;
            if (inRange)
                ref = cmd->d >> 16;
            if (!inRange || ref < cmd->c >> 16)
                flags |= 4;
            FUN_00142fcc(cmd->a, cmd->c & 0xFFFF, cmd->c >> 16, cmd->b, low, cmd->d >> 16,
                         ((e >> 6) & 0x20) | ((e & 0x200) << 7) | ((e & 0x180) << 17) | flags
                             | ((e & 7) << 8) | ((e & 0x38) << 9) | ((e >> 9) & 2));
            break;
        }
        case 4: {
            u32 flags = 0;
            if ((cmd->d & 0xFFFF) != 0 || (cmd->e & 0xFFFF) != 0)
                flags = 4;
            FUN_0014300c(cmd->a, cmd->b, cmd->c, cmd->d >> 16, cmd->d & 0xFFFF, cmd->e >> 16,
                         cmd->e & 0xFFFF, flags | 8);
            break;
        }
        }
        queue->activeCount++;
        if (cmd->last == 1) {
            g_asdGfxContext.submission.ready = 1;
            return;
        }
    } while ((s32)queue->activeCount < (s32)queue->pendingCount);
}

} /* extern "C" */
