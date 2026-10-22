/* NON_MATCHING: only the display-address and enabled-value temporary registers are swapped (retail r2/r3, compiled r3/r2). */
#include "addon/aocMain.h"

struct MappedOperationStatus {
    s32 code;   // 0x00
    u32 detail; // 0x04
};

struct OperationStatusState {
    u8 enabled;                   // 0x00
    u8 unk01[3];                  // 0x01
    MappedOperationStatus result; // 0x04
    u32 mode;                     // 0x0c
};

struct AocOperationState {
    u8 unk000[0x310];           // 0x000
    u32 first;                   // 0x310
    u32 second;                  // 0x314
    u32 unk318;                  // 0x318
    OperationStatusState status; // 0x31c
    u8 unk32c[0x18];            // 0x32c
    u32 pending;                 // 0x344
    u8 unk348[8];               // 0x348
    u32 count;                   // 0x350
    u8 unk354[0xf4];            // 0x354
    u32 lastFirst;               // 0x448
    u32 lastSecond;              // 0x44c
};

extern "C" {
extern AocDisplay* g_aocDisplay;
MappedOperationStatus* _ZN18WindowStatusResultC1Ej(MappedOperationStatus* result, u32 code);

// Clear the operation state, request the AOC display update and initialize a success result.
void aocResetOperationState(AocOperationState* state)
{
    state->pending = 0;
    state->first = 0;
    state->second = 0;
    state->count = 0;
    state->lastFirst = 0;
    state->lastSecond = 0;
    g_aocDisplay->unk450C = 1;
    OperationStatusState* status = &state->status;
    status->enabled = 1;
    status->mode = 0;
    MappedOperationStatus result;
    status->result = *_ZN18WindowStatusResultC1Ej(&result, 0);
}
}
