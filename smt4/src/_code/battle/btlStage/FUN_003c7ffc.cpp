/* NON_MATCHING: compiler schedules flags in R3 early and stage context through R0; retail uses R3 for stage context until the call and orders extent-default moves differently. */
#include "battle/btlStage.h"

struct CriticalSection;
struct StageRequest {
    u8 unk00[0x84]; // 0x00
    s32 width;      // 0x84
    s32 height;     // 0x88
    u8 unk8c[0x14]; // 0x8c
    BtlStage* stage; // 0xa0
    u8 unka4[0x10]; // 0xa4
    u16 pending;     // 0xb4
    u8 unkb6[2];     // 0xb6
    u8 criticalSection[1]; // 0xb8: embedded SDK lock; remaining extent is opaque
};

extern "C" {
extern BtlStage* g_btlStage;
void nn_os_CriticalSection_Enter(CriticalSection* section);
void nn_os_CriticalSection_Leave(CriticalSection* section);
void FUN_003400f0(StageRequest* request, s32 width, s32 height, u32 flags);

// Queues stage work under the embedded lock, using a 1x1 extent for negative dimensions.
void FUN_003c7ffc(StageRequest* request)
{
    CriticalSection* section = reinterpret_cast<CriticalSection*>(request->criticalSection);
    nn_os_CriticalSection_Enter(section);
    s32 width, height;
    if (request->width >= 0 && request->height >= 0) {
        width = request->width;
        height = request->height;
    } else {
        width = height = 1;
    }
    request->stage = g_btlStage;
    FUN_003400f0(request, width, height, 0x1c0);
    request->pending = 1;
    nn_os_CriticalSection_Leave(section);
}
}
