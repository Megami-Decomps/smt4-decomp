#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


extern u8 *g_commandBufferCursor;
extern u8 *g_commandBufferEnd;
extern AsdGfxContext g_asdGfxContext;

/* Resets the active command buffer: clears its record list and counters and rewinds the write
 * cursor and end pointer to the buffer's start. */
void asdModelResetCommandBuffer(void)
{
    AsdCmdBuffer *buf = g_asdGfxContext.cmdBuffer;

    if (buf == NULL) {
        return;
    }
    if (buf->start == NULL && buf->list == NULL) {
        return;
    }
    memClear(buf->list, buf->listCount * 0x1c);
    buf->unk0c = 0;
    buf->unk10 = 0;
    buf->listCount = 0;
    buf->unk28 = 0;
    buf->unk14 = 0;
    buf->unk24 = 0;
    buf->unk34 = 0;
    buf->unk30 = 0;
    g_commandBufferCursor = buf->start;
    g_commandBufferEnd = g_commandBufferCursor + buf->size;
}

} /* extern "C" */
