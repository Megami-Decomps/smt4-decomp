/* NON_MATCHING: position queue indexing and float-store register allocation differ. */
#include "battle/btlUI.h"

extern "C" BtlUiGlobals g_btlUi;

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
        if (static_cast<u32>(count - 1) < 7) {
            const Request *previous = &queue->groups[group].requests[count - 1];
            if (previous->x == x && previous->y == y && previous->z == z) {
                selected = group;
                break;
            }
        }
    }
    if (selected < 0) {
        for (s32 group = 0; group < 16; ++group) {
            if (queue->counts[group] < 1) {
                selected = group;
                break;
            }
        }
    }
    if (static_cast<u32>(selected) < 17 && queue->counts[selected] < 8) {
        Request *request = &queue->groups[selected].requests[queue->counts[selected]];
        request->active = 1;
        request->mode = mode;
        request->x = x;
        request->y = y;
        request->z = z;
        request->kind = kind;
        queue->counts[selected]++;
        return selected;
    }
    return 0xFFFFFFFF;
}
