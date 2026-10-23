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
extern u32 *DAT_004729e0;
extern u32 DAT_004729e4;
extern const ModelStateResetPacket DAT_00410668;
u32 *FUN_002b7148(void);
u32 *FUN_002b5cf0(const void *source, u32 *cursor);
void FUN_002af390(u32 *begin, u32 *end);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_002adba8(const u32 *commands, u32 bytes, u32 mode);

/* Emit the model command block and restore the shared shader/draw-state registers. */
void FUN_00126d14(ModelCommandSourceView *source)
{
    u32 *begin = FUN_002b7148();
    u32 *end = FUN_002b5cf0(source->commands, begin);
    FUN_002af390(begin, end);
    cursorResetFromParam();
    u32 *packet = DAT_004729e0;
    packet[DAT_004729e4] = 0x210;
    packet[DAT_004729e4 + 1] = 0xF02BB;
    DAT_004729e4 += 2;
    packet[DAT_004729e4] = 0;
    packet[DAT_004729e4 + 1] = 0xF02BC;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
    ModelStateResetPacket reset = DAT_00410668;
    FUN_002adba8(reset.values, sizeof(reset), 1);
    cursorResetFromParam();
    packet = DAT_004729e0;
    packet[DAT_004729e4] = 1;
    packet[DAT_004729e4 + 1] = 0xF0111;
    DAT_004729e4 += 2;
    packet[DAT_004729e4] = 1;
    packet[DAT_004729e4 + 1] = 0xF0110;
    DAT_004729e4 += 2;
    packet[DAT_004729e4] = 0;
    packet[DAT_004729e4 + 1] = 0x100E0;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
}
}
