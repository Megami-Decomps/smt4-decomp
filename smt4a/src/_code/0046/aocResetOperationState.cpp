/* NON_MATCHING: only r2/r3 allocation for the display flag address and byte-one constant differs from retail. */
#include "addon/aocMain.h"

struct AocErrorDescriptor {
    u32 code;
    u32 messageId;
};

struct AocOperationStatus {
    bool active;
    u8 unk01[3];
    AocErrorDescriptor error;
    u32 state;
};

struct AocOperationView {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ u32 unk310;
    /* 0x314 */ u32 unk314;
    /* 0x318 */ u8 unk318[4];
    /* 0x31c */ AocOperationStatus status;
    /* 0x32c */ u8 unk32c[0x18];
    /* 0x344 */ u32 unk344;
    /* 0x348 */ u8 unk348[8];
    /* 0x350 */ u32 unk350;
    /* 0x354 */ u8 unk354[0x110];
    /* 0x464 */ u32 unk464;
    /* 0x468 */ u32 unk468;
};

extern "C" AocDisplay* g_aocDisplay;
extern "C" AocErrorDescriptor* _ZN18WindowStatusResultC1Ej(AocErrorDescriptor* output, u32 code);

extern "C" void aocResetOperationState(AocSystemA* system)
{
    AocOperationView* work = (AocOperationView*)system;
    work->unk344 = 0;
    work->unk310 = 0;
    work->unk314 = 0;
    work->unk350 = 0;
    work->unk464 = 0;
    work->unk468 = 0;
    g_aocDisplay->operationActive = 1;
    AocOperationStatus* status = &work->status;
    status->active = true;
    status->state = 0;
    AocErrorDescriptor success;
    status->error = *_ZN18WindowStatusResultC1Ej(&success, 0);
}
