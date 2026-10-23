/* NON_MATCHING: active first-indicator branch remains inline instead of retail's out-of-line block and padding. */
#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;
s32 FUN_00288498(void);
void FUN_002bf288(u32 layer, u32 kind, u32 sprite, s32 x, s32 y, u32 flags);

// Draw paired status indicators using their active or inactive sprite variants.
void FUN_0029ab54(s32 x, s32 y)
{
    // The shared padding begins unaligned; keep this aligned view local.
    struct StatusIndicatorView {
        u8 unk000[0x424];
        s32 first;
        s32 second;
    };
    StatusIndicatorView *status = reinterpret_cast<StatusIndicatorView *>(g_statusDown);
    if (FUN_00288498()) {
        if (status->first != 1 && status->first != 2) {
            FUN_002bf288(2, 0x1A, 0x4D3, x, y, 0xBA);
            FUN_002bf288(2, 0x1A, 0x4D7, x, y, 0xBA);
        } else {
            FUN_002bf288(2, 0x1A, 0x4D5, x, y, 0xBA);
            FUN_002bf288(2, 0x1A, 0x4D9, x, y, 0xBA);
        }
        if (status->second == 1 || status->second == 2) {
            FUN_002bf288(2, 0x1A, 0x4D4, x, y, 0xBA);
            FUN_002bf288(2, 0x1A, 0x4D8, x, y, 0xBA);
            return;
        }
        FUN_002bf288(2, 0x1A, 0x4D2, x, y, 0xBA);
        FUN_002bf288(2, 0x1A, 0x4D6, x, y, 0xBA);
    }
}
}
