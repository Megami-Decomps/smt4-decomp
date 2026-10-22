/* NON_MATCHING: Retail ldr r1, [pc, #132] differs from recovered ldr r0, [pc, #120]. */
#include "common.h"

namespace {

struct RecordView {
    u8 unk00[0x62];         // 0x00
    u16 unk62;              // 0x62
    u8 unk64[0xC8];         // 0x64
};

struct RecordLookupView {
    u8 unk00[0x68];         // 0x00
    RecordView records[24]; // 0x68
    s8 recordIndices[24];  // 0x1C88
};

struct GameDataView {
    u8 unk00[0x8C];         // 0x00
    RecordLookupView lookup; // 0x8C
    u8 unk1D2C[0x26168];    // 0x1D2C
    s16 unk27E94;           // 0x27E94
};

struct GameDataBlocksView {
    u8 unk00[4];            // 0x00
    GameDataView* data;     // 0x04
};

}

extern "C" {
extern GameDataBlocksView g_gameDataBlocks;
}

// Find the first indexed record matching the current nonzero identifier.
extern "C" RecordView* FUN_0031cf00(void)
{
    RecordView* result = 0;
    GameDataView* data = g_gameDataBlocks.data;
    RecordLookupView* lookup = &data->lookup;
    s32 identifier = data->unk27E94;

    if (identifier != 0) {
        for (s32 slot = 0; slot < 24; ++slot) {
            s32 recordIndex = lookup->recordIndices[slot];
            if (recordIndex >= 0 && lookup->records[recordIndex].unk62 == identifier) {
                result = &lookup->records[lookup->recordIndices[slot]];
                break;
            }
        }
    }
    return result;
}
