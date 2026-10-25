/* NON_MATCHING: resumable voice loading uses different saved registers and table/gain load scheduling. */
#include "shard/GlobalBlocks.h"
#include <stddef.h>
#include "util/ScrGetCommandFrame.h"

extern "C" {
extern u32 DAT_00588fcc;
u32 FUN_001029da(const void *descriptor);
u32 FUN_001566a8(u32 group, u32 id, u32 kind, u8 flags, u8 priority, f32 leftGain, f32 rightGain);

u32 FUN_0037a5d4(u32 selector)
{
    struct RequestStatus { u8 state; u8 unk01[0x77]; };
    struct RequestDescriptor { u8 unk00[8]; u16 channel; u16 kind; };
    // The shared global block is byte-aligned; use a local view for its pointer.
    struct RequestControlView {
        RequestStatus slots[4];
        RequestDescriptor *descriptors;
        u8 flags;
    };
    typedef char RequestControlLayoutCheck[sizeof(RequestStatus) == 0x78 &&
        sizeof(RequestDescriptor) == 0xc && offsetof(RequestControlView, descriptors) == 0x1e0 &&
        offsetof(RequestControlView, flags) == 0x1e4 ? 1 : -1];
    RequestControlView *requests = (RequestControlView *)&DAT_0061978c;
    if (scrGetCommandFrame() != 0) {
        RequestStatus *status = DAT_00588fcc < 4 ? &requests->slots[DAT_00588fcc] : NULL;
        if (status->state != 2) {
            return 0;
        }
    } else {
        RequestDescriptor *descriptor = NULL;
        if (selector < 16 && requests->descriptors != NULL) {
            descriptor = &requests->descriptors[selector];
        }
        if (descriptor != NULL) {
            u8 flags = requests->flags | 4;
            u32 id = FUN_001029da(descriptor);
            f32 leftGain = 0.707f;
            f32 rightGain = 0.707f;
            if (descriptor->channel == 0) {
                rightGain = 0.1f;
            } else if (descriptor->channel == 1) {
                leftGain = 0.1f;
            }
            u32 request = FUN_001566a8(1, id, descriptor->kind & 0xff, flags, 1, leftGain, rightGain);
            DAT_00588fcc = request;
            if (request != 0xffffffff) {
                return 0;
            }
        }
    }
    return 1;
}
}
