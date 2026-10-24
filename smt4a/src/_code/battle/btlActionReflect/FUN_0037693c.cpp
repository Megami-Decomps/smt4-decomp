#include "common.h"
#include "AsdSDK/AsdDebug.h"

// Private layout views for this translation unit.
struct ReflectOwnerView {
    u32 unk00;             // 0x00
    u8 unk04[0x44];        // 0x04
    void* drawTask;        // 0x48
};

struct ReflectStateView {
    ReflectOwnerView* owner; // 0x00
    u32 unk04;               // 0x04
    u32 unk08;               // 0x08
    u32 unk0C;               // 0x0C
    u8 unk10[0xF0];          // 0x10
};

extern "C" {
void FUN_00369258();
void btlReflectReleaseContextAndStop();
void* taskCreateDraw(const char* name, u32 priority, u32 flags, u32 reserved,
                     void (*callback)(), void (*cleanup)(),
                     void* context, u32 ownerHandle);
void* asdMemoryAllocTracked(u32 size, u32 alignment, u32 flags,
                            u32 category, u32 tracked);
extern ReflectStateView* g_btlActionReflect;
}

// Create the reflection calculation task and initialize its shared state.
extern "C" void FUN_0037693c(ReflectOwnerView* owner)
{
    owner->drawTask = taskCreateDraw("btlActionReflect Calc", 4, 0, 0,
                                    FUN_00369258, btlReflectReleaseContextAndStop,
                                    owner, owner->unk00);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlActionReflect.cpp", 3965);

    ReflectStateView* state = static_cast<ReflectStateView*>(
        asdMemoryAllocTracked(0x100, 0x100, 0, 0x10, 1));
    g_btlActionReflect = state;
    state->unk04 = 0;
    state->owner = owner;
    state->unk08 = 0;
    state->unk0C = 0;
}
