/* NON_MATCHING: 266 lines: register allocation: retail loads the stack arguments in another order at entry (anti-aliasing mode and flip first, the destination address only where it is stored), keeps the output format's byte size and code in ip/r8 and addresses the record without writeback; the format switches, the record stores and the flip adjustment follow retail. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

void nngxLockEnter(void);
void nngxLockLeave(void);
void gfxReplayRecordedCommands(void);

/* Queues a block-to-linear display transfer (nngx's B2L transfer: GL colour formats, anti-aliasing mode
 * 0x500-0x502, flip, block size 8 or 32) on the command buffer, then starts submission if the buffer is
 * the active one and idle. */
void asdGxQueueDisplayTransfer(AsdCmdBuffer *queue, u32 source, s32 sourceWidth, s32 sourceHeight, s32 sourceFormat,
                  u32 destination, s32 destinationWidth, s32 destinationHeight, s32 destinationFormat,
                  s32 antialias, s32 flip, s32 blockSize)
{
    u32 antialiasMode;
    s32 scaleX;
    s32 scaleY;
    switch (antialias) {
    case 0x500:
        antialiasMode = 0;
        scaleX = 1;
        scaleY = 1;
        break;
    case 0x501:
        antialiasMode = 1;
        scaleX = 2;
        scaleY = 1;
        break;
    case 0x502:
        antialiasMode = 2;
        scaleX = 2;
        scaleY = 2;
        break;
    default:
        return;
    }

    u32 inputFormat;
    switch (sourceFormat) {
    case 0x8057: inputFormat = 3; break;
    case 0x8051: inputFormat = 1; break;
    case 0x8056: inputFormat = 4; break;
    case 0x8058: inputFormat = 0; break;
    case 0x8D62: inputFormat = 2; break;
    default: return;
    }

    u32 outputFormat;
    s32 pixelBytes;
    switch (destinationFormat) {
    case 0x8057: outputFormat = 3; pixelBytes = 2; break;
    case 0x8051: outputFormat = 1; pixelBytes = 3; break;
    case 0x8056: outputFormat = 4; pixelBytes = 2; break;
    case 0x8058: outputFormat = 0; pixelBytes = 4; break;
    case 0x8D62: outputFormat = 2; pixelBytes = 2; break;
    default: return;
    }

    if (sourceWidth == 0 || sourceHeight == 0 || destinationWidth == 0 || destinationHeight == 0)
        return;
    AsdCmdDisplayTransferRecord *record = (AsdCmdDisplayTransferRecord *)&queue->entries[queue->listCount];
    record->kind = 3;
    record->source = source;
    record->destination = destination;
    record->flags.inputFormat = inputFormat;
    record->flags.outputFormat = outputFormat;
    record->sourceSize.width = sourceWidth;
    record->sourceSize.height = sourceHeight;
    record->destinationSize.width = destinationWidth * scaleX;
    record->destinationSize.height = destinationHeight * scaleY;
    if (flip == 0) {
        record->flags.flip = 0;
    } else {
        AsdCmdDisplayTransferSize from = record->sourceSize;
        AsdCmdDisplayTransferSize to = record->destinationSize;
        if (from.width > to.width || from.height > to.height) {
            s32 offset;
            if (scaleX != 2) {
                offset = (from.width - to.width) * (to.height - 1) * pixelBytes;
            } else {
                u32 rows = from.width - to.width;
                u32 block = pixelBytes == 3 ? 16 : 8;
                if ((rows & block) != 0)
                    rows -= block;
                offset = (s32)(rows * (destinationHeight - 1) * pixelBytes) / 2;
            }
            record->destination = destination - offset;
        }
        record->flags.flip = 1;
    }
    record->flags.antialias = antialiasMode;
    record->flags.block32 = blockSize == 32 ? 1 : 0;
    record->flags.unk10 = 0;

    nngxLockEnter();
    queue->listCount++;
    if (g_asdGfxContext.activeBuffer == queue && g_asdGfxContext.submitEnabled != 0 &&
        g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitPending = 1;
        gfxReplayRecordedCommands();
    }
    nngxLockLeave();
}

} /* extern "C" */
