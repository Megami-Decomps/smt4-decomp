/* NON_MATCHING: typed queue records fold position/attribute addresses differently and shorten the saved-register set. */
#include "battle/btlUI.h"
#include "map/mapDepart.h"

extern "C" {
extern BtlUiGlobals g_btlUi;

u32 FUN_0028a0d0(u32 flags, u32 value, u8 first, u8 second, s32 enabled, u32 mode, f32 x, f32 y, f32 z)
{
    struct Request {
        MapVector position;
        u8 active;
        u8 mode;
        u8 unk0E[2];
        u32 value;
        u8 unk14[2];
        u8 first;
        u8 second;
    };
    struct Row { Request entries[8]; };
    struct QueueView {
        u8 prefix[0xC9EC];
        Row rows[16];
        u8 unkD5EC[0x10];
        s8 counts[16];
    };
    if (enabled) {
        QueueView *queue = reinterpret_cast<QueueView *>(g_btlUi.ui);
        s32 slot = -1;
        for (s32 i = 0; i < 16; ++i) {
            s32 count = queue->counts[i];
            if (static_cast<u32>(count - 1) < 7) {
                const MapVector *previous = &queue->rows[i].entries[count - 1].position;
                if (previous->x == x && previous->y == y && previous->z == z) {
                    slot = i;
                    break;
                }
            }
        }
        if (slot < 0) {
            for (s32 i = 0; i < 16; ++i) {
                if (queue->counts[i] <= 0) {
                    slot = i;
                    break;
                }
            }
        }
        if (static_cast<u32>(slot) < 16 && queue->counts[slot] < 8) {
            Request *request = &queue->rows[slot].entries[queue->counts[slot]];
            request->active = 1;
            request->mode = mode;
            request->position.x = x;
            request->position.y = y;
            request->position.z = z;
            request->value = value;
            request->first = first;
            request->second = second;
            ++queue->counts[slot];
            return slot;
        }
    }
    return ~0u;
}
}
