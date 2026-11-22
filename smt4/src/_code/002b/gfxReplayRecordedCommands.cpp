/* NON_MATCHING: 144 lines: the type 3 flags are now built as retail does (bit-field writes into a zeroed word); retail keeps the record in r4 and the queue in r5 (swapped here), hoists the 0x7000 mask too, loads the type 0/1 flag words before the other arguments (ours folds them into one ldm) and reuses the zero of the type 4 gap test as the flag word. */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

/* The packed transfer options a type 3 command records (its `e` word). */
struct RecordedTransferOptions {
    u32 inputFormat : 3;
    u32 outputFormat : 3;
    u32 flipVertical : 1;
    u32 scaling : 2;
    u32 blockMode32 : 1;
    u32 outputTiled : 1;
    u32 keepTiled : 1;
    u32 : 20;
};

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
    union {
        /* 0x14 */ u32 e;
        /* 0x14 */ RecordedTransferOptions transferOptions;   /* type 3 */
    };
    /* 0x18 */ u32 f;
};
typedef char RenderCommandSizeCheck[sizeof(RenderCommand) == sizeof(AsdCmdRecord) ? 1 : -1];

/* The display-transfer flags word FUN_00142fcc takes. */
struct DisplayTransferFlags {
    u32 flipVertical : 1;   /* bit 0 */
    u32 outputTiled : 1;    /* bit 1 */
    u32 crop : 1;           /* bit 2: the destination is smaller than the source */
    u32 : 2;
    u32 keepTiled : 1;      /* bit 5 */
    u32 : 2;
    u32 inputFormat : 3;    /* bits 8-10 */
    u32 : 1;
    u32 outputFormat : 3;   /* bits 12-14 */
    u32 : 1;
    u32 blockMode32 : 1;    /* bit 16 */
    u32 : 7;
    u32 scaling : 2;        /* bits 24-25 */
    u32 : 6;
};

extern "C" {

void FUN_00142fb8(u32 a, u32 b, u32 c, u32 d);
void FUN_00142fcc(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void FUN_00142fec(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void FUN_0014300c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void FUN_00147948(u32 a, u32 b, u32 c, u32 d);

/* Replays the recorded render-state commands of the current graphics queue up to the limit. */
void gfxReplayRecordedCommands(void)
{
    if (g_asdGfxContext.ready == 1)
        return;
    AsdCmdBuffer *queue = g_asdGfxContext.activeBuffer;
    if ((s32)queue->unk24 >= (s32)queue->listCount)
        return;
    do {
        if ((s32)queue->unk24 >= (s32)(g_asdGfxContext.replayLimit + queue->unk28))
            return;
        RenderCommand *cmd = reinterpret_cast<RenderCommand *>(&queue->entries[queue->unk24]);
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
            RecordedTransferOptions options = cmd->transferOptions;
            union {
                u32 word;
                DisplayTransferFlags bits;
            } flags;
            flags.word = 0;
            flags.bits.flipVertical = options.flipVertical;
            flags.bits.crop = !((cmd->d & 0xFFFF) >= (cmd->c & 0xFFFF) && (cmd->d >> 16) >= (cmd->c >> 16));
            flags.bits.inputFormat = options.inputFormat;
            flags.bits.outputFormat = options.outputFormat;
            flags.bits.scaling = options.scaling;
            flags.bits.blockMode32 = options.blockMode32;
            flags.bits.outputTiled = options.outputTiled;
            flags.bits.keepTiled = options.keepTiled;
            FUN_00142fcc(cmd->a, cmd->c & 0xFFFF, cmd->c >> 16, cmd->b, cmd->d & 0xFFFF, cmd->d >> 16, flags.word);
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
        queue->unk24++;
        if (cmd->last == 1) {
            g_asdGfxContext.ready = 1;
            return;
        }
    } while ((s32)queue->unk24 < (s32)queue->listCount);
}

} /* extern "C" */
