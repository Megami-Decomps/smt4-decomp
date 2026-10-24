/* NON_MATCHING: only register naming of the slot address computation differs (retail: ldr r0,[g_mapGimic]; add r1,idx*3; add r0,r0,r1,lsl #3). */
#include "common.h"

struct GimicObject {
    u8 unk00[4];
    u32 handle; // 0x04
};

struct GimicSlot {
    u8 active;          // 0x00
    u8 unk01;
    u8 unk02[2];
    s16 id;             // 0x04
    u8 unk06[2];
    GimicObject *obj;   // 0x08
    u8 unk0c[0xc];
};

struct GimicTable {
    u8 unk000[0x8c4];
    GimicSlot slots[10]; // 0x8c4
};

extern "C" {
extern GimicTable *g_mapGimic;
void FUN_003fd7c0(u32 controller, u32 motion, s32 mode, f32 blend);

// Start motion on every active map gimmick with the requested id.
void FUN_003a2818(s32 id, u32 motion)
{
    for (s32 index = 0; index < 10; ++index) {
        GimicSlot *slot = &g_mapGimic->slots[index];
        if (slot->active != 0 && slot->id == id) {
            FUN_003fd7c0(slot->obj->handle, motion, 2, 0.0f);
        }
    }
}
}
