/* NON_MATCHING: retail places the failure return (pop; mvn r0, #0) between the bounds checks and the append;
 * this build places it after the append. */
#include "battle/BtlUiGlobal.h"


/* Append to an existing position group or start an unused group. */
extern "C" u32 FUN_00289fa8(u32, u8 kind, u8 mode, f32 x, f32 y, f32 z)
{
    /* Local views preserve the byte alignment of the shared BtlUiObjD unions. */
    struct Request {
        f32 x, y, z;
        u8 active, mode, kind;
        u8 unk0F[5];
    };
    struct Group { Request requests[8]; };
    struct QueueView {
        u8 unk0000[0xD60C];
        Group groups[16];
        u8 unkE00C[0x10];
        s8 counts[16];
    };
    QueueView *queue = reinterpret_cast<QueueView *>(g_btlUi.ui);
    s32 selected = -1;
    for (s32 group = 0; group < 16; ++group) {
        s32 count = queue->counts[group];
        if (count > 0 && count < 8) {
            if (queue->groups[group].requests[count - 1].x == x && queue->groups[group].requests[count - 1].y == y &&
                queue->groups[group].requests[count - 1].z == z) {
                selected = group;
                break;
            }
        }
    }
    if (selected < 0) {
        for (s32 group = 0; group < 16; ++group) {
            if (queue->counts[group] <= 0) {
                selected = group;
                break;
            }
        }
    }
    if (static_cast<u32>(selected) < 17 && queue->counts[selected] < 8) {
        s32 count = queue->counts[selected];
        queue->groups[selected].requests[count].active = 1;
        queue->groups[selected].requests[count].mode = mode;
        queue->groups[selected].requests[count].x = x;
        queue->groups[selected].requests[count].y = y;
        queue->groups[selected].requests[count].z = z;
        queue->groups[selected].requests[count].kind = kind;
        queue->counts[selected]++;
        return selected;
    }
    return 0xFFFFFFFF;
}
