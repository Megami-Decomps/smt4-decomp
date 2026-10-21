/* NON_MATCHING: retail uses ldr r1, [pc, #52] where the compiled block uses ldr r1, [pc, #48]. */
#include "common.h"

struct EplPosition {
    f32 x; // +0x00
    f32 y; // +0x04
    f32 z; // +0x08
    f32 w; // +0x0C
};

struct EplSlotStorage {
    u8 data[0x64]; // Slot stride
};

struct EplSlotData {
    u8 unk00[0x48];
    EplPosition position; // +0x48
};

struct EplSlotView {
    u8 unk00[0x0C];
    EplSlotData data; // +0x0C
    u32 unk64;        // +0x64
    void* object;     // +0x68
};

extern "C" {
extern EplSlotStorage* g_eplSlots;
void FUN_001b4eb8(void* object, EplPosition* position);

void FUN_00294774(u32 slotIndex, f32 x, f32 y, f32 z)
{
    EplSlotView* slot = reinterpret_cast<EplSlotView*>(&g_eplSlots[slotIndex]);
    void* object = slot->object;
    if (object != NULL) {
        slot->data.position.x = x;
        slot->data.position.y = y;
        slot->data.position.z = z;
        slot->data.position.w = 0.0f;
        FUN_001b4eb8(object, &slot->data.position);
    }
}
}
