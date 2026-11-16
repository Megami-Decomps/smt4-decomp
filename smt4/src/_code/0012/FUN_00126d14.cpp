/* NON_MATCHING: model state packet register scheduling has not matched retail. */
#include "common.h"

namespace {
struct ModelCommandSourceView {
    u8 unk000[0x138];
    u8 commands[1];
};
struct ModelStateResetPacket {
    u32 values[4];
};
}
extern "C" {
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;
extern const ModelStateResetPacket DAT_00410668;
u32 *asdGxGetCommandCursor(void);
u32 *FUN_002b5cf0(const void *source, u32 *cursor);
void asdModelAdvanceCommandCursorBetween(u32 *begin, u32 *end);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void gpuSubmitCommandBlock(const u32 *commands, u32 bytes, u32 mode);

/* Emit the model command block and restore the shared shader/draw-state registers. */
void FUN_00126d14(ModelCommandSourceView *source)
{
    u32 *begin = asdGxGetCommandCursor();
    u32 *end = FUN_002b5cf0(source->commands, begin);
    asdModelAdvanceCommandCursorBetween(begin, end);
    cursorResetFromParam();
    u32 *packet = g_modelCommandBuffer;
    packet[g_modelCommandWordCount] = 0x210;
    packet[g_modelCommandWordCount + 1] = 0xF02BB;
    g_modelCommandWordCount += 2;
    packet[g_modelCommandWordCount] = 0;
    packet[g_modelCommandWordCount + 1] = 0xF02BC;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
    ModelStateResetPacket reset = DAT_00410668;
    gpuSubmitCommandBlock(reset.values, sizeof(reset), 1);
    cursorResetFromParam();
    packet = g_modelCommandBuffer;
    packet[g_modelCommandWordCount] = 1;
    packet[g_modelCommandWordCount + 1] = 0xF0111;
    g_modelCommandWordCount += 2;
    packet[g_modelCommandWordCount] = 1;
    packet[g_modelCommandWordCount + 1] = 0xF0110;
    g_modelCommandWordCount += 2;
    packet[g_modelCommandWordCount] = 0;
    packet[g_modelCommandWordCount + 1] = 0x100E0;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
