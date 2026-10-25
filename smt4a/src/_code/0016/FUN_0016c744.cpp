/* NON_MATCHING: model state packet register scheduling has not matched retail. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

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
extern u32 *DAT_005b3fe4;
extern u32 DAT_005b3fe8;
extern const ModelStateResetPacket DAT_00544d30;
u32 *FUN_00177e6c(const void *source, u32 *cursor);
void asdModelCommitCommandRange(u32 *begin, u32 *end);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_001b4128(const u32 *commands, u32 bytes, u32 mode);

/* Emit the model command block and restore the shared shader/draw-state registers. */
void FUN_0016c744(ModelCommandSourceView *source)
{
    u32 *begin = reinterpret_cast<u32 *>(reinterpret_cast<u32 *>(asdGxGetCommandCursor()));
    u32 *end = FUN_00177e6c(source->commands, begin);
    asdModelCommitCommandRange(begin, end);
    cursorResetFromParam();
    u32 *packet = DAT_005b3fe4;
    packet[DAT_005b3fe8] = 0x210;
    packet[DAT_005b3fe8 + 1] = 0xF02BB;
    DAT_005b3fe8 += 2;
    packet[DAT_005b3fe8] = 0;
    packet[DAT_005b3fe8 + 1] = 0xF02BC;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
    ModelStateResetPacket reset = DAT_00544d30;
    FUN_001b4128(reset.values, sizeof(reset), 1);
    cursorResetFromParam();
    packet = DAT_005b3fe4;
    packet[DAT_005b3fe8] = 1;
    packet[DAT_005b3fe8 + 1] = 0xF0111;
    DAT_005b3fe8 += 2;
    packet[DAT_005b3fe8] = 1;
    packet[DAT_005b3fe8 + 1] = 0xF0110;
    DAT_005b3fe8 += 2;
    packet[DAT_005b3fe8] = 0;
    packet[DAT_005b3fe8 + 1] = 0x100E0;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
}
}
